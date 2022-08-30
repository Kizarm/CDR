#COM = arm, nat
COM ?= arm
PRJ  = goertzel

VPATH  = .
BLD    = ./build/
DFLAGS = -d
LFLAGS = -Wl,-Map=$(@:%.elf=%.map),-gc-sections
LDLIBS =
BFLAGS = --strip-unneeded

CFLAGS = -MMD -Wall -g -fno-exceptions -ffunction-sections -fdata-sections -fshort-enums
CFLAGS+= -I. -I./common
CCPU   = -mcpu=cortex-m0
MCPU   = -mthumb $(CCPU)
#-mfpu=fpv4-sp-d16 -mfloat-abi=hard

include Makefile.clang
#include Makefile.gcc

all: $(BLD) $(PRJ).elf
# zdrojaky
OBJS   = main.o system.o usart.o adc_class.o dac_class.o io_manip.o
OBJS  += generator.o goertzel.o
ifeq ($(COM),arm)
VPATH += ./common/stm32l0
OBJS  += startup.o abi.o gpio.o
else
VPATH += ./common/unix
LDLIBS+= -lpthread -lasound
endif
BOBJS = $(addprefix $(BLD),$(OBJS))

# ... atd.
-include $(BLD)*.d
# linker
$(PRJ).elf: $(BOBJS)
	-@echo [LD $(COM)] $@
	@$(LD) $(LFLAGS) -o $(PRJ).elf $(BOBJS) $(LDLIBS)
	-@echo "size:"
	$(SIZE) $(PRJ).elf
	-@echo "listing:"
	$(DUMP) $(DFLAGS) $(PRJ).elf > $(PRJ).lst
	-@echo "OK."
	$(COPY) $(BFLAGS) -O binary $(PRJ).elf $(PRJ).bin
# preloz co je potreba
$(BLD)%.o: %.c
	-@echo [CC $(COM)] $@
	@$(CC) -c $(CFLAGS) $< -o $@
$(BLD)%.o: %.cpp
	-@echo [CX $(COM)] $@
	@$(CX) -std=c++14 -fno-rtti -c $(CFLAGS) $< -o $@
$(BLD):
	mkdir $(BLD)
# vycisti
clean:
	$(DEL) $(BLD)* *.lst *.bin *.elf *.map *~
.PHONY: all clean
