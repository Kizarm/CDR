#ifndef STM32F0x1_GENERATED_HEADER
#define STM32F0x1_GENERATED_HEADER
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define __RO volatile const
#define __WO volatile
#define __RW volatile
#define __ROB const
#define __WOB
#define __RWB

/*! name = "STM32F0x1" */
/*! version = "1.2" */
/*! description = "STM32F0x1" */
/*! addressUnitBits = "8" */
/*! width = "32" */
/*! size = "0x20" */
/*! resetValue = "0x0" */
/*! resetMask = "0xFFFFFFFF" */

struct TIM_CR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CEN              :  1; /*!< Ofs=0, w=1 Counter enable */
      __RWB uint32_t UDIS             :  1; /*!< Ofs=1, w=1 Update disable */
      __RWB uint32_t URS              :  1; /*!< Ofs=2, w=1 Update request source */
      __RWB uint32_t OPM              :  1; /*!< Ofs=3, w=1 One-pulse mode */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Direction */
      __RWB uint32_t CMS              :  2; /*!< Ofs=5, w=2 Center-aligned mode selection */
      __RWB uint32_t ARPE             :  1; /*!< Ofs=7, w=1 Auto-reload preload enable */
      __RWB uint32_t CKD              :  2; /*!< Ofs=8, w=2 Clock division */
            uint32_t unused0          : 22;
    } B;
  };
#ifdef __cplusplus
  TIM_CR1_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CR1_s & r)) volatile {
    TIM_CR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CR1_s & r)) volatile {
    TIM_CR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CR2_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  3;
      __RWB uint32_t CCDS             :  1; /*!< Ofs=3, w=1 Capture/compare DMA selection */
      __RWB uint32_t MMS              :  3; /*!< Ofs=4, w=3 Master mode selection */
      __RWB uint32_t TI1S             :  1; /*!< Ofs=7, w=1 TI1 selection */
            uint32_t unused1          : 24;
    } B;
  };
#ifdef __cplusplus
  TIM_CR2_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CR2_s & r)) volatile {
    TIM_CR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CR2_s & r)) volatile {
    TIM_CR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_SMCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SMS              :  3; /*!< Ofs=0, w=3 Slave mode selection */
            uint32_t unused0          :  1;
      __RWB uint32_t TS               :  3; /*!< Ofs=4, w=3 Trigger selection */
      __RWB uint32_t MSM              :  1; /*!< Ofs=7, w=1 Master/Slave mode */
      __RWB uint32_t ETF              :  4; /*!< Ofs=8, w=4 External trigger filter */
      __RWB uint32_t ETPS             :  2; /*!< Ofs=12, w=2 External trigger prescaler */
      __RWB uint32_t ECE              :  1; /*!< Ofs=14, w=1 External clock enable */
      __RWB uint32_t ETP              :  1; /*!< Ofs=15, w=1 External trigger polarity */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_SMCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_SMCR_s & r)) volatile {
    TIM_SMCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_SMCR_s & r)) volatile {
    TIM_SMCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_DIER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t UIE              :  1; /*!< Ofs=0, w=1 Update interrupt enable */
      __RWB uint32_t CC1IE            :  1; /*!< Ofs=1, w=1 Capture/Compare 1 interrupt enable */
      __RWB uint32_t CC2IE            :  1; /*!< Ofs=2, w=1 Capture/Compare 2 interrupt enable */
      __RWB uint32_t CC3IE            :  1; /*!< Ofs=3, w=1 Capture/Compare 3 interrupt enable */
      __RWB uint32_t CC4IE            :  1; /*!< Ofs=4, w=1 Capture/Compare 4 interrupt enable */
            uint32_t unused0          :  1;
      __RWB uint32_t TIE              :  1; /*!< Ofs=6, w=1 Trigger interrupt enable */
            uint32_t unused1          :  1;
      __RWB uint32_t UDE              :  1; /*!< Ofs=8, w=1 Update DMA request enable */
      __RWB uint32_t CC1DE            :  1; /*!< Ofs=9, w=1 Capture/Compare 1 DMA request enable */
      __RWB uint32_t CC2DE            :  1; /*!< Ofs=10, w=1 Capture/Compare 2 DMA request enable */
      __RWB uint32_t CC3DE            :  1; /*!< Ofs=11, w=1 Capture/Compare 3 DMA request enable */
      __RWB uint32_t CC4DE            :  1; /*!< Ofs=12, w=1 Capture/Compare 4 DMA request enable */
      __RWB uint32_t COMDE            :  1; /*!< Ofs=13, w=1 COM DMA request enable */
      __RWB uint32_t TDE              :  1; /*!< Ofs=14, w=1 Trigger DMA request enable */
            uint32_t unused2          : 17;
    } B;
  };
#ifdef __cplusplus
  TIM_DIER_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_DIER_s & r)) volatile {
    TIM_DIER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_DIER_s & r)) volatile {
    TIM_DIER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_SR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t UIF              :  1; /*!< Ofs=0, w=1 Update interrupt flag */
      __RWB uint32_t CC1IF            :  1; /*!< Ofs=1, w=1 Capture/compare 1 interrupt flag */
      __RWB uint32_t CC2IF            :  1; /*!< Ofs=2, w=1 Capture/Compare 2 interrupt flag */
      __RWB uint32_t CC3IF            :  1; /*!< Ofs=3, w=1 Capture/Compare 3 interrupt flag */
      __RWB uint32_t CC4IF            :  1; /*!< Ofs=4, w=1 Capture/Compare 4 interrupt flag */
            uint32_t unused0          :  1;
      __RWB uint32_t TIF              :  1; /*!< Ofs=6, w=1 Trigger interrupt flag */
            uint32_t unused1          :  2;
      __RWB uint32_t CC1OF            :  1; /*!< Ofs=9, w=1 Capture/Compare 1 overcapture flag */
      __RWB uint32_t CC2OF            :  1; /*!< Ofs=10, w=1 Capture/compare 2 overcapture flag */
      __RWB uint32_t CC3OF            :  1; /*!< Ofs=11, w=1 Capture/Compare 3 overcapture flag */
      __RWB uint32_t CC4OF            :  1; /*!< Ofs=12, w=1 Capture/Compare 4 overcapture flag */
            uint32_t unused2          : 19;
    } B;
  };
#ifdef __cplusplus
  TIM_SR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_SR_s & r)) volatile {
    TIM_SR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_SR_s & r)) volatile {
    TIM_SR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_EGR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t UG               :  1; /*!< Ofs=0, w=1 Update generation */
      __WOB uint32_t CC1G             :  1; /*!< Ofs=1, w=1 Capture/compare 1 generation */
      __WOB uint32_t CC2G             :  1; /*!< Ofs=2, w=1 Capture/compare 2 generation */
      __WOB uint32_t CC3G             :  1; /*!< Ofs=3, w=1 Capture/compare 3 generation */
      __WOB uint32_t CC4G             :  1; /*!< Ofs=4, w=1 Capture/compare 4 generation */
            uint32_t unused0          :  1;
      __WOB uint32_t TG               :  1; /*!< Ofs=6, w=1 Trigger generation */
            uint32_t unused1          : 25;
    } B;
  };
#ifdef __cplusplus
  TIM_EGR_s(): R(0) {};
  void setbits (uint32_t (*f) (TIM_EGR_s & r)) volatile {
    TIM_EGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCMR1_Output_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CC1S             :  2; /*!< Ofs=0, w=2 Capture/Compare 1 selection */
      __RWB uint32_t OC1FE            :  1; /*!< Ofs=2, w=1 Output compare 1 fast enable */
      __RWB uint32_t OC1PE            :  1; /*!< Ofs=3, w=1 Output compare 1 preload enable */
      __RWB uint32_t OC1M             :  3; /*!< Ofs=4, w=3 Output compare 1 mode */
      __RWB uint32_t OC1CE            :  1; /*!< Ofs=7, w=1 Output compare 1 clear enable */
      __RWB uint32_t CC2S             :  2; /*!< Ofs=8, w=2 Capture/Compare 2 selection */
      __RWB uint32_t OC2FE            :  1; /*!< Ofs=10, w=1 Output compare 2 fast enable */
      __RWB uint32_t OC2PE            :  1; /*!< Ofs=11, w=1 Output compare 2 preload enable */
      __RWB uint32_t OC2M             :  3; /*!< Ofs=12, w=3 Output compare 2 mode */
      __RWB uint32_t OC2CE            :  1; /*!< Ofs=15, w=1 Output compare 2 clear enable */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_CCMR1_Output_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCMR1_Output_s & r)) volatile {
    TIM_CCMR1_Output_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCMR1_Output_s & r)) volatile {
    TIM_CCMR1_Output_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCMR1_Input_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CC1S             :  2; /*!< Ofs=0, w=2 Capture/Compare 1 selection */
      __RWB uint32_t IC1PSC           :  2; /*!< Ofs=2, w=2 Input capture 1 prescaler */
      __RWB uint32_t IC1F             :  4; /*!< Ofs=4, w=4 Input capture 1 filter */
      __RWB uint32_t CC2S             :  2; /*!< Ofs=8, w=2 Capture/compare 2 selection */
      __RWB uint32_t IC2PSC           :  2; /*!< Ofs=10, w=2 Input capture 2 prescaler */
      __RWB uint32_t IC2F             :  4; /*!< Ofs=12, w=4 Input capture 2 filter */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_CCMR1_Input_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCMR1_Input_s & r)) volatile {
    TIM_CCMR1_Input_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCMR1_Input_s & r)) volatile {
    TIM_CCMR1_Input_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCMR2_Input_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CC3S             :  2; /*!< Ofs=0, w=2 Capture/Compare 3 selection */
      __RWB uint32_t IC3PSC           :  2; /*!< Ofs=2, w=2 Input capture 3 prescaler */
      __RWB uint32_t IC3F             :  4; /*!< Ofs=4, w=4 Input capture 3 filter */
      __RWB uint32_t CC4S             :  2; /*!< Ofs=8, w=2 Capture/Compare 4 selection */
      __RWB uint32_t IC4PSC           :  2; /*!< Ofs=10, w=2 Input capture 4 prescaler */
      __RWB uint32_t IC4F             :  4; /*!< Ofs=12, w=4 Input capture 4 filter */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_CCMR2_Input_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCMR2_Input_s & r)) volatile {
    TIM_CCMR2_Input_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCMR2_Input_s & r)) volatile {
    TIM_CCMR2_Input_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCMR2_Output_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CC3S             :  2; /*!< Ofs=0, w=2 Capture/Compare 3 selection */
      __RWB uint32_t OC3FE            :  1; /*!< Ofs=2, w=1 Output compare 3 fast enable */
      __RWB uint32_t OC3PE            :  1; /*!< Ofs=3, w=1 Output compare 3 preload enable */
      __RWB uint32_t OC3M             :  3; /*!< Ofs=4, w=3 Output compare 3 mode */
      __RWB uint32_t OC3CE            :  1; /*!< Ofs=7, w=1 Output compare 3 clear enable */
      __RWB uint32_t CC4S             :  2; /*!< Ofs=8, w=2 Capture/Compare 4 selection */
      __RWB uint32_t OC4FE            :  1; /*!< Ofs=10, w=1 Output compare 4 fast enable */
      __RWB uint32_t OC4PE            :  1; /*!< Ofs=11, w=1 Output compare 4 preload enable */
      __RWB uint32_t OC4M             :  3; /*!< Ofs=12, w=3 Output compare 4 mode */
      __RWB uint32_t OC4CE            :  1; /*!< Ofs=15, w=1 Output compare 4 clear enable */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_CCMR2_Output_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCMR2_Output_s & r)) volatile {
    TIM_CCMR2_Output_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCMR2_Output_s & r)) volatile {
    TIM_CCMR2_Output_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CC1E             :  1; /*!< Ofs=0, w=1 Capture/Compare 1 output enable */
      __RWB uint32_t CC1P             :  1; /*!< Ofs=1, w=1 Capture/Compare 1 output Polarity */
            uint32_t unused0          :  1;
      __RWB uint32_t CC1NP            :  1; /*!< Ofs=3, w=1 Capture/Compare 1 output Polarity */
      __RWB uint32_t CC2E             :  1; /*!< Ofs=4, w=1 Capture/Compare 2 output enable */
      __RWB uint32_t CC2P             :  1; /*!< Ofs=5, w=1 Capture/Compare 2 output Polarity */
            uint32_t unused1          :  1;
      __RWB uint32_t CC2NP            :  1; /*!< Ofs=7, w=1 Capture/Compare 2 output Polarity */
      __RWB uint32_t CC3E             :  1; /*!< Ofs=8, w=1 Capture/Compare 3 output enable */
      __RWB uint32_t CC3P             :  1; /*!< Ofs=9, w=1 Capture/Compare 3 output Polarity */
            uint32_t unused2          :  1;
      __RWB uint32_t CC3NP            :  1; /*!< Ofs=11, w=1 Capture/Compare 3 output Polarity */
      __RWB uint32_t CC4E             :  1; /*!< Ofs=12, w=1 Capture/Compare 4 output enable */
      __RWB uint32_t CC4P             :  1; /*!< Ofs=13, w=1 Capture/Compare 3 output Polarity */
            uint32_t unused3          :  1;
      __RWB uint32_t CC4NP            :  1; /*!< Ofs=15, w=1 Capture/Compare 4 output Polarity */
            uint32_t unused4          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_CCER_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCER_s & r)) volatile {
    TIM_CCER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCER_s & r)) volatile {
    TIM_CCER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CNT_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CNT_L            : 16; /*!< Ofs=0, w=16 Low counter value */
      __RWB uint32_t CNT_H            : 16; /*!< Ofs=16, w=16 High counter value (TIM2 only) */
    } B;
  };
#ifdef __cplusplus
  TIM_CNT_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CNT_s & r)) volatile {
    TIM_CNT_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CNT_s & r)) volatile {
    TIM_CNT_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_PSC_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PSC              : 16; /*!< Ofs=0, w=16 Prescaler value */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_PSC_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_PSC_s & r)) volatile {
    TIM_PSC_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_PSC_s & r)) volatile {
    TIM_PSC_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_ARR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ARR_L            : 16; /*!< Ofs=0, w=16 Low Auto-reload value */
      __RWB uint32_t ARR_H            : 16; /*!< Ofs=16, w=16 High Auto-reload value (TIM2 only) */
    } B;
  };
#ifdef __cplusplus
  TIM_ARR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_ARR_s & r)) volatile {
    TIM_ARR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_ARR_s & r)) volatile {
    TIM_ARR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_RCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t REP              :  8; /*!< Ofs=0, w=8 Repetition counter value */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  TIM_RCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_RCR_s & r)) volatile {
    TIM_RCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_RCR_s & r)) volatile {
    TIM_RCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CCR1_L           : 16; /*!< Ofs=0, w=16 Low Capture/Compare 1 value */
      __RWB uint32_t CCR1_H           : 16; /*!< Ofs=16, w=16 High Capture/Compare 1 value (TIM2 only) */
    } B;
  };
#ifdef __cplusplus
  TIM_CCR1_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCR1_s & r)) volatile {
    TIM_CCR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCR1_s & r)) volatile {
    TIM_CCR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CCR2_L           : 16; /*!< Ofs=0, w=16 Low Capture/Compare 2 value */
      __RWB uint32_t CCR2_H           : 16; /*!< Ofs=16, w=16 High Capture/Compare 2 value (TIM2 only) */
    } B;
  };
#ifdef __cplusplus
  TIM_CCR2_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCR2_s & r)) volatile {
    TIM_CCR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCR2_s & r)) volatile {
    TIM_CCR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CCR3_L           : 16; /*!< Ofs=0, w=16 Low Capture/Compare value */
      __RWB uint32_t CCR3_H           : 16; /*!< Ofs=16, w=16 High Capture/Compare value (TIM2 only) */
    } B;
  };
#ifdef __cplusplus
  TIM_CCR3_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCR3_s & r)) volatile {
    TIM_CCR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCR3_s & r)) volatile {
    TIM_CCR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_CCR4_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CCR4_L           : 16; /*!< Ofs=0, w=16 Low Capture/Compare value */
      __RWB uint32_t CCR4_H           : 16; /*!< Ofs=16, w=16 High Capture/Compare value (TIM2 only) */
    } B;
  };
#ifdef __cplusplus
  TIM_CCR4_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_CCR4_s & r)) volatile {
    TIM_CCR4_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_CCR4_s & r)) volatile {
    TIM_CCR4_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_BDTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DTG              :  8; /*!< Ofs=0, w=8 Dead-time generator setup */
      __RWB uint32_t LOCK             :  2; /*!< Ofs=8, w=2 Lock configuration */
      __RWB uint32_t OSSI             :  1; /*!< Ofs=10, w=1 Off-state selection for Idle mode */
      __RWB uint32_t OSSR             :  1; /*!< Ofs=11, w=1 Off-state selection for Run mode */
      __RWB uint32_t BKE              :  1; /*!< Ofs=12, w=1 Break enable */
      __RWB uint32_t BKP              :  1; /*!< Ofs=13, w=1 Break polarity */
      __RWB uint32_t AOE              :  1; /*!< Ofs=14, w=1 Automatic output enable */
      __RWB uint32_t MOE              :  1; /*!< Ofs=15, w=1 Main output enable */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_BDTR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_BDTR_s & r)) volatile {
    TIM_BDTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_BDTR_s & r)) volatile {
    TIM_BDTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_DCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DBA              :  5; /*!< Ofs=0, w=5 DMA base address */
            uint32_t unused0          :  3;
      __RWB uint32_t DBL              :  5; /*!< Ofs=8, w=5 DMA burst length */
            uint32_t unused1          : 19;
    } B;
  };
#ifdef __cplusplus
  TIM_DCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_DCR_s & r)) volatile {
    TIM_DCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_DCR_s & r)) volatile {
    TIM_DCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_DMAR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DMAR             : 16; /*!< Ofs=0, w=16 DMA register for burst accesses */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  TIM_DMAR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_DMAR_s & r)) volatile {
    TIM_DMAR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_DMAR_s & r)) volatile {
    TIM_DMAR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TIM_OR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RMP              :  2; /*!< Ofs=0, w=2 Timer input 1 remap */
            uint32_t unused0          : 30;
    } B;
  };
#ifdef __cplusplus
  TIM_OR_s(): R(0) {};
  void modify  (uint32_t (*f) (TIM_OR_s & r)) volatile {
    TIM_OR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TIM_OR_s & r)) volatile {
    TIM_OR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_TR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SU               :  4; /*!< Ofs=0, w=4 Second units in BCD format */
      __RWB uint32_t ST               :  3; /*!< Ofs=4, w=3 Second tens in BCD format */
            uint32_t unused0          :  1;
      __RWB uint32_t MNU              :  4; /*!< Ofs=8, w=4 Minute units in BCD format */
      __RWB uint32_t MNT              :  3; /*!< Ofs=12, w=3 Minute tens in BCD format */
            uint32_t unused1          :  1;
      __RWB uint32_t HU               :  4; /*!< Ofs=16, w=4 Hour units in BCD format */
      __RWB uint32_t HT               :  2; /*!< Ofs=20, w=2 Hour tens in BCD format */
      __RWB uint32_t PM               :  1; /*!< Ofs=22, w=1 AM/PM notation */
            uint32_t unused2          :  9;
    } B;
  };
#ifdef __cplusplus
  RTC_TR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_TR_s & r)) volatile {
    RTC_TR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_TR_s & r)) volatile {
    RTC_TR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_DR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DU               :  4; /*!< Ofs=0, w=4 Date units in BCD format */
      __RWB uint32_t DT               :  2; /*!< Ofs=4, w=2 Date tens in BCD format */
            uint32_t unused0          :  2;
      __RWB uint32_t MU               :  4; /*!< Ofs=8, w=4 Month units in BCD format */
      __RWB uint32_t MT               :  1; /*!< Ofs=12, w=1 Month tens in BCD format */
      __RWB uint32_t WDU              :  3; /*!< Ofs=13, w=3 Week day units */
      __RWB uint32_t YU               :  4; /*!< Ofs=16, w=4 Year units in BCD format */
      __RWB uint32_t YT               :  4; /*!< Ofs=20, w=4 Year tens in BCD format */
            uint32_t unused1          :  8;
    } B;
  };
#ifdef __cplusplus
  RTC_DR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_DR_s & r)) volatile {
    RTC_DR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_DR_s & r)) volatile {
    RTC_DR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  3;
      __RWB uint32_t TSEDGE           :  1; /*!< Ofs=3, w=1 Time-stamp event active edge */
      __RWB uint32_t REFCKON          :  1; /*!< Ofs=4, w=1 RTC_REFIN reference clock detection enable (50 or 60 Hz) */
      __RWB uint32_t BYPSHAD          :  1; /*!< Ofs=5, w=1 Bypass the shadow registers */
      __RWB uint32_t FMT              :  1; /*!< Ofs=6, w=1 Hour format */
            uint32_t unused1          :  1;
      __RWB uint32_t ALRAE            :  1; /*!< Ofs=8, w=1 Alarm A enable */
            uint32_t unused2          :  2;
      __RWB uint32_t TSE              :  1; /*!< Ofs=11, w=1 timestamp enable */
      __RWB uint32_t ALRAIE           :  1; /*!< Ofs=12, w=1 Alarm A interrupt enable */
            uint32_t unused3          :  2;
      __RWB uint32_t TSIE             :  1; /*!< Ofs=15, w=1 Time-stamp interrupt enable */
      __WOB uint32_t ADD1H            :  1; /*!< Ofs=16, w=1 Add 1 hour (summer time change) */
      __WOB uint32_t SUB1H            :  1; /*!< Ofs=17, w=1 Subtract 1 hour (winter time change) */
      __RWB uint32_t BKP              :  1; /*!< Ofs=18, w=1 Backup */
      __RWB uint32_t COSEL            :  1; /*!< Ofs=19, w=1 Calibration output selection */
      __RWB uint32_t POL              :  1; /*!< Ofs=20, w=1 Output polarity */
      __RWB uint32_t OSEL             :  2; /*!< Ofs=21, w=2 Output selection */
      __RWB uint32_t COE              :  1; /*!< Ofs=23, w=1 Calibration output enable */
            uint32_t unused4          :  8;
    } B;
  };
#ifdef __cplusplus
  RTC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_CR_s & r)) volatile {
    RTC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_CR_s & r)) volatile {
    RTC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_ISR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t ALRAWF           :  1; /*!< Ofs=0, w=1 Alarm A write flag */
            uint32_t unused0          :  2;
      __RWB uint32_t SHPF             :  1; /*!< Ofs=3, w=1 Shift operation pending */
      __ROB uint32_t INITS            :  1; /*!< Ofs=4, w=1 Initialization status flag */
      __RWB uint32_t RSF              :  1; /*!< Ofs=5, w=1 Registers synchronization flag */
      __ROB uint32_t INITF            :  1; /*!< Ofs=6, w=1 Initialization flag */
      __RWB uint32_t INIT             :  1; /*!< Ofs=7, w=1 Initialization mode */
      __RWB uint32_t ALRAF            :  1; /*!< Ofs=8, w=1 Alarm A flag */
            uint32_t unused1          :  2;
      __RWB uint32_t TSF              :  1; /*!< Ofs=11, w=1 Time-stamp flag */
      __RWB uint32_t TSOVF            :  1; /*!< Ofs=12, w=1 Time-stamp overflow flag */
      __RWB uint32_t TAMP1F           :  1; /*!< Ofs=13, w=1 RTC_TAMP1 detection flag */
      __RWB uint32_t TAMP2F           :  1; /*!< Ofs=14, w=1 RTC_TAMP2 detection flag */
            uint32_t unused2          :  1;
      __ROB uint32_t RECALPF          :  1; /*!< Ofs=16, w=1 Recalibration pending Flag */
            uint32_t unused3          : 15;
    } B;
  };
#ifdef __cplusplus
  RTC_ISR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_ISR_s & r)) volatile {
    RTC_ISR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_ISR_s & r)) volatile {
    RTC_ISR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_PRER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PREDIV_S         : 15; /*!< Ofs=0, w=15 Synchronous prescaler factor */
            uint32_t unused0          :  1;
      __RWB uint32_t PREDIV_A         :  7; /*!< Ofs=16, w=7 Asynchronous prescaler factor */
            uint32_t unused1          :  9;
    } B;
  };
#ifdef __cplusplus
  RTC_PRER_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_PRER_s & r)) volatile {
    RTC_PRER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_PRER_s & r)) volatile {
    RTC_PRER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_ALRMAR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SU               :  4; /*!< Ofs=0, w=4 Second units in BCD format. */
      __RWB uint32_t ST               :  3; /*!< Ofs=4, w=3 Second tens in BCD format. */
      __RWB uint32_t MSK1             :  1; /*!< Ofs=7, w=1 Alarm A seconds mask */
      __RWB uint32_t MNU              :  4; /*!< Ofs=8, w=4 Minute units in BCD format. */
      __RWB uint32_t MNT              :  3; /*!< Ofs=12, w=3 Minute tens in BCD format. */
      __RWB uint32_t MSK2             :  1; /*!< Ofs=15, w=1 Alarm A minutes mask */
      __RWB uint32_t HU               :  4; /*!< Ofs=16, w=4 Hour units in BCD format. */
      __RWB uint32_t HT               :  2; /*!< Ofs=20, w=2 Hour tens in BCD format. */
      __RWB uint32_t PM               :  1; /*!< Ofs=22, w=1 AM/PM notation */
      __RWB uint32_t MSK3             :  1; /*!< Ofs=23, w=1 Alarm A hours mask */
      __RWB uint32_t DU               :  4; /*!< Ofs=24, w=4 Date units or day in BCD format. */
      __RWB uint32_t DT               :  2; /*!< Ofs=28, w=2 Date tens in BCD format. */
      __RWB uint32_t WDSEL            :  1; /*!< Ofs=30, w=1 Week day selection */
      __RWB uint32_t MSK4             :  1; /*!< Ofs=31, w=1 Alarm A date mask */
    } B;
  };
#ifdef __cplusplus
  RTC_ALRMAR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_ALRMAR_s & r)) volatile {
    RTC_ALRMAR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_ALRMAR_s & r)) volatile {
    RTC_ALRMAR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_WPR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t KEY              :  8; /*!< Ofs=0, w=8 Write protection key */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  RTC_WPR_s(): R(0) {};
  void setbits (uint32_t (*f) (RTC_WPR_s & r)) volatile {
    RTC_WPR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_SSR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t SS               : 16; /*!< Ofs=0, w=16 Sub second value */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  RTC_SSR_s(__RO RTC_SSR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct RTC_SHIFTR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t SUBFS            : 15; /*!< Ofs=0, w=15 Subtract a fraction of a second */
            uint32_t unused0          : 16;
      __WOB uint32_t ADD1S            :  1; /*!< Ofs=31, w=1 Add one second */
    } B;
  };
#ifdef __cplusplus
  RTC_SHIFTR_s(): R(0) {};
  void setbits (uint32_t (*f) (RTC_SHIFTR_s & r)) volatile {
    RTC_SHIFTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_TSTR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t SU               :  4; /*!< Ofs=0, w=4 Second units in BCD format. */
      __ROB uint32_t ST               :  3; /*!< Ofs=4, w=3 Second tens in BCD format. */
            uint32_t unused0          :  1;
      __ROB uint32_t MNU              :  4; /*!< Ofs=8, w=4 Minute units in BCD format. */
      __ROB uint32_t MNT              :  3; /*!< Ofs=12, w=3 Minute tens in BCD format. */
            uint32_t unused1          :  1;
      __ROB uint32_t HU               :  4; /*!< Ofs=16, w=4 Hour units in BCD format. */
      __ROB uint32_t HT               :  2; /*!< Ofs=20, w=2 Hour tens in BCD format. */
      __ROB uint32_t PM               :  1; /*!< Ofs=22, w=1 AM/PM notation */
            uint32_t unused2          :  9;
    } B;
  };
#ifdef __cplusplus
  RTC_TSTR_s(__RO RTC_TSTR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct RTC_TSDR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DU               :  4; /*!< Ofs=0, w=4 Date units in BCD format */
      __ROB uint32_t DT               :  2; /*!< Ofs=4, w=2 Date tens in BCD format */
            uint32_t unused0          :  2;
      __ROB uint32_t MU               :  4; /*!< Ofs=8, w=4 Month units in BCD format */
      __ROB uint32_t MT               :  1; /*!< Ofs=12, w=1 Month tens in BCD format */
      __ROB uint32_t WDU              :  3; /*!< Ofs=13, w=3 Week day units */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  RTC_TSDR_s(__RO RTC_TSDR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct RTC_TSSSR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t SS               : 16; /*!< Ofs=0, w=16 Sub second value */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  RTC_TSSSR_s(__RO RTC_TSSSR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct RTC_CALR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CALM             :  9; /*!< Ofs=0, w=9 Calibration minus */
            uint32_t unused0          :  4;
      __RWB uint32_t CALW16           :  1; /*!< Ofs=13, w=1 Use a 16-second calibration cycle period */
      __RWB uint32_t CALW8            :  1; /*!< Ofs=14, w=1 Use an 8-second calibration cycle period */
      __RWB uint32_t CALP             :  1; /*!< Ofs=15, w=1 Increase frequency of RTC by 488.5 ppm */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  RTC_CALR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_CALR_s & r)) volatile {
    RTC_CALR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_CALR_s & r)) volatile {
    RTC_CALR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_TAFCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TAMP1E           :  1; /*!< Ofs=0, w=1 RTC_TAMP1 input detection enable */
      __RWB uint32_t TAMP1TRG         :  1; /*!< Ofs=1, w=1 Active level for RTC_TAMP1 input */
      __RWB uint32_t TAMPIE           :  1; /*!< Ofs=2, w=1 Tamper interrupt enable */
      __RWB uint32_t TAMP2E           :  1; /*!< Ofs=3, w=1 RTC_TAMP2 input detection enable */
      __RWB uint32_t TAMP2_TRG        :  1; /*!< Ofs=4, w=1 Active level for RTC_TAMP2 input */
            uint32_t unused0          :  2;
      __RWB uint32_t TAMPTS           :  1; /*!< Ofs=7, w=1 Activate timestamp on tamper detection event */
      __RWB uint32_t TAMPFREQ         :  3; /*!< Ofs=8, w=3 Tamper sampling frequency */
      __RWB uint32_t TAMPFLT          :  2; /*!< Ofs=11, w=2 RTC_TAMPx filter count */
      __RWB uint32_t TAMP_PRCH        :  2; /*!< Ofs=13, w=2 RTC_TAMPx precharge duration */
      __RWB uint32_t TAMP_PUDIS       :  1; /*!< Ofs=15, w=1 RTC_TAMPx pull-up disable */
            uint32_t unused1          :  2;
      __RWB uint32_t PC13VALUE        :  1; /*!< Ofs=18, w=1 RTC_ALARM output type/PC13 value */
      __RWB uint32_t PC13MODE         :  1; /*!< Ofs=19, w=1 PC13 mode */
      __RWB uint32_t PC14VALUE        :  1; /*!< Ofs=20, w=1 PC14 value */
      __RWB uint32_t PC14MODE         :  1; /*!< Ofs=21, w=1 PC14 mode */
      __RWB uint32_t PC15VALUE        :  1; /*!< Ofs=22, w=1 PC15 value */
      __RWB uint32_t PC15MODE         :  1; /*!< Ofs=23, w=1 PC15 mode */
            uint32_t unused2          :  8;
    } B;
  };
#ifdef __cplusplus
  RTC_TAFCR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_TAFCR_s & r)) volatile {
    RTC_TAFCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_TAFCR_s & r)) volatile {
    RTC_TAFCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_ALRMASSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SS               : 15; /*!< Ofs=0, w=15 Sub seconds value */
            uint32_t unused0          :  9;
      __RWB uint32_t MASKSS           :  4; /*!< Ofs=24, w=4 Mask the most-significant bits starting at this bit */
            uint32_t unused1          :  4;
    } B;
  };
#ifdef __cplusplus
  RTC_ALRMASSR_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_ALRMASSR_s & r)) volatile {
    RTC_ALRMASSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_ALRMASSR_s & r)) volatile {
    RTC_ALRMASSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_BKP0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BKP              : 32; /*!< Ofs=0, w=32 BKP */
    } B;
  };
#ifdef __cplusplus
  RTC_BKP0R_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_BKP0R_s & r)) volatile {
    RTC_BKP0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_BKP0R_s & r)) volatile {
    RTC_BKP0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_BKP1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BKP              : 32; /*!< Ofs=0, w=32 BKP */
    } B;
  };
#ifdef __cplusplus
  RTC_BKP1R_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_BKP1R_s & r)) volatile {
    RTC_BKP1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_BKP1R_s & r)) volatile {
    RTC_BKP1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_BKP2R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BKP              : 32; /*!< Ofs=0, w=32 BKP */
    } B;
  };
#ifdef __cplusplus
  RTC_BKP2R_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_BKP2R_s & r)) volatile {
    RTC_BKP2R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_BKP2R_s & r)) volatile {
    RTC_BKP2R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_BKP3R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BKP              : 32; /*!< Ofs=0, w=32 BKP */
    } B;
  };
#ifdef __cplusplus
  RTC_BKP3R_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_BKP3R_s & r)) volatile {
    RTC_BKP3R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_BKP3R_s & r)) volatile {
    RTC_BKP3R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RTC_BKP4R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BKP              : 32; /*!< Ofs=0, w=32 BKP */
    } B;
  };
#ifdef __cplusplus
  RTC_BKP4R_s(): R(0) {};
  void modify  (uint32_t (*f) (RTC_BKP4R_s & r)) volatile {
    RTC_BKP4R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RTC_BKP4R_s & r)) volatile {
    RTC_BKP4R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct WWDG_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t T                :  7; /*!< Ofs=0, w=7 7-bit counter */
      __RWB uint32_t WDGA             :  1; /*!< Ofs=7, w=1 Activation bit */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  WWDG_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (WWDG_CR_s & r)) volatile {
    WWDG_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (WWDG_CR_s & r)) volatile {
    WWDG_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct WWDG_CFR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t W                :  7; /*!< Ofs=0, w=7 7-bit window value */
      __RWB uint32_t WDGTB            :  2; /*!< Ofs=7, w=2 Timer base */
      __RWB uint32_t EWI              :  1; /*!< Ofs=9, w=1 Early wakeup interrupt */
            uint32_t unused0          : 22;
    } B;
  };
#ifdef __cplusplus
  WWDG_CFR_s(): R(0) {};
  void modify  (uint32_t (*f) (WWDG_CFR_s & r)) volatile {
    WWDG_CFR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (WWDG_CFR_s & r)) volatile {
    WWDG_CFR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct WWDG_SR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EWIF             :  1; /*!< Ofs=0, w=1 Early wakeup interrupt flag */
            uint32_t unused0          : 31;
    } B;
  };
#ifdef __cplusplus
  WWDG_SR_s(): R(0) {};
  void modify  (uint32_t (*f) (WWDG_SR_s & r)) volatile {
    WWDG_SR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (WWDG_SR_s & r)) volatile {
    WWDG_SR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct IWDG_KR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t KEY              : 16; /*!< Ofs=0, w=16 Key value */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  IWDG_KR_s(): R(0) {};
  void setbits (uint32_t (*f) (IWDG_KR_s & r)) volatile {
    IWDG_KR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct IWDG_PR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PR               :  3; /*!< Ofs=0, w=3 Prescaler divider */
            uint32_t unused0          : 29;
    } B;
  };
#ifdef __cplusplus
  IWDG_PR_s(): R(0) {};
  void modify  (uint32_t (*f) (IWDG_PR_s & r)) volatile {
    IWDG_PR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (IWDG_PR_s & r)) volatile {
    IWDG_PR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct IWDG_RLR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RL               : 12; /*!< Ofs=0, w=12 Watchdog counter reload value */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  IWDG_RLR_s(): R(0) {};
  void modify  (uint32_t (*f) (IWDG_RLR_s & r)) volatile {
    IWDG_RLR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (IWDG_RLR_s & r)) volatile {
    IWDG_RLR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct IWDG_SR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t PVU              :  1; /*!< Ofs=0, w=1 Watchdog prescaler value update */
      __ROB uint32_t RVU              :  1; /*!< Ofs=1, w=1 Watchdog counter reload value update */
      __ROB uint32_t WVU              :  1; /*!< Ofs=2, w=1 Watchdog counter window value update */
            uint32_t unused0          : 29;
    } B;
  };
#ifdef __cplusplus
  IWDG_SR_s(__RO IWDG_SR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct IWDG_WINR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t WIN              : 12; /*!< Ofs=0, w=12 Watchdog counter window value */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  IWDG_WINR_s(): R(0) {};
  void modify  (uint32_t (*f) (IWDG_WINR_s & r)) volatile {
    IWDG_WINR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (IWDG_WINR_s & r)) volatile {
    IWDG_WINR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_CR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PE               :  1; /*!< Ofs=0, w=1 Peripheral enable */
      __RWB uint32_t TXIE             :  1; /*!< Ofs=1, w=1 TX Interrupt enable */
      __RWB uint32_t RXIE             :  1; /*!< Ofs=2, w=1 RX Interrupt enable */
      __RWB uint32_t ADDRIE           :  1; /*!< Ofs=3, w=1 Address match interrupt enable (slave only) */
      __RWB uint32_t NACKIE           :  1; /*!< Ofs=4, w=1 Not acknowledge received interrupt enable */
      __RWB uint32_t STOPIE           :  1; /*!< Ofs=5, w=1 STOP detection Interrupt enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=6, w=1 Transfer Complete interrupt enable */
      __RWB uint32_t ERRIE            :  1; /*!< Ofs=7, w=1 Error interrupts enable */
      __RWB uint32_t DNF              :  4; /*!< Ofs=8, w=4 Digital noise filter */
      __RWB uint32_t ANFOFF           :  1; /*!< Ofs=12, w=1 Analog noise filter OFF */
      __WOB uint32_t SWRST            :  1; /*!< Ofs=13, w=1 Software reset */
      __RWB uint32_t TXDMAEN          :  1; /*!< Ofs=14, w=1 DMA transmission requests enable */
      __RWB uint32_t RXDMAEN          :  1; /*!< Ofs=15, w=1 DMA reception requests enable */
      __RWB uint32_t SBC              :  1; /*!< Ofs=16, w=1 Slave byte control */
      __RWB uint32_t NOSTRETCH        :  1; /*!< Ofs=17, w=1 Clock stretching disable */
      __RWB uint32_t WUPEN            :  1; /*!< Ofs=18, w=1 Wakeup from STOP enable */
      __RWB uint32_t GCEN             :  1; /*!< Ofs=19, w=1 General call enable */
      __RWB uint32_t SMBHEN           :  1; /*!< Ofs=20, w=1 SMBus Host address enable */
      __RWB uint32_t SMBDEN           :  1; /*!< Ofs=21, w=1 SMBus Device Default address enable */
      __RWB uint32_t ALERTEN          :  1; /*!< Ofs=22, w=1 SMBUS alert enable */
      __RWB uint32_t PECEN            :  1; /*!< Ofs=23, w=1 PEC enable */
            uint32_t unused0          :  8;
    } B;
  };
#ifdef __cplusplus
  I2C_CR1_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_CR1_s & r)) volatile {
    I2C_CR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_CR1_s & r)) volatile {
    I2C_CR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_CR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SADD0            :  1; /*!< Ofs=0, w=1 Slave address bit 0 (master mode) */
      __RWB uint32_t SADD1            :  7; /*!< Ofs=1, w=7 Slave address bit 7:1 (master mode) */
      __RWB uint32_t SADD8            :  2; /*!< Ofs=8, w=2 Slave address bit 9:8 (master mode) */
      __RWB uint32_t RD_WRN           :  1; /*!< Ofs=10, w=1 Transfer direction (master mode) */
      __RWB uint32_t ADD10            :  1; /*!< Ofs=11, w=1 10-bit addressing mode (master mode) */
      __RWB uint32_t HEAD10R          :  1; /*!< Ofs=12, w=1 10-bit address header only read direction (master receiver mode) */
      __RWB uint32_t START            :  1; /*!< Ofs=13, w=1 Start generation */
      __RWB uint32_t STOP             :  1; /*!< Ofs=14, w=1 Stop generation (master mode) */
      __RWB uint32_t NACK             :  1; /*!< Ofs=15, w=1 NACK generation (slave mode) */
      __RWB uint32_t NBYTES           :  8; /*!< Ofs=16, w=8 Number of bytes */
      __RWB uint32_t RELOAD           :  1; /*!< Ofs=24, w=1 NBYTES reload mode */
      __RWB uint32_t AUTOEND          :  1; /*!< Ofs=25, w=1 Automatic end mode (master mode) */
      __RWB uint32_t PECBYTE          :  1; /*!< Ofs=26, w=1 Packet error checking byte */
            uint32_t unused0          :  5;
    } B;
  };
#ifdef __cplusplus
  I2C_CR2_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_CR2_s & r)) volatile {
    I2C_CR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_CR2_s & r)) volatile {
    I2C_CR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_OAR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t OA1_0            :  1; /*!< Ofs=0, w=1 Interface address */
      __RWB uint32_t OA1_1            :  7; /*!< Ofs=1, w=7 Interface address */
      __RWB uint32_t OA1_8            :  2; /*!< Ofs=8, w=2 Interface address */
      __RWB uint32_t OA1MODE          :  1; /*!< Ofs=10, w=1 Own Address 1 10-bit mode */
            uint32_t unused0          :  4;
      __RWB uint32_t OA1EN            :  1; /*!< Ofs=15, w=1 Own Address 1 enable */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  I2C_OAR1_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_OAR1_s & r)) volatile {
    I2C_OAR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_OAR1_s & r)) volatile {
    I2C_OAR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_OAR2_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  1;
      __RWB uint32_t OA2              :  7; /*!< Ofs=1, w=7 Interface address */
      __RWB uint32_t OA2MSK           :  3; /*!< Ofs=8, w=3 Own Address 2 masks */
            uint32_t unused1          :  4;
      __RWB uint32_t OA2EN            :  1; /*!< Ofs=15, w=1 Own Address 2 enable */
            uint32_t unused2          : 16;
    } B;
  };
#ifdef __cplusplus
  I2C_OAR2_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_OAR2_s & r)) volatile {
    I2C_OAR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_OAR2_s & r)) volatile {
    I2C_OAR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_TIMINGR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SCLL             :  8; /*!< Ofs=0, w=8 SCL low period (master mode) */
      __RWB uint32_t SCLH             :  8; /*!< Ofs=8, w=8 SCL high period (master mode) */
      __RWB uint32_t SDADEL           :  4; /*!< Ofs=16, w=4 Data hold time */
      __RWB uint32_t SCLDEL           :  4; /*!< Ofs=20, w=4 Data setup time */
            uint32_t unused0          :  4;
      __RWB uint32_t PRESC            :  4; /*!< Ofs=28, w=4 Timing prescaler */
    } B;
  };
#ifdef __cplusplus
  I2C_TIMINGR_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_TIMINGR_s & r)) volatile {
    I2C_TIMINGR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_TIMINGR_s & r)) volatile {
    I2C_TIMINGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_TIMEOUTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TIMEOUTA         : 12; /*!< Ofs=0, w=12 Bus timeout A */
      __RWB uint32_t TIDLE            :  1; /*!< Ofs=12, w=1 Idle clock timeout detection */
            uint32_t unused0          :  2;
      __RWB uint32_t TIMOUTEN         :  1; /*!< Ofs=15, w=1 Clock timeout enable */
      __RWB uint32_t TIMEOUTB         : 12; /*!< Ofs=16, w=12 Bus timeout B */
            uint32_t unused1          :  3;
      __RWB uint32_t TEXTEN           :  1; /*!< Ofs=31, w=1 Extended clock timeout enable */
    } B;
  };
#ifdef __cplusplus
  I2C_TIMEOUTR_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_TIMEOUTR_s & r)) volatile {
    I2C_TIMEOUTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_TIMEOUTR_s & r)) volatile {
    I2C_TIMEOUTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_ISR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TXE              :  1; /*!< Ofs=0, w=1 Transmit data register empty (transmitters) */
      __RWB uint32_t TXIS             :  1; /*!< Ofs=1, w=1 Transmit interrupt status (transmitters) */
      __ROB uint32_t RXNE             :  1; /*!< Ofs=2, w=1 Receive data register not empty (receivers) */
      __ROB uint32_t ADDR             :  1; /*!< Ofs=3, w=1 Address matched (slave mode) */
      __ROB uint32_t NACKF            :  1; /*!< Ofs=4, w=1 Not acknowledge received flag */
      __ROB uint32_t STOPF            :  1; /*!< Ofs=5, w=1 Stop detection flag */
      __ROB uint32_t TC               :  1; /*!< Ofs=6, w=1 Transfer Complete (master mode) */
      __ROB uint32_t TCR              :  1; /*!< Ofs=7, w=1 Transfer Complete Reload */
      __ROB uint32_t BERR             :  1; /*!< Ofs=8, w=1 Bus error */
      __ROB uint32_t ARLO             :  1; /*!< Ofs=9, w=1 Arbitration lost */
      __ROB uint32_t OVR              :  1; /*!< Ofs=10, w=1 Overrun/Underrun (slave mode) */
      __ROB uint32_t PECERR           :  1; /*!< Ofs=11, w=1 PEC Error in reception */
      __ROB uint32_t TIMEOUT          :  1; /*!< Ofs=12, w=1 Timeout or t_low detection flag */
      __ROB uint32_t ALERT            :  1; /*!< Ofs=13, w=1 SMBus alert */
            uint32_t unused0          :  1;
      __ROB uint32_t BUSY             :  1; /*!< Ofs=15, w=1 Bus busy */
      __ROB uint32_t DIR              :  1; /*!< Ofs=16, w=1 Transfer direction (Slave mode) */
      __ROB uint32_t ADDCODE          :  7; /*!< Ofs=17, w=7 Address match code (Slave mode) */
            uint32_t unused1          :  8;
    } B;
  };
#ifdef __cplusplus
  I2C_ISR_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_ISR_s & r)) volatile {
    I2C_ISR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_ISR_s & r)) volatile {
    I2C_ISR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_ICR_s {
  union {
      __WOB uint32_t R;
    struct {
            uint32_t unused0          :  3;
      __WOB uint32_t ADDRCF           :  1; /*!< Ofs=3, w=1 Address Matched flag clear */
      __WOB uint32_t NACKCF           :  1; /*!< Ofs=4, w=1 Not Acknowledge flag clear */
      __WOB uint32_t STOPCF           :  1; /*!< Ofs=5, w=1 Stop detection flag clear */
            uint32_t unused1          :  2;
      __WOB uint32_t BERRCF           :  1; /*!< Ofs=8, w=1 Bus error flag clear */
      __WOB uint32_t ARLOCF           :  1; /*!< Ofs=9, w=1 Arbitration lost flag clear */
      __WOB uint32_t OVRCF            :  1; /*!< Ofs=10, w=1 Overrun/Underrun flag clear */
      __WOB uint32_t PECCF            :  1; /*!< Ofs=11, w=1 PEC Error flag clear */
      __WOB uint32_t TIMOUTCF         :  1; /*!< Ofs=12, w=1 Timeout detection flag clear */
      __WOB uint32_t ALERTCF          :  1; /*!< Ofs=13, w=1 Alert flag clear */
            uint32_t unused2          : 18;
    } B;
  };
#ifdef __cplusplus
  I2C_ICR_s(): R(0) {};
  void setbits (uint32_t (*f) (I2C_ICR_s & r)) volatile {
    I2C_ICR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct I2C_PECR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t PEC              :  8; /*!< Ofs=0, w=8 Packet error checking register */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  I2C_PECR_s(__RO I2C_PECR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct I2C_RXDR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t RXDATA           :  8; /*!< Ofs=0, w=8 8-bit receive data */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  I2C_RXDR_s(__RO I2C_RXDR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct I2C_TXDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TXDATA           :  8; /*!< Ofs=0, w=8 8-bit transmit data */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  I2C_TXDR_s(): R(0) {};
  void modify  (uint32_t (*f) (I2C_TXDR_s & r)) volatile {
    I2C_TXDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (I2C_TXDR_s & r)) volatile {
    I2C_TXDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP0R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP0R_s & r)) volatile {
    USB_EP0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP0R_s & r)) volatile {
    USB_EP0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP1R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP1R_s & r)) volatile {
    USB_EP1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP1R_s & r)) volatile {
    USB_EP1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP2R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP2R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP2R_s & r)) volatile {
    USB_EP2R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP2R_s & r)) volatile {
    USB_EP2R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP3R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP3R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP3R_s & r)) volatile {
    USB_EP3R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP3R_s & r)) volatile {
    USB_EP3R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP4R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP4R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP4R_s & r)) volatile {
    USB_EP4R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP4R_s & r)) volatile {
    USB_EP4R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP5R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP5R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP5R_s & r)) volatile {
    USB_EP5R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP5R_s & r)) volatile {
    USB_EP5R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP6R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP6R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP6R_s & r)) volatile {
    USB_EP6R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP6R_s & r)) volatile {
    USB_EP6R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_EP7R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EA               :  4; /*!< Ofs=0, w=4 Endpoint address */
      __RWB uint32_t STAT_TX          :  2; /*!< Ofs=4, w=2 Status bits, for transmission transfers */
      __RWB uint32_t DTOG_TX          :  1; /*!< Ofs=6, w=1 Data Toggle, for transmission transfers */
      __RWB uint32_t CTR_TX           :  1; /*!< Ofs=7, w=1 Correct Transfer for transmission */
      __RWB uint32_t EP_KIND          :  1; /*!< Ofs=8, w=1 Endpoint kind */
      __RWB uint32_t EP_TYPE          :  2; /*!< Ofs=9, w=2 Endpoint type */
      __RWB uint32_t SETUP            :  1; /*!< Ofs=11, w=1 Setup transaction completed */
      __RWB uint32_t STAT_RX          :  2; /*!< Ofs=12, w=2 Status bits, for reception transfers */
      __RWB uint32_t DTOG_RX          :  1; /*!< Ofs=14, w=1 Data Toggle, for reception transfers */
      __RWB uint32_t CTR_RX           :  1; /*!< Ofs=15, w=1 Correct transfer for reception */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_EP7R_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_EP7R_s & r)) volatile {
    USB_EP7R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_EP7R_s & r)) volatile {
    USB_EP7R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_CNTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FRES             :  1; /*!< Ofs=0, w=1 Force USB Reset */
      __RWB uint32_t PDWN             :  1; /*!< Ofs=1, w=1 Power down */
      __RWB uint32_t LPMODE           :  1; /*!< Ofs=2, w=1 Low-power mode */
      __RWB uint32_t FSUSP            :  1; /*!< Ofs=3, w=1 Force suspend */
      __RWB uint32_t RESUME           :  1; /*!< Ofs=4, w=1 Resume request */
      __RWB uint32_t L1RESUME         :  1; /*!< Ofs=5, w=1 LPM L1 Resume request */
            uint32_t unused0          :  1;
      __RWB uint32_t L1REQM           :  1; /*!< Ofs=7, w=1 LPM L1 state request interrupt mask */
      __RWB uint32_t ESOFM            :  1; /*!< Ofs=8, w=1 Expected start of frame interrupt mask */
      __RWB uint32_t SOFM             :  1; /*!< Ofs=9, w=1 Start of frame interrupt mask */
      __RWB uint32_t RESETM           :  1; /*!< Ofs=10, w=1 USB reset interrupt mask */
      __RWB uint32_t SUSPM            :  1; /*!< Ofs=11, w=1 Suspend mode interrupt mask */
      __RWB uint32_t WKUPM            :  1; /*!< Ofs=12, w=1 Wakeup interrupt mask */
      __RWB uint32_t ERRM             :  1; /*!< Ofs=13, w=1 Error interrupt mask */
      __RWB uint32_t PMAOVRM          :  1; /*!< Ofs=14, w=1 Packet memory area over / underrun interrupt mask */
      __RWB uint32_t CTRM             :  1; /*!< Ofs=15, w=1 Correct transfer interrupt mask */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_CNTR_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_CNTR_s & r)) volatile {
    USB_CNTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_CNTR_s & r)) volatile {
    USB_CNTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_ISTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t EP_ID            :  4; /*!< Ofs=0, w=4 Endpoint Identifier */
      __ROB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Direction of transaction */
            uint32_t unused0          :  2;
      __RWB uint32_t L1REQ            :  1; /*!< Ofs=7, w=1 LPM L1 state request */
      __RWB uint32_t ESOF             :  1; /*!< Ofs=8, w=1 Expected start frame */
      __RWB uint32_t SOF              :  1; /*!< Ofs=9, w=1 start of frame */
      __RWB uint32_t RESET            :  1; /*!< Ofs=10, w=1 reset request */
      __RWB uint32_t SUSP             :  1; /*!< Ofs=11, w=1 Suspend mode request */
      __RWB uint32_t WKUP             :  1; /*!< Ofs=12, w=1 Wakeup */
      __RWB uint32_t ERR              :  1; /*!< Ofs=13, w=1 Error */
      __RWB uint32_t PMAOVR           :  1; /*!< Ofs=14, w=1 Packet memory area over / underrun */
      __ROB uint32_t CTR              :  1; /*!< Ofs=15, w=1 Correct transfer */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_ISTR_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_ISTR_s & r)) volatile {
    USB_ISTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_ISTR_s & r)) volatile {
    USB_ISTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_FNR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t FN               : 11; /*!< Ofs=0, w=11 Frame number */
      __ROB uint32_t LSOF             :  2; /*!< Ofs=11, w=2 Lost SOF */
      __ROB uint32_t LCK              :  1; /*!< Ofs=13, w=1 Locked */
      __ROB uint32_t RXDM             :  1; /*!< Ofs=14, w=1 Receive data - line status */
      __ROB uint32_t RXDP             :  1; /*!< Ofs=15, w=1 Receive data + line status */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_FNR_s(__RO USB_FNR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct USB_DADDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ADD              :  7; /*!< Ofs=0, w=7 Device address */
      __RWB uint32_t EF               :  1; /*!< Ofs=7, w=1 Enable function */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  USB_DADDR_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_DADDR_s & r)) volatile {
    USB_DADDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_DADDR_s & r)) volatile {
    USB_DADDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_BTABLE_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  3;
      __RWB uint32_t BTABLE           : 13; /*!< Ofs=3, w=13 Buffer table */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_BTABLE_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_BTABLE_s & r)) volatile {
    USB_BTABLE_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_BTABLE_s & r)) volatile {
    USB_BTABLE_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_LPMCSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LPMEN            :  1; /*!< Ofs=0, w=1 LPM support enable */
      __RWB uint32_t LPMACK           :  1; /*!< Ofs=1, w=1 LPM Token acknowledge enable */
            uint32_t unused0          :  1;
      __ROB uint32_t REMWAKE          :  1; /*!< Ofs=3, w=1 bRemoteWake value */
      __ROB uint32_t BESL             :  4; /*!< Ofs=4, w=4 BESL value */
            uint32_t unused1          : 24;
    } B;
  };
#ifdef __cplusplus
  USB_LPMCSR_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_LPMCSR_s & r)) volatile {
    USB_LPMCSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_LPMCSR_s & r)) volatile {
    USB_LPMCSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USB_BCDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BCDEN            :  1; /*!< Ofs=0, w=1 Battery charging detector (BCD) enable */
      __RWB uint32_t DCDEN            :  1; /*!< Ofs=1, w=1 Data contact detection (DCD) mode enable */
      __RWB uint32_t PDEN             :  1; /*!< Ofs=2, w=1 Primary detection (PD) mode enable */
      __RWB uint32_t SDEN             :  1; /*!< Ofs=3, w=1 Secondary detection (SD) mode enable */
      __ROB uint32_t DCDET            :  1; /*!< Ofs=4, w=1 Data contact detection (DCD) status */
      __ROB uint32_t PDET             :  1; /*!< Ofs=5, w=1 Primary detection (PD) status */
      __ROB uint32_t SDET             :  1; /*!< Ofs=6, w=1 Secondary detection (SD) status */
      __ROB uint32_t PS2DET           :  1; /*!< Ofs=7, w=1 DM pull-up detection status */
            uint32_t unused0          :  7;
      __RWB uint32_t DPPU             :  1; /*!< Ofs=15, w=1 DP pull-up control */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  USB_BCDR_s(): R(0) {};
  void modify  (uint32_t (*f) (USB_BCDR_s & r)) volatile {
    USB_BCDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USB_BCDR_s & r)) volatile {
    USB_BCDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_MCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t INRQ             :  1; /*!< Ofs=0, w=1 INRQ */
      __RWB uint32_t SLEEP            :  1; /*!< Ofs=1, w=1 SLEEP */
      __RWB uint32_t TXFP             :  1; /*!< Ofs=2, w=1 TXFP */
      __RWB uint32_t RFLM             :  1; /*!< Ofs=3, w=1 RFLM */
      __RWB uint32_t NART             :  1; /*!< Ofs=4, w=1 NART */
      __RWB uint32_t AWUM             :  1; /*!< Ofs=5, w=1 AWUM */
      __RWB uint32_t ABOM             :  1; /*!< Ofs=6, w=1 ABOM */
      __RWB uint32_t TTCM             :  1; /*!< Ofs=7, w=1 TTCM */
            uint32_t unused0          :  7;
      __RWB uint32_t RESET            :  1; /*!< Ofs=15, w=1 RESET */
      __RWB uint32_t DBF              :  1; /*!< Ofs=16, w=1 DBF */
            uint32_t unused1          : 15;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_MCR_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_MCR_s & r)) volatile {
    CAN_CAN_MCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_MCR_s & r)) volatile {
    CAN_CAN_MCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_MSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t INAK             :  1; /*!< Ofs=0, w=1 INAK */
      __ROB uint32_t SLAK             :  1; /*!< Ofs=1, w=1 SLAK */
      __RWB uint32_t ERRI             :  1; /*!< Ofs=2, w=1 ERRI */
      __RWB uint32_t WKUI             :  1; /*!< Ofs=3, w=1 WKUI */
      __RWB uint32_t SLAKI            :  1; /*!< Ofs=4, w=1 SLAKI */
            uint32_t unused0          :  3;
      __ROB uint32_t TXM              :  1; /*!< Ofs=8, w=1 TXM */
      __ROB uint32_t RXM              :  1; /*!< Ofs=9, w=1 RXM */
      __ROB uint32_t SAMP             :  1; /*!< Ofs=10, w=1 SAMP */
      __ROB uint32_t RX               :  1; /*!< Ofs=11, w=1 RX */
            uint32_t unused1          : 20;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_MSR_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_MSR_s & r)) volatile {
    CAN_CAN_MSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_MSR_s & r)) volatile {
    CAN_CAN_MSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RQCP0            :  1; /*!< Ofs=0, w=1 RQCP0 */
      __RWB uint32_t TXOK0            :  1; /*!< Ofs=1, w=1 TXOK0 */
      __RWB uint32_t ALST0            :  1; /*!< Ofs=2, w=1 ALST0 */
      __RWB uint32_t TERR0            :  1; /*!< Ofs=3, w=1 TERR0 */
            uint32_t unused0          :  3;
      __RWB uint32_t ABRQ0            :  1; /*!< Ofs=7, w=1 ABRQ0 */
      __RWB uint32_t RQCP1            :  1; /*!< Ofs=8, w=1 RQCP1 */
      __RWB uint32_t TXOK1            :  1; /*!< Ofs=9, w=1 TXOK1 */
      __RWB uint32_t ALST1            :  1; /*!< Ofs=10, w=1 ALST1 */
      __RWB uint32_t TERR1            :  1; /*!< Ofs=11, w=1 TERR1 */
            uint32_t unused1          :  3;
      __RWB uint32_t ABRQ1            :  1; /*!< Ofs=15, w=1 ABRQ1 */
      __RWB uint32_t RQCP2            :  1; /*!< Ofs=16, w=1 RQCP2 */
      __RWB uint32_t TXOK2            :  1; /*!< Ofs=17, w=1 TXOK2 */
      __RWB uint32_t ALST2            :  1; /*!< Ofs=18, w=1 ALST2 */
      __RWB uint32_t TERR2            :  1; /*!< Ofs=19, w=1 TERR2 */
            uint32_t unused2          :  3;
      __RWB uint32_t ABRQ2            :  1; /*!< Ofs=23, w=1 ABRQ2 */
      __ROB uint32_t CODE             :  2; /*!< Ofs=24, w=2 CODE */
      __ROB uint32_t TME0             :  1; /*!< Ofs=26, w=1 Lowest priority flag for mailbox 0 */
      __ROB uint32_t TME1             :  1; /*!< Ofs=27, w=1 Lowest priority flag for mailbox 1 */
      __ROB uint32_t TME2             :  1; /*!< Ofs=28, w=1 Lowest priority flag for mailbox 2 */
      __ROB uint32_t LOW0             :  1; /*!< Ofs=29, w=1 Lowest priority flag for mailbox 0 */
      __ROB uint32_t LOW1             :  1; /*!< Ofs=30, w=1 Lowest priority flag for mailbox 1 */
      __ROB uint32_t LOW2             :  1; /*!< Ofs=31, w=1 Lowest priority flag for mailbox 2 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TSR_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TSR_s & r)) volatile {
    CAN_CAN_TSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TSR_s & r)) volatile {
    CAN_CAN_TSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_RF0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t FMP0             :  2; /*!< Ofs=0, w=2 FMP0 */
            uint32_t unused0          :  1;
      __RWB uint32_t FULL0            :  1; /*!< Ofs=3, w=1 FULL0 */
      __RWB uint32_t FOVR0            :  1; /*!< Ofs=4, w=1 FOVR0 */
      __RWB uint32_t RFOM0            :  1; /*!< Ofs=5, w=1 RFOM0 */
            uint32_t unused1          : 26;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RF0R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_RF0R_s & r)) volatile {
    CAN_CAN_RF0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_RF0R_s & r)) volatile {
    CAN_CAN_RF0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_RF1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t FMP1             :  2; /*!< Ofs=0, w=2 FMP1 */
            uint32_t unused0          :  1;
      __RWB uint32_t FULL1            :  1; /*!< Ofs=3, w=1 FULL1 */
      __RWB uint32_t FOVR1            :  1; /*!< Ofs=4, w=1 FOVR1 */
      __RWB uint32_t RFOM1            :  1; /*!< Ofs=5, w=1 RFOM1 */
            uint32_t unused1          : 26;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RF1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_RF1R_s & r)) volatile {
    CAN_CAN_RF1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_RF1R_s & r)) volatile {
    CAN_CAN_RF1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_IER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TMEIE            :  1; /*!< Ofs=0, w=1 TMEIE */
      __RWB uint32_t FMPIE0           :  1; /*!< Ofs=1, w=1 FMPIE0 */
      __RWB uint32_t FFIE0            :  1; /*!< Ofs=2, w=1 FFIE0 */
      __RWB uint32_t FOVIE0           :  1; /*!< Ofs=3, w=1 FOVIE0 */
      __RWB uint32_t FMPIE1           :  1; /*!< Ofs=4, w=1 FMPIE1 */
      __RWB uint32_t FFIE1            :  1; /*!< Ofs=5, w=1 FFIE1 */
      __RWB uint32_t FOVIE1           :  1; /*!< Ofs=6, w=1 FOVIE1 */
            uint32_t unused0          :  1;
      __RWB uint32_t EWGIE            :  1; /*!< Ofs=8, w=1 EWGIE */
      __RWB uint32_t EPVIE            :  1; /*!< Ofs=9, w=1 EPVIE */
      __RWB uint32_t BOFIE            :  1; /*!< Ofs=10, w=1 BOFIE */
      __RWB uint32_t LECIE            :  1; /*!< Ofs=11, w=1 LECIE */
            uint32_t unused1          :  3;
      __RWB uint32_t ERRIE            :  1; /*!< Ofs=15, w=1 ERRIE */
      __RWB uint32_t WKUIE            :  1; /*!< Ofs=16, w=1 WKUIE */
      __RWB uint32_t SLKIE            :  1; /*!< Ofs=17, w=1 SLKIE */
            uint32_t unused2          : 14;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_IER_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_IER_s & r)) volatile {
    CAN_CAN_IER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_IER_s & r)) volatile {
    CAN_CAN_IER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_ESR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t EWGF             :  1; /*!< Ofs=0, w=1 EWGF */
      __ROB uint32_t EPVF             :  1; /*!< Ofs=1, w=1 EPVF */
      __ROB uint32_t BOFF             :  1; /*!< Ofs=2, w=1 BOFF */
            uint32_t unused0          :  1;
      __RWB uint32_t LEC              :  3; /*!< Ofs=4, w=3 LEC */
            uint32_t unused1          :  9;
      __ROB uint32_t TEC              :  8; /*!< Ofs=16, w=8 TEC */
      __ROB uint32_t REC              :  8; /*!< Ofs=24, w=8 REC */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_ESR_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_ESR_s & r)) volatile {
    CAN_CAN_ESR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_ESR_s & r)) volatile {
    CAN_CAN_ESR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_BTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t BRP              : 10; /*!< Ofs=0, w=10 BRP */
            uint32_t unused0          :  6;
      __RWB uint32_t TS1              :  4; /*!< Ofs=16, w=4 TS1 */
      __RWB uint32_t TS2              :  3; /*!< Ofs=20, w=3 TS2 */
            uint32_t unused1          :  1;
      __RWB uint32_t SJW              :  2; /*!< Ofs=24, w=2 SJW */
            uint32_t unused2          :  4;
      __RWB uint32_t LBKM             :  1; /*!< Ofs=30, w=1 LBKM */
      __RWB uint32_t SILM             :  1; /*!< Ofs=31, w=1 SILM */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_BTR_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_BTR_s & r)) volatile {
    CAN_CAN_BTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_BTR_s & r)) volatile {
    CAN_CAN_BTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TI0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TXRQ             :  1; /*!< Ofs=0, w=1 TXRQ */
      __RWB uint32_t RTR              :  1; /*!< Ofs=1, w=1 RTR */
      __RWB uint32_t IDE              :  1; /*!< Ofs=2, w=1 IDE */
      __RWB uint32_t EXID             : 18; /*!< Ofs=3, w=18 EXID */
      __RWB uint32_t STID             : 11; /*!< Ofs=21, w=11 STID */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TI0R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TI0R_s & r)) volatile {
    CAN_CAN_TI0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TI0R_s & r)) volatile {
    CAN_CAN_TI0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDT0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DLC              :  4; /*!< Ofs=0, w=4 DLC */
            uint32_t unused0          :  4;
      __RWB uint32_t TGT              :  1; /*!< Ofs=8, w=1 TGT */
            uint32_t unused1          :  7;
      __RWB uint32_t TIME             : 16; /*!< Ofs=16, w=16 TIME */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDT0R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDT0R_s & r)) volatile {
    CAN_CAN_TDT0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDT0R_s & r)) volatile {
    CAN_CAN_TDT0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDL0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DATA0            :  8; /*!< Ofs=0, w=8 DATA0 */
      __RWB uint32_t DATA1            :  8; /*!< Ofs=8, w=8 DATA1 */
      __RWB uint32_t DATA2            :  8; /*!< Ofs=16, w=8 DATA2 */
      __RWB uint32_t DATA3            :  8; /*!< Ofs=24, w=8 DATA3 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDL0R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDL0R_s & r)) volatile {
    CAN_CAN_TDL0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDL0R_s & r)) volatile {
    CAN_CAN_TDL0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDH0R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DATA4            :  8; /*!< Ofs=0, w=8 DATA4 */
      __RWB uint32_t DATA5            :  8; /*!< Ofs=8, w=8 DATA5 */
      __RWB uint32_t DATA6            :  8; /*!< Ofs=16, w=8 DATA6 */
      __RWB uint32_t DATA7            :  8; /*!< Ofs=24, w=8 DATA7 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDH0R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDH0R_s & r)) volatile {
    CAN_CAN_TDH0R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDH0R_s & r)) volatile {
    CAN_CAN_TDH0R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TI1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TXRQ             :  1; /*!< Ofs=0, w=1 TXRQ */
      __RWB uint32_t RTR              :  1; /*!< Ofs=1, w=1 RTR */
      __RWB uint32_t IDE              :  1; /*!< Ofs=2, w=1 IDE */
      __RWB uint32_t EXID             : 18; /*!< Ofs=3, w=18 EXID */
      __RWB uint32_t STID             : 11; /*!< Ofs=21, w=11 STID */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TI1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TI1R_s & r)) volatile {
    CAN_CAN_TI1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TI1R_s & r)) volatile {
    CAN_CAN_TI1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDT1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DLC              :  4; /*!< Ofs=0, w=4 DLC */
            uint32_t unused0          :  4;
      __RWB uint32_t TGT              :  1; /*!< Ofs=8, w=1 TGT */
            uint32_t unused1          :  7;
      __RWB uint32_t TIME             : 16; /*!< Ofs=16, w=16 TIME */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDT1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDT1R_s & r)) volatile {
    CAN_CAN_TDT1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDT1R_s & r)) volatile {
    CAN_CAN_TDT1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDL1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DATA0            :  8; /*!< Ofs=0, w=8 DATA0 */
      __RWB uint32_t DATA1            :  8; /*!< Ofs=8, w=8 DATA1 */
      __RWB uint32_t DATA2            :  8; /*!< Ofs=16, w=8 DATA2 */
      __RWB uint32_t DATA3            :  8; /*!< Ofs=24, w=8 DATA3 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDL1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDL1R_s & r)) volatile {
    CAN_CAN_TDL1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDL1R_s & r)) volatile {
    CAN_CAN_TDL1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDH1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DATA4            :  8; /*!< Ofs=0, w=8 DATA4 */
      __RWB uint32_t DATA5            :  8; /*!< Ofs=8, w=8 DATA5 */
      __RWB uint32_t DATA6            :  8; /*!< Ofs=16, w=8 DATA6 */
      __RWB uint32_t DATA7            :  8; /*!< Ofs=24, w=8 DATA7 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDH1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDH1R_s & r)) volatile {
    CAN_CAN_TDH1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDH1R_s & r)) volatile {
    CAN_CAN_TDH1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TI2R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TXRQ             :  1; /*!< Ofs=0, w=1 TXRQ */
      __RWB uint32_t RTR              :  1; /*!< Ofs=1, w=1 RTR */
      __RWB uint32_t IDE              :  1; /*!< Ofs=2, w=1 IDE */
      __RWB uint32_t EXID             : 18; /*!< Ofs=3, w=18 EXID */
      __RWB uint32_t STID             : 11; /*!< Ofs=21, w=11 STID */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TI2R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TI2R_s & r)) volatile {
    CAN_CAN_TI2R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TI2R_s & r)) volatile {
    CAN_CAN_TI2R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDT2R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DLC              :  4; /*!< Ofs=0, w=4 DLC */
            uint32_t unused0          :  4;
      __RWB uint32_t TGT              :  1; /*!< Ofs=8, w=1 TGT */
            uint32_t unused1          :  7;
      __RWB uint32_t TIME             : 16; /*!< Ofs=16, w=16 TIME */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDT2R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDT2R_s & r)) volatile {
    CAN_CAN_TDT2R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDT2R_s & r)) volatile {
    CAN_CAN_TDT2R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDL2R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DATA0            :  8; /*!< Ofs=0, w=8 DATA0 */
      __RWB uint32_t DATA1            :  8; /*!< Ofs=8, w=8 DATA1 */
      __RWB uint32_t DATA2            :  8; /*!< Ofs=16, w=8 DATA2 */
      __RWB uint32_t DATA3            :  8; /*!< Ofs=24, w=8 DATA3 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDL2R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDL2R_s & r)) volatile {
    CAN_CAN_TDL2R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDL2R_s & r)) volatile {
    CAN_CAN_TDL2R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_TDH2R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DATA4            :  8; /*!< Ofs=0, w=8 DATA4 */
      __RWB uint32_t DATA5            :  8; /*!< Ofs=8, w=8 DATA5 */
      __RWB uint32_t DATA6            :  8; /*!< Ofs=16, w=8 DATA6 */
      __RWB uint32_t DATA7            :  8; /*!< Ofs=24, w=8 DATA7 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_TDH2R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_TDH2R_s & r)) volatile {
    CAN_CAN_TDH2R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_TDH2R_s & r)) volatile {
    CAN_CAN_TDH2R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_RI0R_s {
  union {
      __ROB uint32_t R;
    struct {
            uint32_t unused0          :  1;
      __ROB uint32_t RTR              :  1; /*!< Ofs=1, w=1 RTR */
      __ROB uint32_t IDE              :  1; /*!< Ofs=2, w=1 IDE */
      __ROB uint32_t EXID             : 18; /*!< Ofs=3, w=18 EXID */
      __ROB uint32_t STID             : 11; /*!< Ofs=21, w=11 STID */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RI0R_s(__RO CAN_CAN_RI0R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RDT0R_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DLC              :  4; /*!< Ofs=0, w=4 DLC */
            uint32_t unused0          :  4;
      __ROB uint32_t FMI              :  8; /*!< Ofs=8, w=8 FMI */
      __ROB uint32_t TIME             : 16; /*!< Ofs=16, w=16 TIME */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RDT0R_s(__RO CAN_CAN_RDT0R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RDL0R_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DATA0            :  8; /*!< Ofs=0, w=8 DATA0 */
      __ROB uint32_t DATA1            :  8; /*!< Ofs=8, w=8 DATA1 */
      __ROB uint32_t DATA2            :  8; /*!< Ofs=16, w=8 DATA2 */
      __ROB uint32_t DATA3            :  8; /*!< Ofs=24, w=8 DATA3 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RDL0R_s(__RO CAN_CAN_RDL0R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RDH0R_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DATA4            :  8; /*!< Ofs=0, w=8 DATA4 */
      __ROB uint32_t DATA5            :  8; /*!< Ofs=8, w=8 DATA5 */
      __ROB uint32_t DATA6            :  8; /*!< Ofs=16, w=8 DATA6 */
      __ROB uint32_t DATA7            :  8; /*!< Ofs=24, w=8 DATA7 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RDH0R_s(__RO CAN_CAN_RDH0R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RI1R_s {
  union {
      __ROB uint32_t R;
    struct {
            uint32_t unused0          :  1;
      __ROB uint32_t RTR              :  1; /*!< Ofs=1, w=1 RTR */
      __ROB uint32_t IDE              :  1; /*!< Ofs=2, w=1 IDE */
      __ROB uint32_t EXID             : 18; /*!< Ofs=3, w=18 EXID */
      __ROB uint32_t STID             : 11; /*!< Ofs=21, w=11 STID */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RI1R_s(__RO CAN_CAN_RI1R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RDT1R_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DLC              :  4; /*!< Ofs=0, w=4 DLC */
            uint32_t unused0          :  4;
      __ROB uint32_t FMI              :  8; /*!< Ofs=8, w=8 FMI */
      __ROB uint32_t TIME             : 16; /*!< Ofs=16, w=16 TIME */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RDT1R_s(__RO CAN_CAN_RDT1R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RDL1R_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DATA0            :  8; /*!< Ofs=0, w=8 DATA0 */
      __ROB uint32_t DATA1            :  8; /*!< Ofs=8, w=8 DATA1 */
      __ROB uint32_t DATA2            :  8; /*!< Ofs=16, w=8 DATA2 */
      __ROB uint32_t DATA3            :  8; /*!< Ofs=24, w=8 DATA3 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RDL1R_s(__RO CAN_CAN_RDL1R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_RDH1R_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DATA4            :  8; /*!< Ofs=0, w=8 DATA4 */
      __ROB uint32_t DATA5            :  8; /*!< Ofs=8, w=8 DATA5 */
      __ROB uint32_t DATA6            :  8; /*!< Ofs=16, w=8 DATA6 */
      __ROB uint32_t DATA7            :  8; /*!< Ofs=24, w=8 DATA7 */
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_RDH1R_s(__RO CAN_CAN_RDH1R_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CAN_CAN_FMR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FINIT            :  1; /*!< Ofs=0, w=1 FINIT */
            uint32_t unused0          :  7;
      __RWB uint32_t CAN2SB           :  6; /*!< Ofs=8, w=6 CAN2SB */
            uint32_t unused1          : 18;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_FMR_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_FMR_s & r)) volatile {
    CAN_CAN_FMR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_FMR_s & r)) volatile {
    CAN_CAN_FMR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_FM1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FBM0             :  1; /*!< Ofs=0, w=1 Filter mode */
      __RWB uint32_t FBM1             :  1; /*!< Ofs=1, w=1 Filter mode */
      __RWB uint32_t FBM2             :  1; /*!< Ofs=2, w=1 Filter mode */
      __RWB uint32_t FBM3             :  1; /*!< Ofs=3, w=1 Filter mode */
      __RWB uint32_t FBM4             :  1; /*!< Ofs=4, w=1 Filter mode */
      __RWB uint32_t FBM5             :  1; /*!< Ofs=5, w=1 Filter mode */
      __RWB uint32_t FBM6             :  1; /*!< Ofs=6, w=1 Filter mode */
      __RWB uint32_t FBM7             :  1; /*!< Ofs=7, w=1 Filter mode */
      __RWB uint32_t FBM8             :  1; /*!< Ofs=8, w=1 Filter mode */
      __RWB uint32_t FBM9             :  1; /*!< Ofs=9, w=1 Filter mode */
      __RWB uint32_t FBM10            :  1; /*!< Ofs=10, w=1 Filter mode */
      __RWB uint32_t FBM11            :  1; /*!< Ofs=11, w=1 Filter mode */
      __RWB uint32_t FBM12            :  1; /*!< Ofs=12, w=1 Filter mode */
      __RWB uint32_t FBM13            :  1; /*!< Ofs=13, w=1 Filter mode */
      __RWB uint32_t FBM14            :  1; /*!< Ofs=14, w=1 Filter mode */
      __RWB uint32_t FBM15            :  1; /*!< Ofs=15, w=1 Filter mode */
      __RWB uint32_t FBM16            :  1; /*!< Ofs=16, w=1 Filter mode */
      __RWB uint32_t FBM17            :  1; /*!< Ofs=17, w=1 Filter mode */
      __RWB uint32_t FBM18            :  1; /*!< Ofs=18, w=1 Filter mode */
      __RWB uint32_t FBM19            :  1; /*!< Ofs=19, w=1 Filter mode */
      __RWB uint32_t FBM20            :  1; /*!< Ofs=20, w=1 Filter mode */
      __RWB uint32_t FBM21            :  1; /*!< Ofs=21, w=1 Filter mode */
      __RWB uint32_t FBM22            :  1; /*!< Ofs=22, w=1 Filter mode */
      __RWB uint32_t FBM23            :  1; /*!< Ofs=23, w=1 Filter mode */
      __RWB uint32_t FBM24            :  1; /*!< Ofs=24, w=1 Filter mode */
      __RWB uint32_t FBM25            :  1; /*!< Ofs=25, w=1 Filter mode */
      __RWB uint32_t FBM26            :  1; /*!< Ofs=26, w=1 Filter mode */
      __RWB uint32_t FBM27            :  1; /*!< Ofs=27, w=1 Filter mode */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_FM1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_FM1R_s & r)) volatile {
    CAN_CAN_FM1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_FM1R_s & r)) volatile {
    CAN_CAN_FM1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_FS1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FSC0             :  1; /*!< Ofs=0, w=1 Filter scale configuration */
      __RWB uint32_t FSC1             :  1; /*!< Ofs=1, w=1 Filter scale configuration */
      __RWB uint32_t FSC2             :  1; /*!< Ofs=2, w=1 Filter scale configuration */
      __RWB uint32_t FSC3             :  1; /*!< Ofs=3, w=1 Filter scale configuration */
      __RWB uint32_t FSC4             :  1; /*!< Ofs=4, w=1 Filter scale configuration */
      __RWB uint32_t FSC5             :  1; /*!< Ofs=5, w=1 Filter scale configuration */
      __RWB uint32_t FSC6             :  1; /*!< Ofs=6, w=1 Filter scale configuration */
      __RWB uint32_t FSC7             :  1; /*!< Ofs=7, w=1 Filter scale configuration */
      __RWB uint32_t FSC8             :  1; /*!< Ofs=8, w=1 Filter scale configuration */
      __RWB uint32_t FSC9             :  1; /*!< Ofs=9, w=1 Filter scale configuration */
      __RWB uint32_t FSC10            :  1; /*!< Ofs=10, w=1 Filter scale configuration */
      __RWB uint32_t FSC11            :  1; /*!< Ofs=11, w=1 Filter scale configuration */
      __RWB uint32_t FSC12            :  1; /*!< Ofs=12, w=1 Filter scale configuration */
      __RWB uint32_t FSC13            :  1; /*!< Ofs=13, w=1 Filter scale configuration */
      __RWB uint32_t FSC14            :  1; /*!< Ofs=14, w=1 Filter scale configuration */
      __RWB uint32_t FSC15            :  1; /*!< Ofs=15, w=1 Filter scale configuration */
      __RWB uint32_t FSC16            :  1; /*!< Ofs=16, w=1 Filter scale configuration */
      __RWB uint32_t FSC17            :  1; /*!< Ofs=17, w=1 Filter scale configuration */
      __RWB uint32_t FSC18            :  1; /*!< Ofs=18, w=1 Filter scale configuration */
      __RWB uint32_t FSC19            :  1; /*!< Ofs=19, w=1 Filter scale configuration */
      __RWB uint32_t FSC20            :  1; /*!< Ofs=20, w=1 Filter scale configuration */
      __RWB uint32_t FSC21            :  1; /*!< Ofs=21, w=1 Filter scale configuration */
      __RWB uint32_t FSC22            :  1; /*!< Ofs=22, w=1 Filter scale configuration */
      __RWB uint32_t FSC23            :  1; /*!< Ofs=23, w=1 Filter scale configuration */
      __RWB uint32_t FSC24            :  1; /*!< Ofs=24, w=1 Filter scale configuration */
      __RWB uint32_t FSC25            :  1; /*!< Ofs=25, w=1 Filter scale configuration */
      __RWB uint32_t FSC26            :  1; /*!< Ofs=26, w=1 Filter scale configuration */
      __RWB uint32_t FSC27            :  1; /*!< Ofs=27, w=1 Filter scale configuration */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_FS1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_FS1R_s & r)) volatile {
    CAN_CAN_FS1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_FS1R_s & r)) volatile {
    CAN_CAN_FS1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_FFA1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FFA0             :  1; /*!< Ofs=0, w=1 Filter FIFO assignment for filter 0 */
      __RWB uint32_t FFA1             :  1; /*!< Ofs=1, w=1 Filter FIFO assignment for filter 1 */
      __RWB uint32_t FFA2             :  1; /*!< Ofs=2, w=1 Filter FIFO assignment for filter 2 */
      __RWB uint32_t FFA3             :  1; /*!< Ofs=3, w=1 Filter FIFO assignment for filter 3 */
      __RWB uint32_t FFA4             :  1; /*!< Ofs=4, w=1 Filter FIFO assignment for filter 4 */
      __RWB uint32_t FFA5             :  1; /*!< Ofs=5, w=1 Filter FIFO assignment for filter 5 */
      __RWB uint32_t FFA6             :  1; /*!< Ofs=6, w=1 Filter FIFO assignment for filter 6 */
      __RWB uint32_t FFA7             :  1; /*!< Ofs=7, w=1 Filter FIFO assignment for filter 7 */
      __RWB uint32_t FFA8             :  1; /*!< Ofs=8, w=1 Filter FIFO assignment for filter 8 */
      __RWB uint32_t FFA9             :  1; /*!< Ofs=9, w=1 Filter FIFO assignment for filter 9 */
      __RWB uint32_t FFA10            :  1; /*!< Ofs=10, w=1 Filter FIFO assignment for filter 10 */
      __RWB uint32_t FFA11            :  1; /*!< Ofs=11, w=1 Filter FIFO assignment for filter 11 */
      __RWB uint32_t FFA12            :  1; /*!< Ofs=12, w=1 Filter FIFO assignment for filter 12 */
      __RWB uint32_t FFA13            :  1; /*!< Ofs=13, w=1 Filter FIFO assignment for filter 13 */
      __RWB uint32_t FFA14            :  1; /*!< Ofs=14, w=1 Filter FIFO assignment for filter 14 */
      __RWB uint32_t FFA15            :  1; /*!< Ofs=15, w=1 Filter FIFO assignment for filter 15 */
      __RWB uint32_t FFA16            :  1; /*!< Ofs=16, w=1 Filter FIFO assignment for filter 16 */
      __RWB uint32_t FFA17            :  1; /*!< Ofs=17, w=1 Filter FIFO assignment for filter 17 */
      __RWB uint32_t FFA18            :  1; /*!< Ofs=18, w=1 Filter FIFO assignment for filter 18 */
      __RWB uint32_t FFA19            :  1; /*!< Ofs=19, w=1 Filter FIFO assignment for filter 19 */
      __RWB uint32_t FFA20            :  1; /*!< Ofs=20, w=1 Filter FIFO assignment for filter 20 */
      __RWB uint32_t FFA21            :  1; /*!< Ofs=21, w=1 Filter FIFO assignment for filter 21 */
      __RWB uint32_t FFA22            :  1; /*!< Ofs=22, w=1 Filter FIFO assignment for filter 22 */
      __RWB uint32_t FFA23            :  1; /*!< Ofs=23, w=1 Filter FIFO assignment for filter 23 */
      __RWB uint32_t FFA24            :  1; /*!< Ofs=24, w=1 Filter FIFO assignment for filter 24 */
      __RWB uint32_t FFA25            :  1; /*!< Ofs=25, w=1 Filter FIFO assignment for filter 25 */
      __RWB uint32_t FFA26            :  1; /*!< Ofs=26, w=1 Filter FIFO assignment for filter 26 */
      __RWB uint32_t FFA27            :  1; /*!< Ofs=27, w=1 Filter FIFO assignment for filter 27 */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_FFA1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_FFA1R_s & r)) volatile {
    CAN_CAN_FFA1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_FFA1R_s & r)) volatile {
    CAN_CAN_FFA1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_CAN_FA1R_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FACT0            :  1; /*!< Ofs=0, w=1 Filter active */
      __RWB uint32_t FACT1            :  1; /*!< Ofs=1, w=1 Filter active */
      __RWB uint32_t FACT2            :  1; /*!< Ofs=2, w=1 Filter active */
      __RWB uint32_t FACT3            :  1; /*!< Ofs=3, w=1 Filter active */
      __RWB uint32_t FACT4            :  1; /*!< Ofs=4, w=1 Filter active */
      __RWB uint32_t FACT5            :  1; /*!< Ofs=5, w=1 Filter active */
      __RWB uint32_t FACT6            :  1; /*!< Ofs=6, w=1 Filter active */
      __RWB uint32_t FACT7            :  1; /*!< Ofs=7, w=1 Filter active */
      __RWB uint32_t FACT8            :  1; /*!< Ofs=8, w=1 Filter active */
      __RWB uint32_t FACT9            :  1; /*!< Ofs=9, w=1 Filter active */
      __RWB uint32_t FACT10           :  1; /*!< Ofs=10, w=1 Filter active */
      __RWB uint32_t FACT11           :  1; /*!< Ofs=11, w=1 Filter active */
      __RWB uint32_t FACT12           :  1; /*!< Ofs=12, w=1 Filter active */
      __RWB uint32_t FACT13           :  1; /*!< Ofs=13, w=1 Filter active */
      __RWB uint32_t FACT14           :  1; /*!< Ofs=14, w=1 Filter active */
      __RWB uint32_t FACT15           :  1; /*!< Ofs=15, w=1 Filter active */
      __RWB uint32_t FACT16           :  1; /*!< Ofs=16, w=1 Filter active */
      __RWB uint32_t FACT17           :  1; /*!< Ofs=17, w=1 Filter active */
      __RWB uint32_t FACT18           :  1; /*!< Ofs=18, w=1 Filter active */
      __RWB uint32_t FACT19           :  1; /*!< Ofs=19, w=1 Filter active */
      __RWB uint32_t FACT20           :  1; /*!< Ofs=20, w=1 Filter active */
      __RWB uint32_t FACT21           :  1; /*!< Ofs=21, w=1 Filter active */
      __RWB uint32_t FACT22           :  1; /*!< Ofs=22, w=1 Filter active */
      __RWB uint32_t FACT23           :  1; /*!< Ofs=23, w=1 Filter active */
      __RWB uint32_t FACT24           :  1; /*!< Ofs=24, w=1 Filter active */
      __RWB uint32_t FACT25           :  1; /*!< Ofs=25, w=1 Filter active */
      __RWB uint32_t FACT26           :  1; /*!< Ofs=26, w=1 Filter active */
      __RWB uint32_t FACT27           :  1; /*!< Ofs=27, w=1 Filter active */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  CAN_CAN_FA1R_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_CAN_FA1R_s & r)) volatile {
    CAN_CAN_FA1R_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_CAN_FA1R_s & r)) volatile {
    CAN_CAN_FA1R_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F0R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F0R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F0R1_s & r)) volatile {
    CAN_F0R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F0R1_s & r)) volatile {
    CAN_F0R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F0R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F0R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F0R2_s & r)) volatile {
    CAN_F0R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F0R2_s & r)) volatile {
    CAN_F0R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F1R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F1R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F1R1_s & r)) volatile {
    CAN_F1R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F1R1_s & r)) volatile {
    CAN_F1R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F1R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F1R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F1R2_s & r)) volatile {
    CAN_F1R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F1R2_s & r)) volatile {
    CAN_F1R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F2R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F2R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F2R1_s & r)) volatile {
    CAN_F2R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F2R1_s & r)) volatile {
    CAN_F2R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F2R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F2R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F2R2_s & r)) volatile {
    CAN_F2R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F2R2_s & r)) volatile {
    CAN_F2R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F3R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F3R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F3R1_s & r)) volatile {
    CAN_F3R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F3R1_s & r)) volatile {
    CAN_F3R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F3R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F3R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F3R2_s & r)) volatile {
    CAN_F3R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F3R2_s & r)) volatile {
    CAN_F3R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F4R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F4R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F4R1_s & r)) volatile {
    CAN_F4R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F4R1_s & r)) volatile {
    CAN_F4R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F4R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F4R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F4R2_s & r)) volatile {
    CAN_F4R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F4R2_s & r)) volatile {
    CAN_F4R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F5R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F5R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F5R1_s & r)) volatile {
    CAN_F5R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F5R1_s & r)) volatile {
    CAN_F5R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F5R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F5R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F5R2_s & r)) volatile {
    CAN_F5R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F5R2_s & r)) volatile {
    CAN_F5R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F6R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F6R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F6R1_s & r)) volatile {
    CAN_F6R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F6R1_s & r)) volatile {
    CAN_F6R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F6R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F6R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F6R2_s & r)) volatile {
    CAN_F6R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F6R2_s & r)) volatile {
    CAN_F6R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F7R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F7R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F7R1_s & r)) volatile {
    CAN_F7R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F7R1_s & r)) volatile {
    CAN_F7R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F7R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F7R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F7R2_s & r)) volatile {
    CAN_F7R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F7R2_s & r)) volatile {
    CAN_F7R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F8R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F8R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F8R1_s & r)) volatile {
    CAN_F8R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F8R1_s & r)) volatile {
    CAN_F8R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F8R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F8R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F8R2_s & r)) volatile {
    CAN_F8R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F8R2_s & r)) volatile {
    CAN_F8R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F9R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F9R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F9R1_s & r)) volatile {
    CAN_F9R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F9R1_s & r)) volatile {
    CAN_F9R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F9R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F9R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F9R2_s & r)) volatile {
    CAN_F9R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F9R2_s & r)) volatile {
    CAN_F9R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F10R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F10R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F10R1_s & r)) volatile {
    CAN_F10R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F10R1_s & r)) volatile {
    CAN_F10R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F10R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F10R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F10R2_s & r)) volatile {
    CAN_F10R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F10R2_s & r)) volatile {
    CAN_F10R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F11R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F11R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F11R1_s & r)) volatile {
    CAN_F11R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F11R1_s & r)) volatile {
    CAN_F11R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F11R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F11R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F11R2_s & r)) volatile {
    CAN_F11R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F11R2_s & r)) volatile {
    CAN_F11R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F12R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F12R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F12R1_s & r)) volatile {
    CAN_F12R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F12R1_s & r)) volatile {
    CAN_F12R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F12R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F12R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F12R2_s & r)) volatile {
    CAN_F12R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F12R2_s & r)) volatile {
    CAN_F12R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F13R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F13R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F13R1_s & r)) volatile {
    CAN_F13R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F13R1_s & r)) volatile {
    CAN_F13R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F13R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F13R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F13R2_s & r)) volatile {
    CAN_F13R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F13R2_s & r)) volatile {
    CAN_F13R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F14R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F14R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F14R1_s & r)) volatile {
    CAN_F14R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F14R1_s & r)) volatile {
    CAN_F14R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F14R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F14R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F14R2_s & r)) volatile {
    CAN_F14R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F14R2_s & r)) volatile {
    CAN_F14R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F15R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F15R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F15R1_s & r)) volatile {
    CAN_F15R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F15R1_s & r)) volatile {
    CAN_F15R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F15R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F15R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F15R2_s & r)) volatile {
    CAN_F15R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F15R2_s & r)) volatile {
    CAN_F15R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F16R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F16R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F16R1_s & r)) volatile {
    CAN_F16R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F16R1_s & r)) volatile {
    CAN_F16R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F16R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F16R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F16R2_s & r)) volatile {
    CAN_F16R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F16R2_s & r)) volatile {
    CAN_F16R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F17R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F17R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F17R1_s & r)) volatile {
    CAN_F17R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F17R1_s & r)) volatile {
    CAN_F17R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F17R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F17R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F17R2_s & r)) volatile {
    CAN_F17R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F17R2_s & r)) volatile {
    CAN_F17R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F18R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F18R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F18R1_s & r)) volatile {
    CAN_F18R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F18R1_s & r)) volatile {
    CAN_F18R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F18R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F18R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F18R2_s & r)) volatile {
    CAN_F18R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F18R2_s & r)) volatile {
    CAN_F18R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F19R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F19R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F19R1_s & r)) volatile {
    CAN_F19R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F19R1_s & r)) volatile {
    CAN_F19R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F19R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F19R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F19R2_s & r)) volatile {
    CAN_F19R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F19R2_s & r)) volatile {
    CAN_F19R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F20R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F20R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F20R1_s & r)) volatile {
    CAN_F20R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F20R1_s & r)) volatile {
    CAN_F20R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F20R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F20R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F20R2_s & r)) volatile {
    CAN_F20R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F20R2_s & r)) volatile {
    CAN_F20R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F21R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F21R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F21R1_s & r)) volatile {
    CAN_F21R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F21R1_s & r)) volatile {
    CAN_F21R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F21R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F21R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F21R2_s & r)) volatile {
    CAN_F21R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F21R2_s & r)) volatile {
    CAN_F21R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F22R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F22R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F22R1_s & r)) volatile {
    CAN_F22R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F22R1_s & r)) volatile {
    CAN_F22R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F22R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F22R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F22R2_s & r)) volatile {
    CAN_F22R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F22R2_s & r)) volatile {
    CAN_F22R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F23R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F23R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F23R1_s & r)) volatile {
    CAN_F23R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F23R1_s & r)) volatile {
    CAN_F23R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F23R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F23R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F23R2_s & r)) volatile {
    CAN_F23R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F23R2_s & r)) volatile {
    CAN_F23R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F24R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F24R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F24R1_s & r)) volatile {
    CAN_F24R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F24R1_s & r)) volatile {
    CAN_F24R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F24R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F24R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F24R2_s & r)) volatile {
    CAN_F24R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F24R2_s & r)) volatile {
    CAN_F24R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F25R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F25R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F25R1_s & r)) volatile {
    CAN_F25R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F25R1_s & r)) volatile {
    CAN_F25R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F25R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F25R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F25R2_s & r)) volatile {
    CAN_F25R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F25R2_s & r)) volatile {
    CAN_F25R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F26R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F26R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F26R1_s & r)) volatile {
    CAN_F26R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F26R1_s & r)) volatile {
    CAN_F26R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F26R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F26R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F26R2_s & r)) volatile {
    CAN_F26R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F26R2_s & r)) volatile {
    CAN_F26R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F27R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F27R1_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F27R1_s & r)) volatile {
    CAN_F27R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F27R1_s & r)) volatile {
    CAN_F27R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CAN_F27R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t FB0              :  1; /*!< Ofs=0, w=1 Filter bits */
      __RWB uint32_t FB1              :  1; /*!< Ofs=1, w=1 Filter bits */
      __RWB uint32_t FB2              :  1; /*!< Ofs=2, w=1 Filter bits */
      __RWB uint32_t FB3              :  1; /*!< Ofs=3, w=1 Filter bits */
      __RWB uint32_t FB4              :  1; /*!< Ofs=4, w=1 Filter bits */
      __RWB uint32_t FB5              :  1; /*!< Ofs=5, w=1 Filter bits */
      __RWB uint32_t FB6              :  1; /*!< Ofs=6, w=1 Filter bits */
      __RWB uint32_t FB7              :  1; /*!< Ofs=7, w=1 Filter bits */
      __RWB uint32_t FB8              :  1; /*!< Ofs=8, w=1 Filter bits */
      __RWB uint32_t FB9              :  1; /*!< Ofs=9, w=1 Filter bits */
      __RWB uint32_t FB10             :  1; /*!< Ofs=10, w=1 Filter bits */
      __RWB uint32_t FB11             :  1; /*!< Ofs=11, w=1 Filter bits */
      __RWB uint32_t FB12             :  1; /*!< Ofs=12, w=1 Filter bits */
      __RWB uint32_t FB13             :  1; /*!< Ofs=13, w=1 Filter bits */
      __RWB uint32_t FB14             :  1; /*!< Ofs=14, w=1 Filter bits */
      __RWB uint32_t FB15             :  1; /*!< Ofs=15, w=1 Filter bits */
      __RWB uint32_t FB16             :  1; /*!< Ofs=16, w=1 Filter bits */
      __RWB uint32_t FB17             :  1; /*!< Ofs=17, w=1 Filter bits */
      __RWB uint32_t FB18             :  1; /*!< Ofs=18, w=1 Filter bits */
      __RWB uint32_t FB19             :  1; /*!< Ofs=19, w=1 Filter bits */
      __RWB uint32_t FB20             :  1; /*!< Ofs=20, w=1 Filter bits */
      __RWB uint32_t FB21             :  1; /*!< Ofs=21, w=1 Filter bits */
      __RWB uint32_t FB22             :  1; /*!< Ofs=22, w=1 Filter bits */
      __RWB uint32_t FB23             :  1; /*!< Ofs=23, w=1 Filter bits */
      __RWB uint32_t FB24             :  1; /*!< Ofs=24, w=1 Filter bits */
      __RWB uint32_t FB25             :  1; /*!< Ofs=25, w=1 Filter bits */
      __RWB uint32_t FB26             :  1; /*!< Ofs=26, w=1 Filter bits */
      __RWB uint32_t FB27             :  1; /*!< Ofs=27, w=1 Filter bits */
      __RWB uint32_t FB28             :  1; /*!< Ofs=28, w=1 Filter bits */
      __RWB uint32_t FB29             :  1; /*!< Ofs=29, w=1 Filter bits */
      __RWB uint32_t FB30             :  1; /*!< Ofs=30, w=1 Filter bits */
      __RWB uint32_t FB31             :  1; /*!< Ofs=31, w=1 Filter bits */
    } B;
  };
#ifdef __cplusplus
  CAN_F27R2_s(): R(0) {};
  void modify  (uint32_t (*f) (CAN_F27R2_s & r)) volatile {
    CAN_F27R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CAN_F27R2_s & r)) volatile {
    CAN_F27R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CRS_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SYNCOKIE         :  1; /*!< Ofs=0, w=1 SYNC event OK interrupt enable */
      __RWB uint32_t SYNCWARNIE       :  1; /*!< Ofs=1, w=1 SYNC warning interrupt enable */
      __RWB uint32_t ERRIE            :  1; /*!< Ofs=2, w=1 Synchronization or trimming error interrupt enable */
      __RWB uint32_t ESYNCIE          :  1; /*!< Ofs=3, w=1 Expected SYNC interrupt enable */
            uint32_t unused0          :  1;
      __RWB uint32_t CEN              :  1; /*!< Ofs=5, w=1 Frequency error counter enable */
      __RWB uint32_t AUTOTRIMEN       :  1; /*!< Ofs=6, w=1 Automatic trimming enable */
      __RWB uint32_t SWSYNC           :  1; /*!< Ofs=7, w=1 Generate software SYNC event */
      __RWB uint32_t TRIM             :  6; /*!< Ofs=8, w=6 HSI48 oscillator smooth trimming */
            uint32_t unused1          : 18;
    } B;
  };
#ifdef __cplusplus
  CRS_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (CRS_CR_s & r)) volatile {
    CRS_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRS_CR_s & r)) volatile {
    CRS_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CRS_CFGR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RELOAD           : 16; /*!< Ofs=0, w=16 Counter reload value */
      __RWB uint32_t FELIM            :  8; /*!< Ofs=16, w=8 Frequency error limit */
      __RWB uint32_t SYNCDIV          :  3; /*!< Ofs=24, w=3 SYNC divider */
            uint32_t unused0          :  1;
      __RWB uint32_t SYNCSRC          :  2; /*!< Ofs=28, w=2 SYNC signal source selection */
            uint32_t unused1          :  1;
      __RWB uint32_t SYNCPOL          :  1; /*!< Ofs=31, w=1 SYNC polarity selection */
    } B;
  };
#ifdef __cplusplus
  CRS_CFGR_s(): R(0) {};
  void modify  (uint32_t (*f) (CRS_CFGR_s & r)) volatile {
    CRS_CFGR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRS_CFGR_s & r)) volatile {
    CRS_CFGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CRS_ISR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t SYNCOKF          :  1; /*!< Ofs=0, w=1 SYNC event OK flag */
      __ROB uint32_t SYNCWARNF        :  1; /*!< Ofs=1, w=1 SYNC warning flag */
      __ROB uint32_t ERRF             :  1; /*!< Ofs=2, w=1 Error flag */
      __ROB uint32_t ESYNCF           :  1; /*!< Ofs=3, w=1 Expected SYNC flag */
            uint32_t unused0          :  4;
      __ROB uint32_t SYNCERR          :  1; /*!< Ofs=8, w=1 SYNC error */
      __ROB uint32_t SYNCMISS         :  1; /*!< Ofs=9, w=1 SYNC missed */
      __ROB uint32_t TRIMOVF          :  1; /*!< Ofs=10, w=1 Trimming overflow or underflow */
            uint32_t unused1          :  4;
      __ROB uint32_t FEDIR            :  1; /*!< Ofs=15, w=1 Frequency error direction */
      __ROB uint32_t FECAP            : 16; /*!< Ofs=16, w=16 Frequency error capture */
    } B;
  };
#ifdef __cplusplus
  CRS_ISR_s(__RO CRS_ISR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CRS_ICR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SYNCOKC          :  1; /*!< Ofs=0, w=1 SYNC event OK clear flag */
      __RWB uint32_t SYNCWARNC        :  1; /*!< Ofs=1, w=1 SYNC warning clear flag */
      __RWB uint32_t ERRC             :  1; /*!< Ofs=2, w=1 Error clear flag */
      __RWB uint32_t ESYNCC           :  1; /*!< Ofs=3, w=1 Expected SYNC clear flag */
            uint32_t unused0          : 28;
    } B;
  };
#ifdef __cplusplus
  CRS_ICR_s(): R(0) {};
  void modify  (uint32_t (*f) (CRS_ICR_s & r)) volatile {
    CRS_ICR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRS_ICR_s & r)) volatile {
    CRS_ICR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct PWR_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LPDS             :  1; /*!< Ofs=0, w=1 Low-power deep sleep */
      __RWB uint32_t PDDS             :  1; /*!< Ofs=1, w=1 Power down deepsleep */
      __RWB uint32_t CWUF             :  1; /*!< Ofs=2, w=1 Clear wakeup flag */
      __RWB uint32_t CSBF             :  1; /*!< Ofs=3, w=1 Clear standby flag */
      __RWB uint32_t PVDE             :  1; /*!< Ofs=4, w=1 Power voltage detector enable */
      __RWB uint32_t PLS              :  3; /*!< Ofs=5, w=3 PVD level selection */
      __RWB uint32_t DBP              :  1; /*!< Ofs=8, w=1 Disable backup domain write protection */
            uint32_t unused0          : 23;
    } B;
  };
#ifdef __cplusplus
  PWR_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (PWR_CR_s & r)) volatile {
    PWR_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (PWR_CR_s & r)) volatile {
    PWR_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct PWR_CSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t WUF              :  1; /*!< Ofs=0, w=1 Wakeup flag */
      __ROB uint32_t SBF              :  1; /*!< Ofs=1, w=1 Standby flag */
      __ROB uint32_t PVDO             :  1; /*!< Ofs=2, w=1 PVD output */
      __ROB uint32_t VREFINTRDY       :  1; /*!< Ofs=3, w=1 VREFINT reference voltage ready */
            uint32_t unused0          :  4;
      __RWB uint32_t EWUP1            :  1; /*!< Ofs=8, w=1 Enable WKUP pin 1 */
      __RWB uint32_t EWUP2            :  1; /*!< Ofs=9, w=1 Enable WKUP pin 2 */
      __RWB uint32_t EWUP3            :  1; /*!< Ofs=10, w=1 Enable WKUP pin 3 */
      __RWB uint32_t EWUP4            :  1; /*!< Ofs=11, w=1 Enable WKUP pin 4 */
      __RWB uint32_t EWUP5            :  1; /*!< Ofs=12, w=1 Enable WKUP pin 5 */
      __RWB uint32_t EWUP6            :  1; /*!< Ofs=13, w=1 Enable WKUP pin 6 */
      __RWB uint32_t EWUP7            :  1; /*!< Ofs=14, w=1 Enable WKUP pin 7 */
      __RWB uint32_t EWUP8            :  1; /*!< Ofs=15, w=1 Enable WKUP pin 8 */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  PWR_CSR_s(): R(0) {};
  void modify  (uint32_t (*f) (PWR_CSR_s & r)) volatile {
    PWR_CSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (PWR_CSR_s & r)) volatile {
    PWR_CSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN1              :  1; /*!< Ofs=0, w=1 DAC channel1 enable */
      __RWB uint32_t BOFF1            :  1; /*!< Ofs=1, w=1 DAC channel1 output buffer disable */
      __RWB uint32_t TEN1             :  1; /*!< Ofs=2, w=1 DAC channel1 trigger enable */
      __RWB uint32_t TSEL1            :  3; /*!< Ofs=3, w=3 DAC channel1 trigger selection */
      __RWB uint32_t WAVE1            :  2; /*!< Ofs=6, w=2 DAC channel1 noise/triangle wave generation enable */
      __RWB uint32_t MAMP1            :  4; /*!< Ofs=8, w=4 DAC channel1 mask/amplitude selector */
      __RWB uint32_t DMAEN1           :  1; /*!< Ofs=12, w=1 DAC channel1 DMA enable */
      __RWB uint32_t DMAUDRIE1        :  1; /*!< Ofs=13, w=1 DAC channel1 DMA Underrun Interrupt enable */
            uint32_t unused0          :  2;
      __RWB uint32_t EN2              :  1; /*!< Ofs=16, w=1 DAC channel2 enable */
      __RWB uint32_t BOFF2            :  1; /*!< Ofs=17, w=1 DAC channel2 output buffer disable */
      __RWB uint32_t TEN2             :  1; /*!< Ofs=18, w=1 DAC channel2 trigger enable */
      __RWB uint32_t TSEL2            :  3; /*!< Ofs=19, w=3 DAC channel2 trigger selection */
      __RWB uint32_t WAVE2            :  2; /*!< Ofs=22, w=2 DAC channel2 noise/triangle wave generation enable */
      __RWB uint32_t MAMP2            :  4; /*!< Ofs=24, w=4 DAC channel2 mask/amplitude selector */
      __RWB uint32_t DMAEN2           :  1; /*!< Ofs=28, w=1 DAC channel2 DMA enable */
      __RWB uint32_t DMAUDRIE2        :  1; /*!< Ofs=29, w=1 DAC channel2 DMA underrun interrupt enable */
            uint32_t unused1          :  2;
    } B;
  };
#ifdef __cplusplus
  DAC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_CR_s & r)) volatile {
    DAC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_CR_s & r)) volatile {
    DAC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_SWTRIGR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t SWTRIG1          :  1; /*!< Ofs=0, w=1 DAC channel1 software trigger */
      __WOB uint32_t SWTRIG2          :  1; /*!< Ofs=1, w=1 DAC channel2 software trigger */
            uint32_t unused0          : 30;
    } B;
  };
#ifdef __cplusplus
  DAC_SWTRIGR_s(): R(0) {};
  void setbits (uint32_t (*f) (DAC_SWTRIGR_s & r)) volatile {
    DAC_SWTRIGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR12R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DACC1DHR         : 12; /*!< Ofs=0, w=12 DAC channel1 12-bit right-aligned data */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR12R1_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR12R1_s & r)) volatile {
    DAC_DHR12R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR12R1_s & r)) volatile {
    DAC_DHR12R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR12L1_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  4;
      __RWB uint32_t DACC1DHR         : 12; /*!< Ofs=4, w=12 DAC channel1 12-bit left-aligned data */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR12L1_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR12L1_s & r)) volatile {
    DAC_DHR12L1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR12L1_s & r)) volatile {
    DAC_DHR12L1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR8R1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DACC1DHR         :  8; /*!< Ofs=0, w=8 DAC channel1 8-bit right-aligned data */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR8R1_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR8R1_s & r)) volatile {
    DAC_DHR8R1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR8R1_s & r)) volatile {
    DAC_DHR8R1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR12R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DACC2DHR         : 12; /*!< Ofs=0, w=12 DAC channel2 12-bit right-aligned data */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR12R2_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR12R2_s & r)) volatile {
    DAC_DHR12R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR12R2_s & r)) volatile {
    DAC_DHR12R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR12L2_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  4;
      __RWB uint32_t DACC2DHR         : 12; /*!< Ofs=4, w=12 DAC channel2 12-bit left-aligned data */
            uint32_t unused1          : 16;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR12L2_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR12L2_s & r)) volatile {
    DAC_DHR12L2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR12L2_s & r)) volatile {
    DAC_DHR12L2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR8R2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DACC2DHR         :  8; /*!< Ofs=0, w=8 DAC channel2 8-bit right-aligned data */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR8R2_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR8R2_s & r)) volatile {
    DAC_DHR8R2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR8R2_s & r)) volatile {
    DAC_DHR8R2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR12RD_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DACC1DHR         : 12; /*!< Ofs=0, w=12 DAC channel1 12-bit right-aligned data */
            uint32_t unused0          :  4;
      __RWB uint32_t DACC2DHR         : 12; /*!< Ofs=16, w=12 DAC channel2 12-bit right-aligned data */
            uint32_t unused1          :  4;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR12RD_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR12RD_s & r)) volatile {
    DAC_DHR12RD_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR12RD_s & r)) volatile {
    DAC_DHR12RD_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR12LD_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  4;
      __RWB uint32_t DACC1DHR         : 12; /*!< Ofs=4, w=12 DAC channel1 12-bit left-aligned data */
            uint32_t unused1          :  4;
      __RWB uint32_t DACC2DHR         : 12; /*!< Ofs=20, w=12 DAC channel2 12-bit left-aligned data */
    } B;
  };
#ifdef __cplusplus
  DAC_DHR12LD_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR12LD_s & r)) volatile {
    DAC_DHR12LD_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR12LD_s & r)) volatile {
    DAC_DHR12LD_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DHR8RD_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DACC1DHR         :  8; /*!< Ofs=0, w=8 DAC channel1 8-bit right-aligned data */
      __RWB uint32_t DACC2DHR         :  8; /*!< Ofs=8, w=8 DAC channel2 8-bit right-aligned data */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DAC_DHR8RD_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_DHR8RD_s & r)) volatile {
    DAC_DHR8RD_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_DHR8RD_s & r)) volatile {
    DAC_DHR8RD_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DAC_DOR1_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DACC1DOR         : 12; /*!< Ofs=0, w=12 DAC channel1 data output */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  DAC_DOR1_s(__RO DAC_DOR1_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct DAC_DOR2_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DACC2DOR         : 12; /*!< Ofs=0, w=12 DAC channel2 data output */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  DAC_DOR2_s(__RO DAC_DOR2_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct DAC_SR_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          : 13;
      __RWB uint32_t DMAUDR1          :  1; /*!< Ofs=13, w=1 DAC channel1 DMA underrun flag */
            uint32_t unused1          : 15;
      __RWB uint32_t DMAUDR2          :  1; /*!< Ofs=29, w=1 DAC channel2 DMA underrun flag */
            uint32_t unused2          :  2;
    } B;
  };
#ifdef __cplusplus
  DAC_SR_s(): R(0) {};
  void modify  (uint32_t (*f) (DAC_SR_s & r)) volatile {
    DAC_SR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DAC_SR_s & r)) volatile {
    DAC_SR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CEC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CECEN            :  1; /*!< Ofs=0, w=1 CEC Enable */
      __RWB uint32_t TXSOM            :  1; /*!< Ofs=1, w=1 Tx start of message */
      __RWB uint32_t TXEOM            :  1; /*!< Ofs=2, w=1 Tx End Of Message */
            uint32_t unused0          : 29;
    } B;
  };
#ifdef __cplusplus
  CEC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (CEC_CR_s & r)) volatile {
    CEC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CEC_CR_s & r)) volatile {
    CEC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CEC_CFGR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t OAR              :  4; /*!< Ofs=0, w=4 Own Address */
      __RWB uint32_t LSTN             :  1; /*!< Ofs=4, w=1 Listen mode */
      __RWB uint32_t SFT              :  3; /*!< Ofs=5, w=3 Signal Free Time */
      __RWB uint32_t RXTOL            :  1; /*!< Ofs=8, w=1 Rx-Tolerance */
      __RWB uint32_t BRESTP           :  1; /*!< Ofs=9, w=1 Rx-stop on bit rising error */
      __RWB uint32_t BREGEN           :  1; /*!< Ofs=10, w=1 Generate error-bit on bit rising error */
      __RWB uint32_t LBPEGEN          :  1; /*!< Ofs=11, w=1 Generate Error-Bit on Long Bit Period Error */
            uint32_t unused0          : 20;
    } B;
  };
#ifdef __cplusplus
  CEC_CFGR_s(): R(0) {};
  void modify  (uint32_t (*f) (CEC_CFGR_s & r)) volatile {
    CEC_CFGR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CEC_CFGR_s & r)) volatile {
    CEC_CFGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CEC_TXDR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t TXD              :  8; /*!< Ofs=0, w=8 Tx Data register */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  CEC_TXDR_s(): R(0) {};
  void setbits (uint32_t (*f) (CEC_TXDR_s & r)) volatile {
    CEC_TXDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CEC_RXDR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t RXDR             :  8; /*!< Ofs=0, w=8 CEC Rx Data Register */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  CEC_RXDR_s(__RO CEC_RXDR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CEC_ISR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RXBR             :  1; /*!< Ofs=0, w=1 Rx-Byte Received */
      __RWB uint32_t RXEND            :  1; /*!< Ofs=1, w=1 End Of Reception */
      __RWB uint32_t RXOVR            :  1; /*!< Ofs=2, w=1 Rx-Overrun */
      __RWB uint32_t BRE              :  1; /*!< Ofs=3, w=1 Rx-Bit rising error */
      __RWB uint32_t SBPE             :  1; /*!< Ofs=4, w=1 Rx-Short Bit period error */
      __RWB uint32_t LBPE             :  1; /*!< Ofs=5, w=1 Rx-Long Bit Period Error */
      __RWB uint32_t RXACKE           :  1; /*!< Ofs=6, w=1 Rx-Missing Acknowledge */
      __RWB uint32_t ARBLST           :  1; /*!< Ofs=7, w=1 Arbitration Lost */
      __RWB uint32_t TXBR             :  1; /*!< Ofs=8, w=1 Tx-Byte Request */
      __RWB uint32_t TXEND            :  1; /*!< Ofs=9, w=1 End of Transmission */
      __RWB uint32_t TXUDR            :  1; /*!< Ofs=10, w=1 Tx-Buffer Underrun */
      __RWB uint32_t TXERR            :  1; /*!< Ofs=11, w=1 Tx-Error */
      __RWB uint32_t TXACKE           :  1; /*!< Ofs=12, w=1 Tx-Missing acknowledge error */
            uint32_t unused0          : 19;
    } B;
  };
#ifdef __cplusplus
  CEC_ISR_s(): R(0) {};
  void modify  (uint32_t (*f) (CEC_ISR_s & r)) volatile {
    CEC_ISR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CEC_ISR_s & r)) volatile {
    CEC_ISR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CEC_IER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RXBRIE           :  1; /*!< Ofs=0, w=1 Rx-Byte Received Interrupt Enable */
      __RWB uint32_t RXENDIE          :  1; /*!< Ofs=1, w=1 End Of Reception Interrupt Enable */
      __RWB uint32_t RXOVRIE          :  1; /*!< Ofs=2, w=1 Rx-Buffer Overrun Interrupt Enable */
      __RWB uint32_t BREIE            :  1; /*!< Ofs=3, w=1 Bit Rising Error Interrupt Enable */
      __RWB uint32_t SBPEIE           :  1; /*!< Ofs=4, w=1 Short Bit Period Error Interrupt Enable */
      __RWB uint32_t LBPEIE           :  1; /*!< Ofs=5, w=1 Long Bit Period Error Interrupt Enable */
      __RWB uint32_t RXACKIE          :  1; /*!< Ofs=6, w=1 Rx-Missing Acknowledge Error Interrupt Enable */
      __RWB uint32_t ARBLSTIE         :  1; /*!< Ofs=7, w=1 Arbitration Lost Interrupt Enable */
      __RWB uint32_t TXBRIE           :  1; /*!< Ofs=8, w=1 Tx-Byte Request Interrupt Enable */
      __RWB uint32_t TXENDIE          :  1; /*!< Ofs=9, w=1 Tx-End of message interrupt enable */
      __RWB uint32_t TXUDRIE          :  1; /*!< Ofs=10, w=1 Tx-Underrun interrupt enable */
      __RWB uint32_t TXERRIE          :  1; /*!< Ofs=11, w=1 Tx-Error Interrupt Enable */
      __RWB uint32_t TXACKIE          :  1; /*!< Ofs=12, w=1 Tx-Missing Acknowledge Error Interrupt Enable */
            uint32_t unused0          : 19;
    } B;
  };
#ifdef __cplusplus
  CEC_IER_s(): R(0) {};
  void modify  (uint32_t (*f) (CEC_IER_s & r)) volatile {
    CEC_IER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CEC_IER_s & r)) volatile {
    CEC_IER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_SYSCFG_CFGR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MEM_MODE         :  2; /*!< Ofs=0, w=2 Memory mapping selection bits */
            uint32_t unused0          :  6;
      __RWB uint32_t ADC_DMA_RMP      :  1; /*!< Ofs=8, w=1 ADC DMA remapping bit */
      __RWB uint32_t USART1_TX_DMA_RMP :  1; /*!< Ofs=9, w=1 USART1_TX DMA remapping bit */
      __RWB uint32_t USART1_RX_DMA_RMP :  1; /*!< Ofs=10, w=1 USART1_RX DMA request remapping bit */
      __RWB uint32_t TIM16_DMA_RMP    :  1; /*!< Ofs=11, w=1 TIM16 DMA request remapping bit */
      __RWB uint32_t TIM17_DMA_RMP    :  1; /*!< Ofs=12, w=1 TIM17 DMA request remapping bit */
            uint32_t unused1          :  3;
      __RWB uint32_t I2C_PB6_FM       :  1; /*!< Ofs=16, w=1 Fast Mode Plus (FM plus) driving capability activation bits. */
      __RWB uint32_t I2C_PB7_FM       :  1; /*!< Ofs=17, w=1 Fast Mode Plus (FM+) driving capability activation bits. */
      __RWB uint32_t I2C_PB8_FM       :  1; /*!< Ofs=18, w=1 Fast Mode Plus (FM+) driving capability activation bits. */
      __RWB uint32_t I2C_PB9_FM       :  1; /*!< Ofs=19, w=1 Fast Mode Plus (FM+) driving capability activation bits. */
      __RWB uint32_t I2C1_FM_plus     :  1; /*!< Ofs=20, w=1 FM+ driving capability activation for I2C1 */
      __RWB uint32_t I2C2_FM_plus     :  1; /*!< Ofs=21, w=1 FM+ driving capability activation for I2C2 */
            uint32_t unused2          :  2;
      __RWB uint32_t SPI2_DMA_RMP     :  1; /*!< Ofs=24, w=1 SPI2 DMA request remapping bit */
      __RWB uint32_t USART2_DMA_RMP   :  1; /*!< Ofs=25, w=1 USART2 DMA request remapping bit */
      __RWB uint32_t USART3_DMA_RMP   :  1; /*!< Ofs=26, w=1 USART3 DMA request remapping bit */
      __RWB uint32_t I2C1_DMA_RMP     :  1; /*!< Ofs=27, w=1 I2C1 DMA request remapping bit */
      __RWB uint32_t TIM1_DMA_RMP     :  1; /*!< Ofs=28, w=1 TIM1 DMA request remapping bit */
      __RWB uint32_t TIM2_DMA_RMP     :  1; /*!< Ofs=29, w=1 TIM2 DMA request remapping bit */
      __RWB uint32_t TIM3_DMA_RMP     :  1; /*!< Ofs=30, w=1 TIM3 DMA request remapping bit */
            uint32_t unused3          :  1;
    } B;
  };
#ifdef __cplusplus
  SYSCFG_SYSCFG_CFGR1_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_SYSCFG_CFGR1_s & r)) volatile {
    SYSCFG_SYSCFG_CFGR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_SYSCFG_CFGR1_s & r)) volatile {
    SYSCFG_SYSCFG_CFGR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_SYSCFG_EXTICR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EXTI0            :  4; /*!< Ofs=0, w=4 EXTI 0 configuration bits */
      __RWB uint32_t EXTI1            :  4; /*!< Ofs=4, w=4 EXTI 1 configuration bits */
      __RWB uint32_t EXTI2            :  4; /*!< Ofs=8, w=4 EXTI 2 configuration bits */
      __RWB uint32_t EXTI3            :  4; /*!< Ofs=12, w=4 EXTI 3 configuration bits */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SYSCFG_SYSCFG_EXTICR1_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR1_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR1_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_SYSCFG_EXTICR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EXTI4            :  4; /*!< Ofs=0, w=4 EXTI 4 configuration bits */
      __RWB uint32_t EXTI5            :  4; /*!< Ofs=4, w=4 EXTI 5 configuration bits */
      __RWB uint32_t EXTI6            :  4; /*!< Ofs=8, w=4 EXTI 6 configuration bits */
      __RWB uint32_t EXTI7            :  4; /*!< Ofs=12, w=4 EXTI 7 configuration bits */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SYSCFG_SYSCFG_EXTICR2_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR2_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR2_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_SYSCFG_EXTICR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EXTI8            :  4; /*!< Ofs=0, w=4 EXTI 8 configuration bits */
      __RWB uint32_t EXTI9            :  4; /*!< Ofs=4, w=4 EXTI 9 configuration bits */
      __RWB uint32_t EXTI10           :  4; /*!< Ofs=8, w=4 EXTI 10 configuration bits */
      __RWB uint32_t EXTI11           :  4; /*!< Ofs=12, w=4 EXTI 11 configuration bits */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SYSCFG_SYSCFG_EXTICR3_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR3_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR3_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_SYSCFG_EXTICR4_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EXTI12           :  4; /*!< Ofs=0, w=4 EXTI 12 configuration bits */
      __RWB uint32_t EXTI13           :  4; /*!< Ofs=4, w=4 EXTI 13 configuration bits */
      __RWB uint32_t EXTI14           :  4; /*!< Ofs=8, w=4 EXTI 14 configuration bits */
      __RWB uint32_t EXTI15           :  4; /*!< Ofs=12, w=4 EXTI 15 configuration bits */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SYSCFG_SYSCFG_EXTICR4_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR4_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR4_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_SYSCFG_EXTICR4_s & r)) volatile {
    SYSCFG_SYSCFG_EXTICR4_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_SYSCFG_CFGR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LOCUP_LOCK       :  1; /*!< Ofs=0, w=1 Cortex-M0 LOCKUP bit enable bit */
      __RWB uint32_t SRAM_PARITY_LOCK :  1; /*!< Ofs=1, w=1 SRAM parity lock bit */
      __RWB uint32_t PVD_LOCK         :  1; /*!< Ofs=2, w=1 PVD lock enable bit */
            uint32_t unused0          :  5;
      __RWB uint32_t SRAM_PEF         :  1; /*!< Ofs=8, w=1 SRAM parity flag */
            uint32_t unused1          : 23;
    } B;
  };
#ifdef __cplusplus
  SYSCFG_SYSCFG_CFGR2_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_SYSCFG_CFGR2_s & r)) volatile {
    SYSCFG_SYSCFG_CFGR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_SYSCFG_CFGR2_s & r)) volatile {
    SYSCFG_SYSCFG_CFGR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SYSCFG_COMP_CSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t COMP1EN          :  1; /*!< Ofs=0, w=1 Comparator 1 enable */
      __RWB uint32_t COMP1_INP_DAC    :  1; /*!< Ofs=1, w=1 COMP1_INP_DAC */
      __RWB uint32_t COMP1MODE        :  2; /*!< Ofs=2, w=2 Comparator 1 mode */
      __RWB uint32_t COMP1INSEL       :  3; /*!< Ofs=4, w=3 Comparator 1 inverting input selection */
            uint32_t unused0          :  1;
      __RWB uint32_t COMP1OUTSEL      :  3; /*!< Ofs=8, w=3 Comparator 1 output selection */
      __RWB uint32_t COMP1POL         :  1; /*!< Ofs=11, w=1 Comparator 1 output polarity */
      __RWB uint32_t COMP1HYST        :  2; /*!< Ofs=12, w=2 Comparator 1 hysteresis */
      __ROB uint32_t COMP1OUT         :  1; /*!< Ofs=14, w=1 Comparator 1 output */
      __RWB uint32_t COMP1LOCK        :  1; /*!< Ofs=15, w=1 Comparator 1 lock */
      __RWB uint32_t COMP2EN          :  1; /*!< Ofs=16, w=1 Comparator 2 enable */
            uint32_t unused1          :  1;
      __RWB uint32_t COMP2MODE        :  2; /*!< Ofs=18, w=2 Comparator 2 mode */
      __RWB uint32_t COMP2INSEL       :  3; /*!< Ofs=20, w=3 Comparator 2 inverting input selection */
      __RWB uint32_t WNDWEN           :  1; /*!< Ofs=23, w=1 Window mode enable */
      __RWB uint32_t COMP2OUTSEL      :  3; /*!< Ofs=24, w=3 Comparator 2 output selection */
      __RWB uint32_t COMP2POL         :  1; /*!< Ofs=27, w=1 Comparator 2 output polarity */
      __RWB uint32_t COMP2HYST        :  2; /*!< Ofs=28, w=2 Comparator 2 hysteresis */
      __ROB uint32_t COMP2OUT         :  1; /*!< Ofs=30, w=1 Comparator 2 output */
      __RWB uint32_t COMP2LOCK        :  1; /*!< Ofs=31, w=1 Comparator 2 lock */
    } B;
  };
#ifdef __cplusplus
  SYSCFG_COMP_CSR_s(): R(0) {};
  void modify  (uint32_t (*f) (SYSCFG_COMP_CSR_s & r)) volatile {
    SYSCFG_COMP_CSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SYSCFG_COMP_CSR_s & r)) volatile {
    SYSCFG_COMP_CSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct EXTI_IMR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MR0              :  1; /*!< Ofs=0, w=1 Interrupt Mask on line 0 */
      __RWB uint32_t MR1              :  1; /*!< Ofs=1, w=1 Interrupt Mask on line 1 */
      __RWB uint32_t MR2              :  1; /*!< Ofs=2, w=1 Interrupt Mask on line 2 */
      __RWB uint32_t MR3              :  1; /*!< Ofs=3, w=1 Interrupt Mask on line 3 */
      __RWB uint32_t MR4              :  1; /*!< Ofs=4, w=1 Interrupt Mask on line 4 */
      __RWB uint32_t MR5              :  1; /*!< Ofs=5, w=1 Interrupt Mask on line 5 */
      __RWB uint32_t MR6              :  1; /*!< Ofs=6, w=1 Interrupt Mask on line 6 */
      __RWB uint32_t MR7              :  1; /*!< Ofs=7, w=1 Interrupt Mask on line 7 */
      __RWB uint32_t MR8              :  1; /*!< Ofs=8, w=1 Interrupt Mask on line 8 */
      __RWB uint32_t MR9              :  1; /*!< Ofs=9, w=1 Interrupt Mask on line 9 */
      __RWB uint32_t MR10             :  1; /*!< Ofs=10, w=1 Interrupt Mask on line 10 */
      __RWB uint32_t MR11             :  1; /*!< Ofs=11, w=1 Interrupt Mask on line 11 */
      __RWB uint32_t MR12             :  1; /*!< Ofs=12, w=1 Interrupt Mask on line 12 */
      __RWB uint32_t MR13             :  1; /*!< Ofs=13, w=1 Interrupt Mask on line 13 */
      __RWB uint32_t MR14             :  1; /*!< Ofs=14, w=1 Interrupt Mask on line 14 */
      __RWB uint32_t MR15             :  1; /*!< Ofs=15, w=1 Interrupt Mask on line 15 */
      __RWB uint32_t MR16             :  1; /*!< Ofs=16, w=1 Interrupt Mask on line 16 */
      __RWB uint32_t MR17             :  1; /*!< Ofs=17, w=1 Interrupt Mask on line 17 */
      __RWB uint32_t MR18             :  1; /*!< Ofs=18, w=1 Interrupt Mask on line 18 */
      __RWB uint32_t MR19             :  1; /*!< Ofs=19, w=1 Interrupt Mask on line 19 */
      __RWB uint32_t MR20             :  1; /*!< Ofs=20, w=1 Interrupt Mask on line 20 */
      __RWB uint32_t MR21             :  1; /*!< Ofs=21, w=1 Interrupt Mask on line 21 */
      __RWB uint32_t MR22             :  1; /*!< Ofs=22, w=1 Interrupt Mask on line 22 */
      __RWB uint32_t MR23             :  1; /*!< Ofs=23, w=1 Interrupt Mask on line 23 */
      __RWB uint32_t MR24             :  1; /*!< Ofs=24, w=1 Interrupt Mask on line 24 */
      __RWB uint32_t MR25             :  1; /*!< Ofs=25, w=1 Interrupt Mask on line 25 */
      __RWB uint32_t MR26             :  1; /*!< Ofs=26, w=1 Interrupt Mask on line 26 */
      __RWB uint32_t MR27             :  1; /*!< Ofs=27, w=1 Interrupt Mask on line 27 */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  EXTI_IMR_s(): R(0) {};
  void modify  (uint32_t (*f) (EXTI_IMR_s & r)) volatile {
    EXTI_IMR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (EXTI_IMR_s & r)) volatile {
    EXTI_IMR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct EXTI_EMR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MR0              :  1; /*!< Ofs=0, w=1 Event Mask on line 0 */
      __RWB uint32_t MR1              :  1; /*!< Ofs=1, w=1 Event Mask on line 1 */
      __RWB uint32_t MR2              :  1; /*!< Ofs=2, w=1 Event Mask on line 2 */
      __RWB uint32_t MR3              :  1; /*!< Ofs=3, w=1 Event Mask on line 3 */
      __RWB uint32_t MR4              :  1; /*!< Ofs=4, w=1 Event Mask on line 4 */
      __RWB uint32_t MR5              :  1; /*!< Ofs=5, w=1 Event Mask on line 5 */
      __RWB uint32_t MR6              :  1; /*!< Ofs=6, w=1 Event Mask on line 6 */
      __RWB uint32_t MR7              :  1; /*!< Ofs=7, w=1 Event Mask on line 7 */
      __RWB uint32_t MR8              :  1; /*!< Ofs=8, w=1 Event Mask on line 8 */
      __RWB uint32_t MR9              :  1; /*!< Ofs=9, w=1 Event Mask on line 9 */
      __RWB uint32_t MR10             :  1; /*!< Ofs=10, w=1 Event Mask on line 10 */
      __RWB uint32_t MR11             :  1; /*!< Ofs=11, w=1 Event Mask on line 11 */
      __RWB uint32_t MR12             :  1; /*!< Ofs=12, w=1 Event Mask on line 12 */
      __RWB uint32_t MR13             :  1; /*!< Ofs=13, w=1 Event Mask on line 13 */
      __RWB uint32_t MR14             :  1; /*!< Ofs=14, w=1 Event Mask on line 14 */
      __RWB uint32_t MR15             :  1; /*!< Ofs=15, w=1 Event Mask on line 15 */
      __RWB uint32_t MR16             :  1; /*!< Ofs=16, w=1 Event Mask on line 16 */
      __RWB uint32_t MR17             :  1; /*!< Ofs=17, w=1 Event Mask on line 17 */
      __RWB uint32_t MR18             :  1; /*!< Ofs=18, w=1 Event Mask on line 18 */
      __RWB uint32_t MR19             :  1; /*!< Ofs=19, w=1 Event Mask on line 19 */
      __RWB uint32_t MR20             :  1; /*!< Ofs=20, w=1 Event Mask on line 20 */
      __RWB uint32_t MR21             :  1; /*!< Ofs=21, w=1 Event Mask on line 21 */
      __RWB uint32_t MR22             :  1; /*!< Ofs=22, w=1 Event Mask on line 22 */
      __RWB uint32_t MR23             :  1; /*!< Ofs=23, w=1 Event Mask on line 23 */
      __RWB uint32_t MR24             :  1; /*!< Ofs=24, w=1 Event Mask on line 24 */
      __RWB uint32_t MR25             :  1; /*!< Ofs=25, w=1 Event Mask on line 25 */
      __RWB uint32_t MR26             :  1; /*!< Ofs=26, w=1 Event Mask on line 26 */
      __RWB uint32_t MR27             :  1; /*!< Ofs=27, w=1 Event Mask on line 27 */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  EXTI_EMR_s(): R(0) {};
  void modify  (uint32_t (*f) (EXTI_EMR_s & r)) volatile {
    EXTI_EMR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (EXTI_EMR_s & r)) volatile {
    EXTI_EMR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct EXTI_RTSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TR0              :  1; /*!< Ofs=0, w=1 Rising trigger event configuration of line 0 */
      __RWB uint32_t TR1              :  1; /*!< Ofs=1, w=1 Rising trigger event configuration of line 1 */
      __RWB uint32_t TR2              :  1; /*!< Ofs=2, w=1 Rising trigger event configuration of line 2 */
      __RWB uint32_t TR3              :  1; /*!< Ofs=3, w=1 Rising trigger event configuration of line 3 */
      __RWB uint32_t TR4              :  1; /*!< Ofs=4, w=1 Rising trigger event configuration of line 4 */
      __RWB uint32_t TR5              :  1; /*!< Ofs=5, w=1 Rising trigger event configuration of line 5 */
      __RWB uint32_t TR6              :  1; /*!< Ofs=6, w=1 Rising trigger event configuration of line 6 */
      __RWB uint32_t TR7              :  1; /*!< Ofs=7, w=1 Rising trigger event configuration of line 7 */
      __RWB uint32_t TR8              :  1; /*!< Ofs=8, w=1 Rising trigger event configuration of line 8 */
      __RWB uint32_t TR9              :  1; /*!< Ofs=9, w=1 Rising trigger event configuration of line 9 */
      __RWB uint32_t TR10             :  1; /*!< Ofs=10, w=1 Rising trigger event configuration of line 10 */
      __RWB uint32_t TR11             :  1; /*!< Ofs=11, w=1 Rising trigger event configuration of line 11 */
      __RWB uint32_t TR12             :  1; /*!< Ofs=12, w=1 Rising trigger event configuration of line 12 */
      __RWB uint32_t TR13             :  1; /*!< Ofs=13, w=1 Rising trigger event configuration of line 13 */
      __RWB uint32_t TR14             :  1; /*!< Ofs=14, w=1 Rising trigger event configuration of line 14 */
      __RWB uint32_t TR15             :  1; /*!< Ofs=15, w=1 Rising trigger event configuration of line 15 */
      __RWB uint32_t TR16             :  1; /*!< Ofs=16, w=1 Rising trigger event configuration of line 16 */
      __RWB uint32_t TR17             :  1; /*!< Ofs=17, w=1 Rising trigger event configuration of line 17 */
            uint32_t unused0          :  1;
      __RWB uint32_t TR19             :  1; /*!< Ofs=19, w=1 Rising trigger event configuration of line 19 */
            uint32_t unused1          : 12;
    } B;
  };
#ifdef __cplusplus
  EXTI_RTSR_s(): R(0) {};
  void modify  (uint32_t (*f) (EXTI_RTSR_s & r)) volatile {
    EXTI_RTSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (EXTI_RTSR_s & r)) volatile {
    EXTI_RTSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct EXTI_FTSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TR0              :  1; /*!< Ofs=0, w=1 Falling trigger event configuration of line 0 */
      __RWB uint32_t TR1              :  1; /*!< Ofs=1, w=1 Falling trigger event configuration of line 1 */
      __RWB uint32_t TR2              :  1; /*!< Ofs=2, w=1 Falling trigger event configuration of line 2 */
      __RWB uint32_t TR3              :  1; /*!< Ofs=3, w=1 Falling trigger event configuration of line 3 */
      __RWB uint32_t TR4              :  1; /*!< Ofs=4, w=1 Falling trigger event configuration of line 4 */
      __RWB uint32_t TR5              :  1; /*!< Ofs=5, w=1 Falling trigger event configuration of line 5 */
      __RWB uint32_t TR6              :  1; /*!< Ofs=6, w=1 Falling trigger event configuration of line 6 */
      __RWB uint32_t TR7              :  1; /*!< Ofs=7, w=1 Falling trigger event configuration of line 7 */
      __RWB uint32_t TR8              :  1; /*!< Ofs=8, w=1 Falling trigger event configuration of line 8 */
      __RWB uint32_t TR9              :  1; /*!< Ofs=9, w=1 Falling trigger event configuration of line 9 */
      __RWB uint32_t TR10             :  1; /*!< Ofs=10, w=1 Falling trigger event configuration of line 10 */
      __RWB uint32_t TR11             :  1; /*!< Ofs=11, w=1 Falling trigger event configuration of line 11 */
      __RWB uint32_t TR12             :  1; /*!< Ofs=12, w=1 Falling trigger event configuration of line 12 */
      __RWB uint32_t TR13             :  1; /*!< Ofs=13, w=1 Falling trigger event configuration of line 13 */
      __RWB uint32_t TR14             :  1; /*!< Ofs=14, w=1 Falling trigger event configuration of line 14 */
      __RWB uint32_t TR15             :  1; /*!< Ofs=15, w=1 Falling trigger event configuration of line 15 */
      __RWB uint32_t TR16             :  1; /*!< Ofs=16, w=1 Falling trigger event configuration of line 16 */
      __RWB uint32_t TR17             :  1; /*!< Ofs=17, w=1 Falling trigger event configuration of line 17 */
            uint32_t unused0          :  1;
      __RWB uint32_t TR19             :  1; /*!< Ofs=19, w=1 Falling trigger event configuration of line 19 */
            uint32_t unused1          : 12;
    } B;
  };
#ifdef __cplusplus
  EXTI_FTSR_s(): R(0) {};
  void modify  (uint32_t (*f) (EXTI_FTSR_s & r)) volatile {
    EXTI_FTSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (EXTI_FTSR_s & r)) volatile {
    EXTI_FTSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct EXTI_SWIER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SWIER0           :  1; /*!< Ofs=0, w=1 Software Interrupt on line 0 */
      __RWB uint32_t SWIER1           :  1; /*!< Ofs=1, w=1 Software Interrupt on line 1 */
      __RWB uint32_t SWIER2           :  1; /*!< Ofs=2, w=1 Software Interrupt on line 2 */
      __RWB uint32_t SWIER3           :  1; /*!< Ofs=3, w=1 Software Interrupt on line 3 */
      __RWB uint32_t SWIER4           :  1; /*!< Ofs=4, w=1 Software Interrupt on line 4 */
      __RWB uint32_t SWIER5           :  1; /*!< Ofs=5, w=1 Software Interrupt on line 5 */
      __RWB uint32_t SWIER6           :  1; /*!< Ofs=6, w=1 Software Interrupt on line 6 */
      __RWB uint32_t SWIER7           :  1; /*!< Ofs=7, w=1 Software Interrupt on line 7 */
      __RWB uint32_t SWIER8           :  1; /*!< Ofs=8, w=1 Software Interrupt on line 8 */
      __RWB uint32_t SWIER9           :  1; /*!< Ofs=9, w=1 Software Interrupt on line 9 */
      __RWB uint32_t SWIER10          :  1; /*!< Ofs=10, w=1 Software Interrupt on line 10 */
      __RWB uint32_t SWIER11          :  1; /*!< Ofs=11, w=1 Software Interrupt on line 11 */
      __RWB uint32_t SWIER12          :  1; /*!< Ofs=12, w=1 Software Interrupt on line 12 */
      __RWB uint32_t SWIER13          :  1; /*!< Ofs=13, w=1 Software Interrupt on line 13 */
      __RWB uint32_t SWIER14          :  1; /*!< Ofs=14, w=1 Software Interrupt on line 14 */
      __RWB uint32_t SWIER15          :  1; /*!< Ofs=15, w=1 Software Interrupt on line 15 */
      __RWB uint32_t SWIER16          :  1; /*!< Ofs=16, w=1 Software Interrupt on line 16 */
      __RWB uint32_t SWIER17          :  1; /*!< Ofs=17, w=1 Software Interrupt on line 17 */
            uint32_t unused0          :  1;
      __RWB uint32_t SWIER19          :  1; /*!< Ofs=19, w=1 Software Interrupt on line 19 */
            uint32_t unused1          : 12;
    } B;
  };
#ifdef __cplusplus
  EXTI_SWIER_s(): R(0) {};
  void modify  (uint32_t (*f) (EXTI_SWIER_s & r)) volatile {
    EXTI_SWIER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (EXTI_SWIER_s & r)) volatile {
    EXTI_SWIER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct EXTI_PR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PR0              :  1; /*!< Ofs=0, w=1 Pending bit 0 */
      __RWB uint32_t PR1              :  1; /*!< Ofs=1, w=1 Pending bit 1 */
      __RWB uint32_t PR2              :  1; /*!< Ofs=2, w=1 Pending bit 2 */
      __RWB uint32_t PR3              :  1; /*!< Ofs=3, w=1 Pending bit 3 */
      __RWB uint32_t PR4              :  1; /*!< Ofs=4, w=1 Pending bit 4 */
      __RWB uint32_t PR5              :  1; /*!< Ofs=5, w=1 Pending bit 5 */
      __RWB uint32_t PR6              :  1; /*!< Ofs=6, w=1 Pending bit 6 */
      __RWB uint32_t PR7              :  1; /*!< Ofs=7, w=1 Pending bit 7 */
      __RWB uint32_t PR8              :  1; /*!< Ofs=8, w=1 Pending bit 8 */
      __RWB uint32_t PR9              :  1; /*!< Ofs=9, w=1 Pending bit 9 */
      __RWB uint32_t PR10             :  1; /*!< Ofs=10, w=1 Pending bit 10 */
      __RWB uint32_t PR11             :  1; /*!< Ofs=11, w=1 Pending bit 11 */
      __RWB uint32_t PR12             :  1; /*!< Ofs=12, w=1 Pending bit 12 */
      __RWB uint32_t PR13             :  1; /*!< Ofs=13, w=1 Pending bit 13 */
      __RWB uint32_t PR14             :  1; /*!< Ofs=14, w=1 Pending bit 14 */
      __RWB uint32_t PR15             :  1; /*!< Ofs=15, w=1 Pending bit 15 */
      __RWB uint32_t PR16             :  1; /*!< Ofs=16, w=1 Pending bit 16 */
      __RWB uint32_t PR17             :  1; /*!< Ofs=17, w=1 Pending bit 17 */
            uint32_t unused0          :  1;
      __RWB uint32_t PR19             :  1; /*!< Ofs=19, w=1 Pending bit 19 */
            uint32_t unused1          : 12;
    } B;
  };
#ifdef __cplusplus
  EXTI_PR_s(): R(0) {};
  void modify  (uint32_t (*f) (EXTI_PR_s & r)) volatile {
    EXTI_PR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (EXTI_PR_s & r)) volatile {
    EXTI_PR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_ISR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ADRDY            :  1; /*!< Ofs=0, w=1 ADC ready */
      __RWB uint32_t EOSMP            :  1; /*!< Ofs=1, w=1 End of sampling flag */
      __RWB uint32_t EOC              :  1; /*!< Ofs=2, w=1 End of conversion flag */
      __RWB uint32_t EOS              :  1; /*!< Ofs=3, w=1 End of sequence flag */
      __RWB uint32_t OVR              :  1; /*!< Ofs=4, w=1 ADC overrun */
            uint32_t unused0          :  2;
      __RWB uint32_t AWD              :  1; /*!< Ofs=7, w=1 Analog watchdog flag */
            uint32_t unused1          : 24;
    } B;
  };
#ifdef __cplusplus
  ADC_ISR_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_ISR_s & r)) volatile {
    ADC_ISR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_ISR_s & r)) volatile {
    ADC_ISR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_IER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ADRDYIE          :  1; /*!< Ofs=0, w=1 ADC ready interrupt enable */
      __RWB uint32_t EOSMPIE          :  1; /*!< Ofs=1, w=1 End of sampling flag interrupt enable */
      __RWB uint32_t EOCIE            :  1; /*!< Ofs=2, w=1 End of conversion interrupt enable */
      __RWB uint32_t EOSIE            :  1; /*!< Ofs=3, w=1 End of conversion sequence interrupt enable */
      __RWB uint32_t OVRIE            :  1; /*!< Ofs=4, w=1 Overrun interrupt enable */
            uint32_t unused0          :  2;
      __RWB uint32_t AWDIE            :  1; /*!< Ofs=7, w=1 Analog watchdog interrupt enable */
            uint32_t unused1          : 24;
    } B;
  };
#ifdef __cplusplus
  ADC_IER_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_IER_s & r)) volatile {
    ADC_IER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_IER_s & r)) volatile {
    ADC_IER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ADEN             :  1; /*!< Ofs=0, w=1 ADC enable command */
      __RWB uint32_t ADDIS            :  1; /*!< Ofs=1, w=1 ADC disable command */
      __RWB uint32_t ADSTART          :  1; /*!< Ofs=2, w=1 ADC start conversion command */
            uint32_t unused0          :  1;
      __RWB uint32_t ADSTP            :  1; /*!< Ofs=4, w=1 ADC stop conversion command */
            uint32_t unused1          : 26;
      __RWB uint32_t ADCAL            :  1; /*!< Ofs=31, w=1 ADC calibration */
    } B;
  };
#ifdef __cplusplus
  ADC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_CR_s & r)) volatile {
    ADC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_CR_s & r)) volatile {
    ADC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_CFGR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DMAEN            :  1; /*!< Ofs=0, w=1 Direct memory access enable */
      __RWB uint32_t DMACFG           :  1; /*!< Ofs=1, w=1 Direct memery access configuration */
      __RWB uint32_t SCANDIR          :  1; /*!< Ofs=2, w=1 Scan sequence direction */
      __RWB uint32_t RES              :  2; /*!< Ofs=3, w=2 Data resolution */
      __RWB uint32_t ALIGN            :  1; /*!< Ofs=5, w=1 Data alignment */
      __RWB uint32_t EXTSEL           :  3; /*!< Ofs=6, w=3 External trigger selection */
            uint32_t unused0          :  1;
      __RWB uint32_t EXTEN            :  2; /*!< Ofs=10, w=2 External trigger enable and polarity selection */
      __RWB uint32_t OVRMOD           :  1; /*!< Ofs=12, w=1 Overrun management mode */
      __RWB uint32_t CONT             :  1; /*!< Ofs=13, w=1 Single / continuous conversion mode */
      __RWB uint32_t AUTDLY           :  1; /*!< Ofs=14, w=1 Auto-delayed conversion mode */
      __RWB uint32_t AUTOFF           :  1; /*!< Ofs=15, w=1 Auto-off mode */
      __RWB uint32_t DISCEN           :  1; /*!< Ofs=16, w=1 Discontinuous mode */
            uint32_t unused1          :  5;
      __RWB uint32_t AWDSGL           :  1; /*!< Ofs=22, w=1 Enable the watchdog on a single channel or on all channels */
      __RWB uint32_t AWDEN            :  1; /*!< Ofs=23, w=1 Analog watchdog enable */
            uint32_t unused2          :  2;
      __RWB uint32_t AWDCH            :  5; /*!< Ofs=26, w=5 Analog watchdog channel selection */
            uint32_t unused3          :  1;
    } B;
  };
#ifdef __cplusplus
  ADC_CFGR1_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_CFGR1_s & r)) volatile {
    ADC_CFGR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_CFGR1_s & r)) volatile {
    ADC_CFGR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_CFGR2_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          : 30;
      __RWB uint32_t JITOFF_D2        :  1; /*!< Ofs=30, w=1 JITOFF_D2 */
      __RWB uint32_t JITOFF_D4        :  1; /*!< Ofs=31, w=1 JITOFF_D4 */
    } B;
  };
#ifdef __cplusplus
  ADC_CFGR2_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_CFGR2_s & r)) volatile {
    ADC_CFGR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_CFGR2_s & r)) volatile {
    ADC_CFGR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_SMPR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SMPR             :  3; /*!< Ofs=0, w=3 Sampling time selection */
            uint32_t unused0          : 29;
    } B;
  };
#ifdef __cplusplus
  ADC_SMPR_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_SMPR_s & r)) volatile {
    ADC_SMPR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_SMPR_s & r)) volatile {
    ADC_SMPR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_TR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LT               : 12; /*!< Ofs=0, w=12 Analog watchdog lower threshold */
            uint32_t unused0          :  4;
      __RWB uint32_t HT               : 12; /*!< Ofs=16, w=12 Analog watchdog higher threshold */
            uint32_t unused1          :  4;
    } B;
  };
#ifdef __cplusplus
  ADC_TR_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_TR_s & r)) volatile {
    ADC_TR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_TR_s & r)) volatile {
    ADC_TR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_CHSELR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CHSEL0           :  1; /*!< Ofs=0, w=1 Channel-x selection */
      __RWB uint32_t CHSEL1           :  1; /*!< Ofs=1, w=1 Channel-x selection */
      __RWB uint32_t CHSEL2           :  1; /*!< Ofs=2, w=1 Channel-x selection */
      __RWB uint32_t CHSEL3           :  1; /*!< Ofs=3, w=1 Channel-x selection */
      __RWB uint32_t CHSEL4           :  1; /*!< Ofs=4, w=1 Channel-x selection */
      __RWB uint32_t CHSEL5           :  1; /*!< Ofs=5, w=1 Channel-x selection */
      __RWB uint32_t CHSEL6           :  1; /*!< Ofs=6, w=1 Channel-x selection */
      __RWB uint32_t CHSEL7           :  1; /*!< Ofs=7, w=1 Channel-x selection */
      __RWB uint32_t CHSEL8           :  1; /*!< Ofs=8, w=1 Channel-x selection */
      __RWB uint32_t CHSEL9           :  1; /*!< Ofs=9, w=1 Channel-x selection */
      __RWB uint32_t CHSEL10          :  1; /*!< Ofs=10, w=1 Channel-x selection */
      __RWB uint32_t CHSEL11          :  1; /*!< Ofs=11, w=1 Channel-x selection */
      __RWB uint32_t CHSEL12          :  1; /*!< Ofs=12, w=1 Channel-x selection */
      __RWB uint32_t CHSEL13          :  1; /*!< Ofs=13, w=1 Channel-x selection */
      __RWB uint32_t CHSEL14          :  1; /*!< Ofs=14, w=1 Channel-x selection */
      __RWB uint32_t CHSEL15          :  1; /*!< Ofs=15, w=1 Channel-x selection */
      __RWB uint32_t CHSEL16          :  1; /*!< Ofs=16, w=1 Channel-x selection */
      __RWB uint32_t CHSEL17          :  1; /*!< Ofs=17, w=1 Channel-x selection */
      __RWB uint32_t CHSEL18          :  1; /*!< Ofs=18, w=1 Channel-x selection */
            uint32_t unused0          : 13;
    } B;
  };
#ifdef __cplusplus
  ADC_CHSELR_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_CHSELR_s & r)) volatile {
    ADC_CHSELR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_CHSELR_s & r)) volatile {
    ADC_CHSELR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct ADC_DR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DATA             : 16; /*!< Ofs=0, w=16 Converted data */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  ADC_DR_s(__RO ADC_DR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct ADC_CCR_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          : 22;
      __RWB uint32_t VREFEN           :  1; /*!< Ofs=22, w=1 Temperature sensor and VREFINT enable */
      __RWB uint32_t TSEN             :  1; /*!< Ofs=23, w=1 Temperature sensor enable */
      __RWB uint32_t VBATEN           :  1; /*!< Ofs=24, w=1 VBAT enable */
            uint32_t unused1          :  7;
    } B;
  };
#ifdef __cplusplus
  ADC_CCR_s(): R(0) {};
  void modify  (uint32_t (*f) (ADC_CCR_s & r)) volatile {
    ADC_CCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (ADC_CCR_s & r)) volatile {
    ADC_CCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_CR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CPHA             :  1; /*!< Ofs=0, w=1 Clock phase */
      __RWB uint32_t CPOL             :  1; /*!< Ofs=1, w=1 Clock polarity */
      __RWB uint32_t MSTR             :  1; /*!< Ofs=2, w=1 Master selection */
      __RWB uint32_t BR               :  3; /*!< Ofs=3, w=3 Baud rate control */
      __RWB uint32_t SPE              :  1; /*!< Ofs=6, w=1 SPI enable */
      __RWB uint32_t LSBFIRST         :  1; /*!< Ofs=7, w=1 Frame format */
      __RWB uint32_t SSI              :  1; /*!< Ofs=8, w=1 Internal slave select */
      __RWB uint32_t SSM              :  1; /*!< Ofs=9, w=1 Software slave management */
      __RWB uint32_t RXONLY           :  1; /*!< Ofs=10, w=1 Receive only */
      __RWB uint32_t DFF              :  1; /*!< Ofs=11, w=1 Data frame format */
      __RWB uint32_t CRCNEXT          :  1; /*!< Ofs=12, w=1 CRC transfer next */
      __RWB uint32_t CRCEN            :  1; /*!< Ofs=13, w=1 Hardware CRC calculation enable */
      __RWB uint32_t BIDIOE           :  1; /*!< Ofs=14, w=1 Output enable in bidirectional mode */
      __RWB uint32_t BIDIMODE         :  1; /*!< Ofs=15, w=1 Bidirectional data mode enable */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SPI_CR1_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_CR1_s & r)) volatile {
    SPI_CR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_CR1_s & r)) volatile {
    SPI_CR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_CR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RXDMAEN          :  1; /*!< Ofs=0, w=1 Rx buffer DMA enable */
      __RWB uint32_t TXDMAEN          :  1; /*!< Ofs=1, w=1 Tx buffer DMA enable */
      __RWB uint32_t SSOE             :  1; /*!< Ofs=2, w=1 SS output enable */
      __RWB uint32_t NSSP             :  1; /*!< Ofs=3, w=1 NSS pulse management */
      __RWB uint32_t FRF              :  1; /*!< Ofs=4, w=1 Frame format */
      __RWB uint32_t ERRIE            :  1; /*!< Ofs=5, w=1 Error interrupt enable */
      __RWB uint32_t RXNEIE           :  1; /*!< Ofs=6, w=1 RX buffer not empty interrupt enable */
      __RWB uint32_t TXEIE            :  1; /*!< Ofs=7, w=1 Tx buffer empty interrupt enable */
      __RWB uint32_t DS               :  4; /*!< Ofs=8, w=4 Data size */
      __RWB uint32_t FRXTH            :  1; /*!< Ofs=12, w=1 FIFO reception threshold */
      __RWB uint32_t LDMA_RX          :  1; /*!< Ofs=13, w=1 Last DMA transfer for reception */
      __RWB uint32_t LDMA_TX          :  1; /*!< Ofs=14, w=1 Last DMA transfer for transmission */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  SPI_CR2_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_CR2_s & r)) volatile {
    SPI_CR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_CR2_s & r)) volatile {
    SPI_CR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_SR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t RXNE             :  1; /*!< Ofs=0, w=1 Receive buffer not empty */
      __ROB uint32_t TXE              :  1; /*!< Ofs=1, w=1 Transmit buffer empty */
      __ROB uint32_t CHSIDE           :  1; /*!< Ofs=2, w=1 Channel side */
      __ROB uint32_t UDR              :  1; /*!< Ofs=3, w=1 Underrun flag */
      __RWB uint32_t CRCERR           :  1; /*!< Ofs=4, w=1 CRC error flag */
      __ROB uint32_t MODF             :  1; /*!< Ofs=5, w=1 Mode fault */
      __ROB uint32_t OVR              :  1; /*!< Ofs=6, w=1 Overrun flag */
      __ROB uint32_t BSY              :  1; /*!< Ofs=7, w=1 Busy flag */
      __ROB uint32_t TIFRFE           :  1; /*!< Ofs=8, w=1 TI frame format error */
      __ROB uint32_t FRLVL            :  2; /*!< Ofs=9, w=2 FIFO reception level */
      __ROB uint32_t FTLVL            :  2; /*!< Ofs=11, w=2 FIFO transmission level */
            uint32_t unused0          : 19;
    } B;
  };
#ifdef __cplusplus
  SPI_SR_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_SR_s & r)) volatile {
    SPI_SR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_SR_s & r)) volatile {
    SPI_SR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_DR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DR               : 16; /*!< Ofs=0, w=16 Data register */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SPI_DR_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_DR_s & r)) volatile {
    SPI_DR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_DR_s & r)) volatile {
    SPI_DR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_CRCPR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CRCPOLY          : 16; /*!< Ofs=0, w=16 CRC polynomial register */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SPI_CRCPR_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_CRCPR_s & r)) volatile {
    SPI_CRCPR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_CRCPR_s & r)) volatile {
    SPI_CRCPR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_RXCRCR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t RxCRC            : 16; /*!< Ofs=0, w=16 Rx CRC register */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SPI_RXCRCR_s(__RO SPI_RXCRCR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct SPI_TXCRCR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t TxCRC            : 16; /*!< Ofs=0, w=16 Tx CRC register */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  SPI_TXCRCR_s(__RO SPI_TXCRCR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct SPI_I2SCFGR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t CHLEN            :  1; /*!< Ofs=0, w=1 Channel length (number of bits per audio channel) */
      __RWB uint32_t DATLEN           :  2; /*!< Ofs=1, w=2 Data length to be transferred */
      __RWB uint32_t CKPOL            :  1; /*!< Ofs=3, w=1 Steady state clock polarity */
      __RWB uint32_t I2SSTD           :  2; /*!< Ofs=4, w=2 I2S standard selection */
            uint32_t unused0          :  1;
      __RWB uint32_t PCMSYNC          :  1; /*!< Ofs=7, w=1 PCM frame synchronization */
      __RWB uint32_t I2SCFG           :  2; /*!< Ofs=8, w=2 I2S configuration mode */
      __RWB uint32_t I2SE             :  1; /*!< Ofs=10, w=1 I2S Enable */
      __RWB uint32_t I2SMOD           :  1; /*!< Ofs=11, w=1 I2S mode selection */
            uint32_t unused1          : 20;
    } B;
  };
#ifdef __cplusplus
  SPI_I2SCFGR_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_I2SCFGR_s & r)) volatile {
    SPI_I2SCFGR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_I2SCFGR_s & r)) volatile {
    SPI_I2SCFGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct SPI_I2SPR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t I2SDIV           :  8; /*!< Ofs=0, w=8 I2S Linear prescaler */
      __RWB uint32_t ODD              :  1; /*!< Ofs=8, w=1 Odd factor for the prescaler */
      __RWB uint32_t MCKOE            :  1; /*!< Ofs=9, w=1 Master clock output enable */
            uint32_t unused0          : 22;
    } B;
  };
#ifdef __cplusplus
  SPI_I2SPR_s(): R(0) {};
  void modify  (uint32_t (*f) (SPI_I2SPR_s & r)) volatile {
    SPI_I2SPR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (SPI_I2SPR_s & r)) volatile {
    SPI_I2SPR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_CR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t UE               :  1; /*!< Ofs=0, w=1 USART enable */
      __RWB uint32_t UESM             :  1; /*!< Ofs=1, w=1 USART enable in Stop mode */
      __RWB uint32_t RE               :  1; /*!< Ofs=2, w=1 Receiver enable */
      __RWB uint32_t TE               :  1; /*!< Ofs=3, w=1 Transmitter enable */
      __RWB uint32_t IDLEIE           :  1; /*!< Ofs=4, w=1 IDLE interrupt enable */
      __RWB uint32_t RXNEIE           :  1; /*!< Ofs=5, w=1 RXNE interrupt enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=6, w=1 Transmission complete interrupt enable */
      __RWB uint32_t TXEIE            :  1; /*!< Ofs=7, w=1 interrupt enable */
      __RWB uint32_t PEIE             :  1; /*!< Ofs=8, w=1 PE interrupt enable */
      __RWB uint32_t PS               :  1; /*!< Ofs=9, w=1 Parity selection */
      __RWB uint32_t PCE              :  1; /*!< Ofs=10, w=1 Parity control enable */
      __RWB uint32_t WAKE             :  1; /*!< Ofs=11, w=1 Receiver wakeup method */
      __RWB uint32_t M                :  1; /*!< Ofs=12, w=1 Word length */
      __RWB uint32_t MME              :  1; /*!< Ofs=13, w=1 Mute mode enable */
      __RWB uint32_t CMIE             :  1; /*!< Ofs=14, w=1 Character match interrupt enable */
      __RWB uint32_t OVER8            :  1; /*!< Ofs=15, w=1 Oversampling mode */
      __RWB uint32_t DEDT             :  5; /*!< Ofs=16, w=5 Driver Enable deassertion time */
      __RWB uint32_t DEAT             :  5; /*!< Ofs=21, w=5 Driver Enable assertion time */
      __RWB uint32_t RTOIE            :  1; /*!< Ofs=26, w=1 Receiver timeout interrupt enable */
      __RWB uint32_t EOBIE            :  1; /*!< Ofs=27, w=1 End of Block interrupt enable */
      __RWB uint32_t M1               :  1; /*!< Ofs=28, w=1 Word length */
            uint32_t unused0          :  3;
    } B;
  };
#ifdef __cplusplus
  USART_CR1_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_CR1_s & r)) volatile {
    USART_CR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_CR1_s & r)) volatile {
    USART_CR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_CR2_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  4;
      __RWB uint32_t ADDM7            :  1; /*!< Ofs=4, w=1 7-bit Address Detection/4-bit Address Detection */
      __RWB uint32_t LBDL             :  1; /*!< Ofs=5, w=1 LIN break detection length */
      __RWB uint32_t LBDIE            :  1; /*!< Ofs=6, w=1 LIN break detection interrupt enable */
            uint32_t unused1          :  1;
      __RWB uint32_t LBCL             :  1; /*!< Ofs=8, w=1 Last bit clock pulse */
      __RWB uint32_t CPHA             :  1; /*!< Ofs=9, w=1 Clock phase */
      __RWB uint32_t CPOL             :  1; /*!< Ofs=10, w=1 Clock polarity */
      __RWB uint32_t CLKEN            :  1; /*!< Ofs=11, w=1 Clock enable */
      __RWB uint32_t STOP             :  2; /*!< Ofs=12, w=2 STOP bits */
      __RWB uint32_t LINEN            :  1; /*!< Ofs=14, w=1 LIN mode enable */
      __RWB uint32_t SWAP             :  1; /*!< Ofs=15, w=1 Swap TX/RX pins */
      __RWB uint32_t RXINV            :  1; /*!< Ofs=16, w=1 RX pin active level inversion */
      __RWB uint32_t TXINV            :  1; /*!< Ofs=17, w=1 TX pin active level inversion */
      __RWB uint32_t DATAINV          :  1; /*!< Ofs=18, w=1 Binary data inversion */
      __RWB uint32_t MSBFIRST         :  1; /*!< Ofs=19, w=1 Most significant bit first */
      __RWB uint32_t ABREN            :  1; /*!< Ofs=20, w=1 Auto baud rate enable */
      __RWB uint32_t ABRMOD           :  2; /*!< Ofs=21, w=2 Auto baud rate mode */
      __RWB uint32_t RTOEN            :  1; /*!< Ofs=23, w=1 Receiver timeout enable */
      __RWB uint32_t ADD0             :  4; /*!< Ofs=24, w=4 Address of the USART node */
      __RWB uint32_t ADD4             :  4; /*!< Ofs=28, w=4 Address of the USART node */
    } B;
  };
#ifdef __cplusplus
  USART_CR2_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_CR2_s & r)) volatile {
    USART_CR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_CR2_s & r)) volatile {
    USART_CR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_CR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EIE              :  1; /*!< Ofs=0, w=1 Error interrupt enable */
      __RWB uint32_t IREN             :  1; /*!< Ofs=1, w=1 IrDA mode enable */
      __RWB uint32_t IRLP             :  1; /*!< Ofs=2, w=1 IrDA low-power */
      __RWB uint32_t HDSEL            :  1; /*!< Ofs=3, w=1 Half-duplex selection */
      __RWB uint32_t NACK             :  1; /*!< Ofs=4, w=1 Smartcard NACK enable */
      __RWB uint32_t SCEN             :  1; /*!< Ofs=5, w=1 Smartcard mode enable */
      __RWB uint32_t DMAR             :  1; /*!< Ofs=6, w=1 DMA enable receiver */
      __RWB uint32_t DMAT             :  1; /*!< Ofs=7, w=1 DMA enable transmitter */
      __RWB uint32_t RTSE             :  1; /*!< Ofs=8, w=1 RTS enable */
      __RWB uint32_t CTSE             :  1; /*!< Ofs=9, w=1 CTS enable */
      __RWB uint32_t CTSIE            :  1; /*!< Ofs=10, w=1 CTS interrupt enable */
      __RWB uint32_t ONEBIT           :  1; /*!< Ofs=11, w=1 One sample bit method enable */
      __RWB uint32_t OVRDIS           :  1; /*!< Ofs=12, w=1 Overrun Disable */
      __RWB uint32_t DDRE             :  1; /*!< Ofs=13, w=1 DMA Disable on Reception Error */
      __RWB uint32_t DEM              :  1; /*!< Ofs=14, w=1 Driver enable mode */
      __RWB uint32_t DEP              :  1; /*!< Ofs=15, w=1 Driver enable polarity selection */
            uint32_t unused0          :  1;
      __RWB uint32_t SCARCNT          :  3; /*!< Ofs=17, w=3 Smartcard auto-retry count */
      __RWB uint32_t WUS              :  2; /*!< Ofs=20, w=2 Wakeup from Stop mode interrupt flag selection */
      __RWB uint32_t WUFIE            :  1; /*!< Ofs=22, w=1 Wakeup from Stop mode interrupt enable */
            uint32_t unused1          :  9;
    } B;
  };
#ifdef __cplusplus
  USART_CR3_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_CR3_s & r)) volatile {
    USART_CR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_CR3_s & r)) volatile {
    USART_CR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_BRR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DIV_Fraction     :  4; /*!< Ofs=0, w=4 fraction of USARTDIV */
      __RWB uint32_t DIV_Mantissa     : 12; /*!< Ofs=4, w=12 mantissa of USARTDIV */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USART_BRR_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_BRR_s & r)) volatile {
    USART_BRR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_BRR_s & r)) volatile {
    USART_BRR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_GTPR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PSC              :  8; /*!< Ofs=0, w=8 Prescaler value */
      __RWB uint32_t GT               :  8; /*!< Ofs=8, w=8 Guard time value */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  USART_GTPR_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_GTPR_s & r)) volatile {
    USART_GTPR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_GTPR_s & r)) volatile {
    USART_GTPR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_RTOR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RTO              : 24; /*!< Ofs=0, w=24 Receiver timeout value */
      __RWB uint32_t BLEN             :  8; /*!< Ofs=24, w=8 Block Length */
    } B;
  };
#ifdef __cplusplus
  USART_RTOR_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_RTOR_s & r)) volatile {
    USART_RTOR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_RTOR_s & r)) volatile {
    USART_RTOR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_RQR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ABRRQ            :  1; /*!< Ofs=0, w=1 Auto baud rate request */
      __RWB uint32_t SBKRQ            :  1; /*!< Ofs=1, w=1 Send break request */
      __RWB uint32_t MMRQ             :  1; /*!< Ofs=2, w=1 Mute mode request */
      __RWB uint32_t RXFRQ            :  1; /*!< Ofs=3, w=1 Receive data flush request */
      __RWB uint32_t TXFRQ            :  1; /*!< Ofs=4, w=1 Transmit data flush request */
            uint32_t unused0          : 27;
    } B;
  };
#ifdef __cplusplus
  USART_RQR_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_RQR_s & r)) volatile {
    USART_RQR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_RQR_s & r)) volatile {
    USART_RQR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_ISR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t PE               :  1; /*!< Ofs=0, w=1 Parity error */
      __ROB uint32_t FE               :  1; /*!< Ofs=1, w=1 Framing error */
      __ROB uint32_t NF               :  1; /*!< Ofs=2, w=1 Noise detected flag */
      __ROB uint32_t ORE              :  1; /*!< Ofs=3, w=1 Overrun error */
      __ROB uint32_t IDLE             :  1; /*!< Ofs=4, w=1 Idle line detected */
      __ROB uint32_t RXNE             :  1; /*!< Ofs=5, w=1 Read data register not empty */
      __ROB uint32_t TC               :  1; /*!< Ofs=6, w=1 Transmission complete */
      __ROB uint32_t TXE              :  1; /*!< Ofs=7, w=1 Transmit data register empty */
      __ROB uint32_t LBDF             :  1; /*!< Ofs=8, w=1 LIN break detection flag */
      __ROB uint32_t CTSIF            :  1; /*!< Ofs=9, w=1 CTS interrupt flag */
      __ROB uint32_t CTS              :  1; /*!< Ofs=10, w=1 CTS flag */
      __ROB uint32_t RTOF             :  1; /*!< Ofs=11, w=1 Receiver timeout */
      __ROB uint32_t EOBF             :  1; /*!< Ofs=12, w=1 End of block flag */
            uint32_t unused0          :  1;
      __ROB uint32_t ABRE             :  1; /*!< Ofs=14, w=1 Auto baud rate error */
      __ROB uint32_t ABRF             :  1; /*!< Ofs=15, w=1 Auto baud rate flag */
      __ROB uint32_t BUSY             :  1; /*!< Ofs=16, w=1 Busy flag */
      __ROB uint32_t CMF              :  1; /*!< Ofs=17, w=1 character match flag */
      __ROB uint32_t SBKF             :  1; /*!< Ofs=18, w=1 Send break flag */
      __ROB uint32_t RWU              :  1; /*!< Ofs=19, w=1 Receiver wakeup from Mute mode */
      __ROB uint32_t WUF              :  1; /*!< Ofs=20, w=1 Wakeup from Stop mode flag */
      __ROB uint32_t TEACK            :  1; /*!< Ofs=21, w=1 Transmit enable acknowledge flag */
      __ROB uint32_t REACK            :  1; /*!< Ofs=22, w=1 Receive enable acknowledge flag */
            uint32_t unused1          :  9;
    } B;
  };
#ifdef __cplusplus
  USART_ISR_s(__RO USART_ISR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct USART_ICR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PECF             :  1; /*!< Ofs=0, w=1 Parity error clear flag */
      __RWB uint32_t FECF             :  1; /*!< Ofs=1, w=1 Framing error clear flag */
      __RWB uint32_t NCF              :  1; /*!< Ofs=2, w=1 Noise detected clear flag */
      __RWB uint32_t ORECF            :  1; /*!< Ofs=3, w=1 Overrun error clear flag */
      __RWB uint32_t IDLECF           :  1; /*!< Ofs=4, w=1 Idle line detected clear flag */
            uint32_t unused0          :  1;
      __RWB uint32_t TCCF             :  1; /*!< Ofs=6, w=1 Transmission complete clear flag */
            uint32_t unused1          :  1;
      __RWB uint32_t LBDCF            :  1; /*!< Ofs=8, w=1 LIN break detection clear flag */
      __RWB uint32_t CTSCF            :  1; /*!< Ofs=9, w=1 CTS clear flag */
            uint32_t unused2          :  1;
      __RWB uint32_t RTOCF            :  1; /*!< Ofs=11, w=1 Receiver timeout clear flag */
      __RWB uint32_t EOBCF            :  1; /*!< Ofs=12, w=1 End of timeout clear flag */
            uint32_t unused3          :  4;
      __RWB uint32_t CMCF             :  1; /*!< Ofs=17, w=1 Character match clear flag */
            uint32_t unused4          :  2;
      __RWB uint32_t WUCF             :  1; /*!< Ofs=20, w=1 Wakeup from Stop mode clear flag */
            uint32_t unused5          : 11;
    } B;
  };
#ifdef __cplusplus
  USART_ICR_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_ICR_s & r)) volatile {
    USART_ICR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_ICR_s & r)) volatile {
    USART_ICR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct USART_RDR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t RDR              :  9; /*!< Ofs=0, w=9 Receive data value */
            uint32_t unused0          : 23;
    } B;
  };
#ifdef __cplusplus
  USART_RDR_s(__RO USART_RDR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct USART_TDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TDR              :  9; /*!< Ofs=0, w=9 Transmit data value */
            uint32_t unused0          : 23;
    } B;
  };
#ifdef __cplusplus
  USART_TDR_s(): R(0) {};
  void modify  (uint32_t (*f) (USART_TDR_s & r)) volatile {
    USART_TDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (USART_TDR_s & r)) volatile {
    USART_TDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DBGMCU_IDCODE_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t DEV_ID           : 12; /*!< Ofs=0, w=12 Device Identifier */
      __ROB uint32_t DIV_ID           :  4; /*!< Ofs=12, w=4 Division Identifier */
      __ROB uint32_t REV_ID           : 16; /*!< Ofs=16, w=16 Revision Identifier */
    } B;
  };
#ifdef __cplusplus
  DBGMCU_IDCODE_s(__RO DBGMCU_IDCODE_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct DBGMCU_CR_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          :  1;
      __RWB uint32_t DBG_STOP         :  1; /*!< Ofs=1, w=1 Debug Stop Mode */
      __RWB uint32_t DBG_STANDBY      :  1; /*!< Ofs=2, w=1 Debug Standby Mode */
            uint32_t unused1          : 29;
    } B;
  };
#ifdef __cplusplus
  DBGMCU_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (DBGMCU_CR_s & r)) volatile {
    DBGMCU_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DBGMCU_CR_s & r)) volatile {
    DBGMCU_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DBGMCU_APB1_FZ_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DBG_TIM2_STOP    :  1; /*!< Ofs=0, w=1 TIM2 counter stopped when core is halted */
      __RWB uint32_t DBG_TIM3_STOP    :  1; /*!< Ofs=1, w=1 TIM3 counter stopped when core is halted */
            uint32_t unused0          :  2;
      __RWB uint32_t TIM3_counter_stopped_when_core_is_halted :  1; /*!< Ofs=4, w=1 TIM6 counter stopped when core is halted */
      __RWB uint32_t DBG_TIM7_STOP    :  1; /*!< Ofs=5, w=1 TIM7 counter stopped when core is halted */
            uint32_t unused1          :  2;
      __RWB uint32_t DBG_TIM14_STOP   :  1; /*!< Ofs=8, w=1 TIM14 counter stopped when core is halted */
            uint32_t unused2          :  1;
      __RWB uint32_t DBG_RTC_STOP     :  1; /*!< Ofs=10, w=1 Debug RTC stopped when core is halted */
      __RWB uint32_t DBG_WWDG_STOP    :  1; /*!< Ofs=11, w=1 Debug window watchdog stopped when core is halted */
      __RWB uint32_t DBG_IWDG_STOP    :  1; /*!< Ofs=12, w=1 Debug independent watchdog stopped when core is halted */
            uint32_t unused3          :  8;
      __RWB uint32_t DBG_I2C1_SMBUS_TIMEOUT :  1; /*!< Ofs=21, w=1 SMBUS timeout mode stopped when core is halted */
            uint32_t unused4          :  3;
      __RWB uint32_t DBG_CAN_STOP     :  1; /*!< Ofs=25, w=1 CAN stopped when core is halted */
            uint32_t unused5          :  6;
    } B;
  };
#ifdef __cplusplus
  DBGMCU_APB1_FZ_s(): R(0) {};
  void modify  (uint32_t (*f) (DBGMCU_APB1_FZ_s & r)) volatile {
    DBGMCU_APB1_FZ_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DBGMCU_APB1_FZ_s & r)) volatile {
    DBGMCU_APB1_FZ_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DBGMCU_APB2_FZ_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          : 11;
      __RWB uint32_t DBG_TIM1_STOP    :  1; /*!< Ofs=11, w=1 TIM1 counter stopped when core is halted */
            uint32_t unused1          :  4;
      __RWB uint32_t DBG_TIM15_STOP   :  1; /*!< Ofs=16, w=1 TIM15 counter stopped when core is halted */
      __RWB uint32_t DBG_TIM16_STOP   :  1; /*!< Ofs=17, w=1 TIM16 counter stopped when core is halted */
      __RWB uint32_t DBG_TIM17_STOP   :  1; /*!< Ofs=18, w=1 TIM17 counter stopped when core is halted */
            uint32_t unused2          : 13;
    } B;
  };
#ifdef __cplusplus
  DBGMCU_APB2_FZ_s(): R(0) {};
  void modify  (uint32_t (*f) (DBGMCU_APB2_FZ_s & r)) volatile {
    DBGMCU_APB2_FZ_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DBGMCU_APB2_FZ_s & r)) volatile {
    DBGMCU_APB2_FZ_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_ISR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t GIF1             :  1; /*!< Ofs=0, w=1 Channel 1 Global interrupt flag */
      __ROB uint32_t TCIF1            :  1; /*!< Ofs=1, w=1 Channel 1 Transfer Complete flag */
      __ROB uint32_t HTIF1            :  1; /*!< Ofs=2, w=1 Channel 1 Half Transfer Complete flag */
      __ROB uint32_t TEIF1            :  1; /*!< Ofs=3, w=1 Channel 1 Transfer Error flag */
      __ROB uint32_t GIF2             :  1; /*!< Ofs=4, w=1 Channel 2 Global interrupt flag */
      __ROB uint32_t TCIF2            :  1; /*!< Ofs=5, w=1 Channel 2 Transfer Complete flag */
      __ROB uint32_t HTIF2            :  1; /*!< Ofs=6, w=1 Channel 2 Half Transfer Complete flag */
      __ROB uint32_t TEIF2            :  1; /*!< Ofs=7, w=1 Channel 2 Transfer Error flag */
      __ROB uint32_t GIF3             :  1; /*!< Ofs=8, w=1 Channel 3 Global interrupt flag */
      __ROB uint32_t TCIF3            :  1; /*!< Ofs=9, w=1 Channel 3 Transfer Complete flag */
      __ROB uint32_t HTIF3            :  1; /*!< Ofs=10, w=1 Channel 3 Half Transfer Complete flag */
      __ROB uint32_t TEIF3            :  1; /*!< Ofs=11, w=1 Channel 3 Transfer Error flag */
      __ROB uint32_t GIF4             :  1; /*!< Ofs=12, w=1 Channel 4 Global interrupt flag */
      __ROB uint32_t TCIF4            :  1; /*!< Ofs=13, w=1 Channel 4 Transfer Complete flag */
      __ROB uint32_t HTIF4            :  1; /*!< Ofs=14, w=1 Channel 4 Half Transfer Complete flag */
      __ROB uint32_t TEIF4            :  1; /*!< Ofs=15, w=1 Channel 4 Transfer Error flag */
      __ROB uint32_t GIF5             :  1; /*!< Ofs=16, w=1 Channel 5 Global interrupt flag */
      __ROB uint32_t TCIF5            :  1; /*!< Ofs=17, w=1 Channel 5 Transfer Complete flag */
      __ROB uint32_t HTIF5            :  1; /*!< Ofs=18, w=1 Channel 5 Half Transfer Complete flag */
      __ROB uint32_t TEIF5            :  1; /*!< Ofs=19, w=1 Channel 5 Transfer Error flag */
      __ROB uint32_t GIF6             :  1; /*!< Ofs=20, w=1 Channel 6 Global interrupt flag */
      __ROB uint32_t TCIF6            :  1; /*!< Ofs=21, w=1 Channel 6 Transfer Complete flag */
      __ROB uint32_t HTIF6            :  1; /*!< Ofs=22, w=1 Channel 6 Half Transfer Complete flag */
      __ROB uint32_t TEIF6            :  1; /*!< Ofs=23, w=1 Channel 6 Transfer Error flag */
      __ROB uint32_t GIF7             :  1; /*!< Ofs=24, w=1 Channel 7 Global interrupt flag */
      __ROB uint32_t TCIF7            :  1; /*!< Ofs=25, w=1 Channel 7 Transfer Complete flag */
      __ROB uint32_t HTIF7            :  1; /*!< Ofs=26, w=1 Channel 7 Half Transfer Complete flag */
      __ROB uint32_t TEIF7            :  1; /*!< Ofs=27, w=1 Channel 7 Transfer Error flag */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  DMA_ISR_s(__RO DMA_ISR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct DMA_IFCR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t CGIF1            :  1; /*!< Ofs=0, w=1 Channel 1 Global interrupt clear */
      __WOB uint32_t CTCIF1           :  1; /*!< Ofs=1, w=1 Channel 1 Transfer Complete clear */
      __WOB uint32_t CHTIF1           :  1; /*!< Ofs=2, w=1 Channel 1 Half Transfer clear */
      __WOB uint32_t CTEIF1           :  1; /*!< Ofs=3, w=1 Channel 1 Transfer Error clear */
      __WOB uint32_t CGIF2            :  1; /*!< Ofs=4, w=1 Channel 2 Global interrupt clear */
      __WOB uint32_t CTCIF2           :  1; /*!< Ofs=5, w=1 Channel 2 Transfer Complete clear */
      __WOB uint32_t CHTIF2           :  1; /*!< Ofs=6, w=1 Channel 2 Half Transfer clear */
      __WOB uint32_t CTEIF2           :  1; /*!< Ofs=7, w=1 Channel 2 Transfer Error clear */
      __WOB uint32_t CGIF3            :  1; /*!< Ofs=8, w=1 Channel 3 Global interrupt clear */
      __WOB uint32_t CTCIF3           :  1; /*!< Ofs=9, w=1 Channel 3 Transfer Complete clear */
      __WOB uint32_t CHTIF3           :  1; /*!< Ofs=10, w=1 Channel 3 Half Transfer clear */
      __WOB uint32_t CTEIF3           :  1; /*!< Ofs=11, w=1 Channel 3 Transfer Error clear */
      __WOB uint32_t CGIF4            :  1; /*!< Ofs=12, w=1 Channel 4 Global interrupt clear */
      __WOB uint32_t CTCIF4           :  1; /*!< Ofs=13, w=1 Channel 4 Transfer Complete clear */
      __WOB uint32_t CHTIF4           :  1; /*!< Ofs=14, w=1 Channel 4 Half Transfer clear */
      __WOB uint32_t CTEIF4           :  1; /*!< Ofs=15, w=1 Channel 4 Transfer Error clear */
      __WOB uint32_t CGIF5            :  1; /*!< Ofs=16, w=1 Channel 5 Global interrupt clear */
      __WOB uint32_t CTCIF5           :  1; /*!< Ofs=17, w=1 Channel 5 Transfer Complete clear */
      __WOB uint32_t CHTIF5           :  1; /*!< Ofs=18, w=1 Channel 5 Half Transfer clear */
      __WOB uint32_t CTEIF5           :  1; /*!< Ofs=19, w=1 Channel 5 Transfer Error clear */
      __WOB uint32_t CGIF6            :  1; /*!< Ofs=20, w=1 Channel 6 Global interrupt clear */
      __WOB uint32_t CTCIF6           :  1; /*!< Ofs=21, w=1 Channel 6 Transfer Complete clear */
      __WOB uint32_t CHTIF6           :  1; /*!< Ofs=22, w=1 Channel 6 Half Transfer clear */
      __WOB uint32_t CTEIF6           :  1; /*!< Ofs=23, w=1 Channel 6 Transfer Error clear */
      __WOB uint32_t CGIF7            :  1; /*!< Ofs=24, w=1 Channel 7 Global interrupt clear */
      __WOB uint32_t CTCIF7           :  1; /*!< Ofs=25, w=1 Channel 7 Transfer Complete clear */
      __WOB uint32_t CHTIF7           :  1; /*!< Ofs=26, w=1 Channel 7 Half Transfer clear */
      __WOB uint32_t CTEIF7           :  1; /*!< Ofs=27, w=1 Channel 7 Transfer Error clear */
            uint32_t unused0          :  4;
    } B;
  };
#ifdef __cplusplus
  DMA_IFCR_s(): R(0) {};
  void setbits (uint32_t (*f) (DMA_IFCR_s & r)) volatile {
    DMA_IFCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR1_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR1_s & r)) volatile {
    DMA_CCR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR1_s & r)) volatile {
    DMA_CCR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR1_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR1_s & r)) volatile {
    DMA_CNDTR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR1_s & r)) volatile {
    DMA_CNDTR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR1_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR1_s & r)) volatile {
    DMA_CPAR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR1_s & r)) volatile {
    DMA_CPAR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR1_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR1_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR1_s & r)) volatile {
    DMA_CMAR1_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR1_s & r)) volatile {
    DMA_CMAR1_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR2_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR2_s & r)) volatile {
    DMA_CCR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR2_s & r)) volatile {
    DMA_CCR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR2_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR2_s & r)) volatile {
    DMA_CNDTR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR2_s & r)) volatile {
    DMA_CNDTR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR2_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR2_s & r)) volatile {
    DMA_CPAR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR2_s & r)) volatile {
    DMA_CPAR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR2_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR2_s & r)) volatile {
    DMA_CMAR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR2_s & r)) volatile {
    DMA_CMAR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR3_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR3_s & r)) volatile {
    DMA_CCR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR3_s & r)) volatile {
    DMA_CCR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR3_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR3_s & r)) volatile {
    DMA_CNDTR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR3_s & r)) volatile {
    DMA_CNDTR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR3_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR3_s & r)) volatile {
    DMA_CPAR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR3_s & r)) volatile {
    DMA_CPAR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR3_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR3_s & r)) volatile {
    DMA_CMAR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR3_s & r)) volatile {
    DMA_CMAR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR4_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR4_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR4_s & r)) volatile {
    DMA_CCR4_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR4_s & r)) volatile {
    DMA_CCR4_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR4_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR4_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR4_s & r)) volatile {
    DMA_CNDTR4_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR4_s & r)) volatile {
    DMA_CNDTR4_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR4_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR4_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR4_s & r)) volatile {
    DMA_CPAR4_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR4_s & r)) volatile {
    DMA_CPAR4_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR4_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR4_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR4_s & r)) volatile {
    DMA_CMAR4_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR4_s & r)) volatile {
    DMA_CMAR4_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR5_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR5_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR5_s & r)) volatile {
    DMA_CCR5_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR5_s & r)) volatile {
    DMA_CCR5_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR5_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR5_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR5_s & r)) volatile {
    DMA_CNDTR5_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR5_s & r)) volatile {
    DMA_CNDTR5_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR5_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR5_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR5_s & r)) volatile {
    DMA_CPAR5_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR5_s & r)) volatile {
    DMA_CPAR5_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR5_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR5_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR5_s & r)) volatile {
    DMA_CMAR5_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR5_s & r)) volatile {
    DMA_CMAR5_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR6_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR6_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR6_s & r)) volatile {
    DMA_CCR6_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR6_s & r)) volatile {
    DMA_CCR6_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR6_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR6_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR6_s & r)) volatile {
    DMA_CNDTR6_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR6_s & r)) volatile {
    DMA_CNDTR6_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR6_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR6_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR6_s & r)) volatile {
    DMA_CPAR6_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR6_s & r)) volatile {
    DMA_CPAR6_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR6_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR6_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR6_s & r)) volatile {
    DMA_CMAR6_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR6_s & r)) volatile {
    DMA_CMAR6_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CCR7_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EN               :  1; /*!< Ofs=0, w=1 Channel enable */
      __RWB uint32_t TCIE             :  1; /*!< Ofs=1, w=1 Transfer complete interrupt enable */
      __RWB uint32_t HTIE             :  1; /*!< Ofs=2, w=1 Half Transfer interrupt enable */
      __RWB uint32_t TEIE             :  1; /*!< Ofs=3, w=1 Transfer error interrupt enable */
      __RWB uint32_t DIR              :  1; /*!< Ofs=4, w=1 Data transfer direction */
      __RWB uint32_t CIRC             :  1; /*!< Ofs=5, w=1 Circular mode */
      __RWB uint32_t PINC             :  1; /*!< Ofs=6, w=1 Peripheral increment mode */
      __RWB uint32_t MINC             :  1; /*!< Ofs=7, w=1 Memory increment mode */
      __RWB uint32_t PSIZE            :  2; /*!< Ofs=8, w=2 Peripheral size */
      __RWB uint32_t MSIZE            :  2; /*!< Ofs=10, w=2 Memory size */
      __RWB uint32_t PL               :  2; /*!< Ofs=12, w=2 Channel Priority level */
      __RWB uint32_t MEM2MEM          :  1; /*!< Ofs=14, w=1 Memory to memory mode */
            uint32_t unused0          : 17;
    } B;
  };
#ifdef __cplusplus
  DMA_CCR7_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CCR7_s & r)) volatile {
    DMA_CCR7_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CCR7_s & r)) volatile {
    DMA_CCR7_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CNDTR7_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t NDT              : 16; /*!< Ofs=0, w=16 Number of data to transfer */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  DMA_CNDTR7_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CNDTR7_s & r)) volatile {
    DMA_CNDTR7_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CNDTR7_s & r)) volatile {
    DMA_CNDTR7_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CPAR7_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PA               : 32; /*!< Ofs=0, w=32 Peripheral address */
    } B;
  };
#ifdef __cplusplus
  DMA_CPAR7_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CPAR7_s & r)) volatile {
    DMA_CPAR7_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CPAR7_s & r)) volatile {
    DMA_CPAR7_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct DMA_CMAR7_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MA               : 32; /*!< Ofs=0, w=32 Memory address */
    } B;
  };
#ifdef __cplusplus
  DMA_CMAR7_s(): R(0) {};
  void modify  (uint32_t (*f) (DMA_CMAR7_s & r)) volatile {
    DMA_CMAR7_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (DMA_CMAR7_s & r)) volatile {
    DMA_CMAR7_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t HSION            :  1; /*!< Ofs=0, w=1 Internal High Speed clock enable */
      __ROB uint32_t HSIRDY           :  1; /*!< Ofs=1, w=1 Internal High Speed clock ready flag */
            uint32_t unused0          :  1;
      __RWB uint32_t HSITRIM          :  5; /*!< Ofs=3, w=5 Internal High Speed clock trimming */
      __ROB uint32_t HSICAL           :  8; /*!< Ofs=8, w=8 Internal High Speed clock Calibration */
      __RWB uint32_t HSEON            :  1; /*!< Ofs=16, w=1 External High Speed clock enable */
      __ROB uint32_t HSERDY           :  1; /*!< Ofs=17, w=1 External High Speed clock ready flag */
      __RWB uint32_t HSEBYP           :  1; /*!< Ofs=18, w=1 External High Speed clock Bypass */
      __RWB uint32_t CSSON            :  1; /*!< Ofs=19, w=1 Clock Security System enable */
            uint32_t unused1          :  4;
      __RWB uint32_t PLLON            :  1; /*!< Ofs=24, w=1 PLL enable */
      __ROB uint32_t PLLRDY           :  1; /*!< Ofs=25, w=1 PLL clock ready flag */
            uint32_t unused2          :  6;
    } B;
  };
#ifdef __cplusplus
  RCC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CR_s & r)) volatile {
    RCC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CR_s & r)) volatile {
    RCC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CFGR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SW               :  2; /*!< Ofs=0, w=2 System clock Switch */
      __ROB uint32_t SWS              :  2; /*!< Ofs=2, w=2 System Clock Switch Status */
      __RWB uint32_t HPRE             :  4; /*!< Ofs=4, w=4 AHB prescaler */
      __RWB uint32_t PPRE             :  3; /*!< Ofs=8, w=3 APB Low speed prescaler (APB1) */
            uint32_t unused0          :  3;
      __RWB uint32_t ADCPRE           :  1; /*!< Ofs=14, w=1 ADC prescaler */
      __RWB uint32_t PLLSRC           :  2; /*!< Ofs=15, w=2 PLL input clock source */
      __RWB uint32_t PLLXTPRE         :  1; /*!< Ofs=17, w=1 HSE divider for PLL entry */
      __RWB uint32_t PLLMUL           :  4; /*!< Ofs=18, w=4 PLL Multiplication Factor */
            uint32_t unused1          :  2;
      __RWB uint32_t MCO              :  3; /*!< Ofs=24, w=3 Microcontroller clock output */
            uint32_t unused2          :  1;
      __RWB uint32_t MCOPRE           :  3; /*!< Ofs=28, w=3 Microcontroller Clock Output Prescaler */
      __RWB uint32_t PLLNODIV         :  1; /*!< Ofs=31, w=1 PLL clock not divided for MCO */
    } B;
  };
#ifdef __cplusplus
  RCC_CFGR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CFGR_s & r)) volatile {
    RCC_CFGR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CFGR_s & r)) volatile {
    RCC_CFGR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CIR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t LSIRDYF          :  1; /*!< Ofs=0, w=1 LSI Ready Interrupt flag */
      __ROB uint32_t LSERDYF          :  1; /*!< Ofs=1, w=1 LSE Ready Interrupt flag */
      __ROB uint32_t HSIRDYF          :  1; /*!< Ofs=2, w=1 HSI Ready Interrupt flag */
      __ROB uint32_t HSERDYF          :  1; /*!< Ofs=3, w=1 HSE Ready Interrupt flag */
      __ROB uint32_t PLLRDYF          :  1; /*!< Ofs=4, w=1 PLL Ready Interrupt flag */
      __ROB uint32_t HSI14RDYF        :  1; /*!< Ofs=5, w=1 HSI14 ready interrupt flag */
      __ROB uint32_t HSI48RDYF        :  1; /*!< Ofs=6, w=1 HSI48 ready interrupt flag */
      __ROB uint32_t CSSF             :  1; /*!< Ofs=7, w=1 Clock Security System Interrupt flag */
      __RWB uint32_t LSIRDYIE         :  1; /*!< Ofs=8, w=1 LSI Ready Interrupt Enable */
      __RWB uint32_t LSERDYIE         :  1; /*!< Ofs=9, w=1 LSE Ready Interrupt Enable */
      __RWB uint32_t HSIRDYIE         :  1; /*!< Ofs=10, w=1 HSI Ready Interrupt Enable */
      __RWB uint32_t HSERDYIE         :  1; /*!< Ofs=11, w=1 HSE Ready Interrupt Enable */
      __RWB uint32_t PLLRDYIE         :  1; /*!< Ofs=12, w=1 PLL Ready Interrupt Enable */
      __RWB uint32_t HSI14RDYE        :  1; /*!< Ofs=13, w=1 HSI14 ready interrupt enable */
      __RWB uint32_t HSI48RDYIE       :  1; /*!< Ofs=14, w=1 HSI48 ready interrupt enable */
            uint32_t unused0          :  1;
      __WOB uint32_t LSIRDYC          :  1; /*!< Ofs=16, w=1 LSI Ready Interrupt Clear */
      __WOB uint32_t LSERDYC          :  1; /*!< Ofs=17, w=1 LSE Ready Interrupt Clear */
      __WOB uint32_t HSIRDYC          :  1; /*!< Ofs=18, w=1 HSI Ready Interrupt Clear */
      __WOB uint32_t HSERDYC          :  1; /*!< Ofs=19, w=1 HSE Ready Interrupt Clear */
      __WOB uint32_t PLLRDYC          :  1; /*!< Ofs=20, w=1 PLL Ready Interrupt Clear */
      __WOB uint32_t HSI14RDYC        :  1; /*!< Ofs=21, w=1 HSI 14 MHz Ready Interrupt Clear */
      __WOB uint32_t HSI48RDYC        :  1; /*!< Ofs=22, w=1 HSI48 Ready Interrupt Clear */
      __WOB uint32_t CSSC             :  1; /*!< Ofs=23, w=1 Clock security system interrupt clear */
            uint32_t unused1          :  8;
    } B;
  };
#ifdef __cplusplus
  RCC_CIR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CIR_s & r)) volatile {
    RCC_CIR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CIR_s & r)) volatile {
    RCC_CIR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_APB2RSTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SYSCFGRST        :  1; /*!< Ofs=0, w=1 SYSCFG and COMP reset */
            uint32_t unused0          :  8;
      __RWB uint32_t ADCRST           :  1; /*!< Ofs=9, w=1 ADC interface reset */
            uint32_t unused1          :  1;
      __RWB uint32_t TIM1RST          :  1; /*!< Ofs=11, w=1 TIM1 timer reset */
      __RWB uint32_t SPI1RST          :  1; /*!< Ofs=12, w=1 SPI 1 reset */
            uint32_t unused2          :  1;
      __RWB uint32_t USART1RST        :  1; /*!< Ofs=14, w=1 USART1 reset */
            uint32_t unused3          :  1;
      __RWB uint32_t TIM15RST         :  1; /*!< Ofs=16, w=1 TIM15 timer reset */
      __RWB uint32_t TIM16RST         :  1; /*!< Ofs=17, w=1 TIM16 timer reset */
      __RWB uint32_t TIM17RST         :  1; /*!< Ofs=18, w=1 TIM17 timer reset */
            uint32_t unused4          :  3;
      __RWB uint32_t DBGMCURST        :  1; /*!< Ofs=22, w=1 Debug MCU reset */
            uint32_t unused5          :  9;
    } B;
  };
#ifdef __cplusplus
  RCC_APB2RSTR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_APB2RSTR_s & r)) volatile {
    RCC_APB2RSTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_APB2RSTR_s & r)) volatile {
    RCC_APB2RSTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_APB1RSTR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TIM2RST          :  1; /*!< Ofs=0, w=1 Timer 2 reset */
      __RWB uint32_t TIM3RST          :  1; /*!< Ofs=1, w=1 Timer 3 reset */
            uint32_t unused0          :  2;
      __RWB uint32_t TIM6RST          :  1; /*!< Ofs=4, w=1 Timer 6 reset */
      __RWB uint32_t TIM7RST          :  1; /*!< Ofs=5, w=1 TIM7 timer reset */
            uint32_t unused1          :  2;
      __RWB uint32_t TIM14RST         :  1; /*!< Ofs=8, w=1 Timer 14 reset */
            uint32_t unused2          :  2;
      __RWB uint32_t WWDGRST          :  1; /*!< Ofs=11, w=1 Window watchdog reset */
            uint32_t unused3          :  2;
      __RWB uint32_t SPI2RST          :  1; /*!< Ofs=14, w=1 SPI2 reset */
            uint32_t unused4          :  2;
      __RWB uint32_t USART2RST        :  1; /*!< Ofs=17, w=1 USART 2 reset */
      __RWB uint32_t USART3RST        :  1; /*!< Ofs=18, w=1 USART3 reset */
      __RWB uint32_t USART4RST        :  1; /*!< Ofs=19, w=1 USART4 reset */
      __RWB uint32_t USART5RST        :  1; /*!< Ofs=20, w=1 USART5 reset */
      __RWB uint32_t I2C1RST          :  1; /*!< Ofs=21, w=1 I2C1 reset */
      __RWB uint32_t I2C2RST          :  1; /*!< Ofs=22, w=1 I2C2 reset */
      __RWB uint32_t USBRST           :  1; /*!< Ofs=23, w=1 USB interface reset */
            uint32_t unused5          :  1;
      __RWB uint32_t CANRST           :  1; /*!< Ofs=25, w=1 CAN interface reset */
            uint32_t unused6          :  1;
      __RWB uint32_t CRSRST           :  1; /*!< Ofs=27, w=1 Clock Recovery System interface reset */
      __RWB uint32_t PWRRST           :  1; /*!< Ofs=28, w=1 Power interface reset */
      __RWB uint32_t DACRST           :  1; /*!< Ofs=29, w=1 DAC interface reset */
      __RWB uint32_t CECRST           :  1; /*!< Ofs=30, w=1 HDMI CEC reset */
            uint32_t unused7          :  1;
    } B;
  };
#ifdef __cplusplus
  RCC_APB1RSTR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_APB1RSTR_s & r)) volatile {
    RCC_APB1RSTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_APB1RSTR_s & r)) volatile {
    RCC_APB1RSTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_AHBENR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DMA1EN           :  1; /*!< Ofs=0, w=1 DMA1 clock enable */
      __RWB uint32_t DMA2EN           :  1; /*!< Ofs=1, w=1 DMA2 clock enable */
      __RWB uint32_t SRAMEN           :  1; /*!< Ofs=2, w=1 SRAM interface clock enable */
            uint32_t unused0          :  1;
      __RWB uint32_t FLITFEN          :  1; /*!< Ofs=4, w=1 FLITF clock enable */
            uint32_t unused1          :  1;
      __RWB uint32_t CRCEN            :  1; /*!< Ofs=6, w=1 CRC clock enable */
            uint32_t unused2          : 10;
      __RWB uint32_t IOPAEN           :  1; /*!< Ofs=17, w=1 I/O port A clock enable */
      __RWB uint32_t IOPBEN           :  1; /*!< Ofs=18, w=1 I/O port B clock enable */
      __RWB uint32_t IOPCEN           :  1; /*!< Ofs=19, w=1 I/O port C clock enable */
      __RWB uint32_t IOPDEN           :  1; /*!< Ofs=20, w=1 I/O port D clock enable */
            uint32_t unused3          :  1;
      __RWB uint32_t IOPFEN           :  1; /*!< Ofs=22, w=1 I/O port F clock enable */
            uint32_t unused4          :  1;
      __RWB uint32_t TSCEN            :  1; /*!< Ofs=24, w=1 Touch sensing controller clock enable */
            uint32_t unused5          :  7;
    } B;
  };
#ifdef __cplusplus
  RCC_AHBENR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_AHBENR_s & r)) volatile {
    RCC_AHBENR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_AHBENR_s & r)) volatile {
    RCC_AHBENR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_APB2ENR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t SYSCFGEN         :  1; /*!< Ofs=0, w=1 SYSCFG clock enable */
            uint32_t unused0          :  4;
      __RWB uint32_t USART6EN         :  1; /*!< Ofs=5, w=1 USART6 clock enable */
      __RWB uint32_t USART7EN         :  1; /*!< Ofs=6, w=1 USART7 clock enable */
      __RWB uint32_t USART8EN         :  1; /*!< Ofs=7, w=1 USART8 clock enable */
            uint32_t unused1          :  1;
      __RWB uint32_t ADCEN            :  1; /*!< Ofs=9, w=1 ADC 1 interface clock enable */
            uint32_t unused2          :  1;
      __RWB uint32_t TIM1EN           :  1; /*!< Ofs=11, w=1 TIM1 Timer clock enable */
      __RWB uint32_t SPI1EN           :  1; /*!< Ofs=12, w=1 SPI 1 clock enable */
            uint32_t unused3          :  1;
      __RWB uint32_t USART1EN         :  1; /*!< Ofs=14, w=1 USART1 clock enable */
            uint32_t unused4          :  1;
      __RWB uint32_t TIM15EN          :  1; /*!< Ofs=16, w=1 TIM15 timer clock enable */
      __RWB uint32_t TIM16EN          :  1; /*!< Ofs=17, w=1 TIM16 timer clock enable */
      __RWB uint32_t TIM17EN          :  1; /*!< Ofs=18, w=1 TIM17 timer clock enable */
            uint32_t unused5          :  3;
      __RWB uint32_t DBGMCUEN         :  1; /*!< Ofs=22, w=1 MCU debug module clock enable */
            uint32_t unused6          :  9;
    } B;
  };
#ifdef __cplusplus
  RCC_APB2ENR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_APB2ENR_s & r)) volatile {
    RCC_APB2ENR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_APB2ENR_s & r)) volatile {
    RCC_APB2ENR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_APB1ENR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TIM2EN           :  1; /*!< Ofs=0, w=1 Timer 2 clock enable */
      __RWB uint32_t TIM3EN           :  1; /*!< Ofs=1, w=1 Timer 3 clock enable */
            uint32_t unused0          :  2;
      __RWB uint32_t TIM6EN           :  1; /*!< Ofs=4, w=1 Timer 6 clock enable */
      __RWB uint32_t TIM7EN           :  1; /*!< Ofs=5, w=1 TIM7 timer clock enable */
            uint32_t unused1          :  2;
      __RWB uint32_t TIM14EN          :  1; /*!< Ofs=8, w=1 Timer 14 clock enable */
            uint32_t unused2          :  2;
      __RWB uint32_t WWDGEN           :  1; /*!< Ofs=11, w=1 Window watchdog clock enable */
            uint32_t unused3          :  2;
      __RWB uint32_t SPI2EN           :  1; /*!< Ofs=14, w=1 SPI 2 clock enable */
            uint32_t unused4          :  2;
      __RWB uint32_t USART2EN         :  1; /*!< Ofs=17, w=1 USART 2 clock enable */
      __RWB uint32_t USART3EN         :  1; /*!< Ofs=18, w=1 USART3 clock enable */
      __RWB uint32_t USART4EN         :  1; /*!< Ofs=19, w=1 USART4 clock enable */
      __RWB uint32_t USART5EN         :  1; /*!< Ofs=20, w=1 USART5 clock enable */
      __RWB uint32_t I2C1EN           :  1; /*!< Ofs=21, w=1 I2C 1 clock enable */
      __RWB uint32_t I2C2EN           :  1; /*!< Ofs=22, w=1 I2C 2 clock enable */
      __RWB uint32_t USBRST           :  1; /*!< Ofs=23, w=1 USB interface clock enable */
            uint32_t unused5          :  1;
      __RWB uint32_t CANEN            :  1; /*!< Ofs=25, w=1 CAN interface clock enable */
            uint32_t unused6          :  1;
      __RWB uint32_t CRSEN            :  1; /*!< Ofs=27, w=1 Clock Recovery System interface clock enable */
      __RWB uint32_t PWREN            :  1; /*!< Ofs=28, w=1 Power interface clock enable */
      __RWB uint32_t DACEN            :  1; /*!< Ofs=29, w=1 DAC interface clock enable */
      __RWB uint32_t CECEN            :  1; /*!< Ofs=30, w=1 HDMI CEC interface clock enable */
            uint32_t unused7          :  1;
    } B;
  };
#ifdef __cplusplus
  RCC_APB1ENR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_APB1ENR_s & r)) volatile {
    RCC_APB1ENR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_APB1ENR_s & r)) volatile {
    RCC_APB1ENR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_BDCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LSEON            :  1; /*!< Ofs=0, w=1 External Low Speed oscillator enable */
      __ROB uint32_t LSERDY           :  1; /*!< Ofs=1, w=1 External Low Speed oscillator ready */
      __RWB uint32_t LSEBYP           :  1; /*!< Ofs=2, w=1 External Low Speed oscillator bypass */
      __RWB uint32_t LSEDRV           :  2; /*!< Ofs=3, w=2 LSE oscillator drive capability */
            uint32_t unused0          :  3;
      __RWB uint32_t RTCSEL           :  2; /*!< Ofs=8, w=2 RTC clock source selection */
            uint32_t unused1          :  5;
      __RWB uint32_t RTCEN            :  1; /*!< Ofs=15, w=1 RTC clock enable */
      __RWB uint32_t BDRST            :  1; /*!< Ofs=16, w=1 Backup domain software reset */
            uint32_t unused2          : 15;
    } B;
  };
#ifdef __cplusplus
  RCC_BDCR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_BDCR_s & r)) volatile {
    RCC_BDCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_BDCR_s & r)) volatile {
    RCC_BDCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LSION            :  1; /*!< Ofs=0, w=1 Internal low speed oscillator enable */
      __ROB uint32_t LSIRDY           :  1; /*!< Ofs=1, w=1 Internal low speed oscillator ready */
            uint32_t unused0          : 22;
      __RWB uint32_t RMVF             :  1; /*!< Ofs=24, w=1 Remove reset flag */
      __RWB uint32_t OBLRSTF          :  1; /*!< Ofs=25, w=1 Option byte loader reset flag */
      __RWB uint32_t PINRSTF          :  1; /*!< Ofs=26, w=1 PIN reset flag */
      __RWB uint32_t PORRSTF          :  1; /*!< Ofs=27, w=1 POR/PDR reset flag */
      __RWB uint32_t SFTRSTF          :  1; /*!< Ofs=28, w=1 Software reset flag */
      __RWB uint32_t IWDGRSTF         :  1; /*!< Ofs=29, w=1 Independent watchdog reset flag */
      __RWB uint32_t WWDGRSTF         :  1; /*!< Ofs=30, w=1 Window watchdog reset flag */
      __RWB uint32_t LPWRRSTF         :  1; /*!< Ofs=31, w=1 Low-power reset flag */
    } B;
  };
#ifdef __cplusplus
  RCC_CSR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CSR_s & r)) volatile {
    RCC_CSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CSR_s & r)) volatile {
    RCC_CSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_AHBRSTR_s {
  union {
      __RWB uint32_t R;
    struct {
            uint32_t unused0          : 17;
      __RWB uint32_t IOPARST          :  1; /*!< Ofs=17, w=1 I/O port A reset */
      __RWB uint32_t IOPBRST          :  1; /*!< Ofs=18, w=1 I/O port B reset */
      __RWB uint32_t IOPCRST          :  1; /*!< Ofs=19, w=1 I/O port C reset */
      __RWB uint32_t IOPDRST          :  1; /*!< Ofs=20, w=1 I/O port D reset */
            uint32_t unused1          :  1;
      __RWB uint32_t IOPFRST          :  1; /*!< Ofs=22, w=1 I/O port F reset */
            uint32_t unused2          :  1;
      __RWB uint32_t TSCRST           :  1; /*!< Ofs=24, w=1 Touch sensing controller reset */
            uint32_t unused3          :  7;
    } B;
  };
#ifdef __cplusplus
  RCC_AHBRSTR_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_AHBRSTR_s & r)) volatile {
    RCC_AHBRSTR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_AHBRSTR_s & r)) volatile {
    RCC_AHBRSTR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CFGR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PREDIV           :  4; /*!< Ofs=0, w=4 PREDIV division factor */
            uint32_t unused0          : 28;
    } B;
  };
#ifdef __cplusplus
  RCC_CFGR2_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CFGR2_s & r)) volatile {
    RCC_CFGR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CFGR2_s & r)) volatile {
    RCC_CFGR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CFGR3_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t USART1SW         :  2; /*!< Ofs=0, w=2 USART1 clock source selection */
            uint32_t unused0          :  2;
      __RWB uint32_t I2C1SW           :  1; /*!< Ofs=4, w=1 I2C1 clock source selection */
            uint32_t unused1          :  1;
      __RWB uint32_t CECSW            :  1; /*!< Ofs=6, w=1 HDMI CEC clock source selection */
      __RWB uint32_t USBSW            :  1; /*!< Ofs=7, w=1 USB clock source selection */
      __RWB uint32_t ADCSW            :  1; /*!< Ofs=8, w=1 ADC clock source selection */
            uint32_t unused2          :  7;
      __RWB uint32_t USART2SW         :  2; /*!< Ofs=16, w=2 USART2 clock source selection */
            uint32_t unused3          : 14;
    } B;
  };
#ifdef __cplusplus
  RCC_CFGR3_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CFGR3_s & r)) volatile {
    RCC_CFGR3_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CFGR3_s & r)) volatile {
    RCC_CFGR3_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct RCC_CR2_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t HSI14ON          :  1; /*!< Ofs=0, w=1 HSI14 clock enable */
      __ROB uint32_t HSI14RDY         :  1; /*!< Ofs=1, w=1 HR14 clock ready flag */
      __RWB uint32_t HSI14DIS         :  1; /*!< Ofs=2, w=1 HSI14 clock request from ADC disable */
      __RWB uint32_t HSI14TRIM        :  5; /*!< Ofs=3, w=5 HSI14 clock trimming */
      __ROB uint32_t HSI14CAL         :  8; /*!< Ofs=8, w=8 HSI14 clock calibration */
      __RWB uint32_t HSI48ON          :  1; /*!< Ofs=16, w=1 HSI48 clock enable */
      __ROB uint32_t HSI48RDY         :  1; /*!< Ofs=17, w=1 HSI48 clock ready flag */
            uint32_t unused0          :  6;
      __ROB uint32_t HSI48CAL         :  1; /*!< Ofs=24, w=1 HSI48 factory clock calibration */
            uint32_t unused1          :  7;
    } B;
  };
#ifdef __cplusplus
  RCC_CR2_s(): R(0) {};
  void modify  (uint32_t (*f) (RCC_CR2_s & r)) volatile {
    RCC_CR2_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (RCC_CR2_s & r)) volatile {
    RCC_CR2_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_ACR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LATENCY          :  3; /*!< Ofs=0, w=3 LATENCY */
            uint32_t unused0          :  1;
      __RWB uint32_t PRFTBE           :  1; /*!< Ofs=4, w=1 PRFTBE */
      __ROB uint32_t PRFTBS           :  1; /*!< Ofs=5, w=1 PRFTBS */
            uint32_t unused1          : 26;
    } B;
  };
#ifdef __cplusplus
  Flash_ACR_s(): R(0) {};
  void modify  (uint32_t (*f) (Flash_ACR_s & r)) volatile {
    Flash_ACR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (Flash_ACR_s & r)) volatile {
    Flash_ACR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_KEYR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t FKEYR            : 32; /*!< Ofs=0, w=32 Flash Key */
    } B;
  };
#ifdef __cplusplus
  Flash_KEYR_s(): R(0) {};
  void setbits (uint32_t (*f) (Flash_KEYR_s & r)) volatile {
    Flash_KEYR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_OPTKEYR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t OPTKEYR          : 32; /*!< Ofs=0, w=32 Option byte key */
    } B;
  };
#ifdef __cplusplus
  Flash_OPTKEYR_s(): R(0) {};
  void setbits (uint32_t (*f) (Flash_OPTKEYR_s & r)) volatile {
    Flash_OPTKEYR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_SR_s {
  union {
      __RWB uint32_t R;
    struct {
      __ROB uint32_t BSY              :  1; /*!< Ofs=0, w=1 Busy */
            uint32_t unused0          :  1;
      __RWB uint32_t PGERR            :  1; /*!< Ofs=2, w=1 Programming error */
            uint32_t unused1          :  1;
      __RWB uint32_t WRPRT            :  1; /*!< Ofs=4, w=1 Write protection error */
      __RWB uint32_t EOP              :  1; /*!< Ofs=5, w=1 End of operation */
            uint32_t unused2          : 26;
    } B;
  };
#ifdef __cplusplus
  Flash_SR_s(): R(0) {};
  void modify  (uint32_t (*f) (Flash_SR_s & r)) volatile {
    Flash_SR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (Flash_SR_s & r)) volatile {
    Flash_SR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PG               :  1; /*!< Ofs=0, w=1 Programming */
      __RWB uint32_t PER              :  1; /*!< Ofs=1, w=1 Page erase */
      __RWB uint32_t MER              :  1; /*!< Ofs=2, w=1 Mass erase */
            uint32_t unused0          :  1;
      __RWB uint32_t OPTPG            :  1; /*!< Ofs=4, w=1 Option byte programming */
      __RWB uint32_t OPTER            :  1; /*!< Ofs=5, w=1 Option byte erase */
      __RWB uint32_t STRT             :  1; /*!< Ofs=6, w=1 Start */
      __RWB uint32_t LOCK             :  1; /*!< Ofs=7, w=1 Lock */
            uint32_t unused1          :  1;
      __RWB uint32_t OPTWRE           :  1; /*!< Ofs=9, w=1 Option bytes write enable */
      __RWB uint32_t ERRIE            :  1; /*!< Ofs=10, w=1 Error interrupt enable */
            uint32_t unused2          :  1;
      __RWB uint32_t EOPIE            :  1; /*!< Ofs=12, w=1 End of operation interrupt enable */
      __RWB uint32_t FORCE_OPTLOAD    :  1; /*!< Ofs=13, w=1 Force option byte loading */
            uint32_t unused3          : 18;
    } B;
  };
#ifdef __cplusplus
  Flash_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (Flash_CR_s & r)) volatile {
    Flash_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (Flash_CR_s & r)) volatile {
    Flash_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_AR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t FAR              : 32; /*!< Ofs=0, w=32 Flash address */
    } B;
  };
#ifdef __cplusplus
  Flash_AR_s(): R(0) {};
  void setbits (uint32_t (*f) (Flash_AR_s & r)) volatile {
    Flash_AR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct Flash_OBR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t OPTERR           :  1; /*!< Ofs=0, w=1 Option byte error */
      __ROB uint32_t RDPRT            :  2; /*!< Ofs=1, w=2 Read protection level status */
            uint32_t unused0          :  5;
      __ROB uint32_t WDG_SW           :  1; /*!< Ofs=8, w=1 WDG_SW */
      __ROB uint32_t nRST_STOP        :  1; /*!< Ofs=9, w=1 nRST_STOP */
      __ROB uint32_t nRST_STDBY       :  1; /*!< Ofs=10, w=1 nRST_STDBY */
      __ROB uint32_t nBOOT0           :  1; /*!< Ofs=11, w=1 nBOOT0 */
      __ROB uint32_t nBOOT1           :  1; /*!< Ofs=12, w=1 BOOT1 */
      __ROB uint32_t VDDA_MONITOR     :  1; /*!< Ofs=13, w=1 VDDA_MONITOR */
      __ROB uint32_t RAM_PARITY_CHECK :  1; /*!< Ofs=14, w=1 RAM_PARITY_CHECK */
      __ROB uint32_t BOOT_SEL         :  1; /*!< Ofs=15, w=1 BOOT_SEL */
      __ROB uint32_t Data0            :  8; /*!< Ofs=16, w=8 Data0 */
      __ROB uint32_t Data1            :  8; /*!< Ofs=24, w=8 Data1 */
    } B;
  };
#ifdef __cplusplus
  Flash_OBR_s(__RO Flash_OBR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct Flash_WRPR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t WRP              : 32; /*!< Ofs=0, w=32 Write protect */
    } B;
  };
#ifdef __cplusplus
  Flash_WRPR_s(__RO Flash_WRPR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct CRC_DR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t DR               : 32; /*!< Ofs=0, w=32 Data register bits */
    } B;
  };
#ifdef __cplusplus
  CRC_DR_s(): R(0) {};
  void modify  (uint32_t (*f) (CRC_DR_s & r)) volatile {
    CRC_DR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRC_DR_s & r)) volatile {
    CRC_DR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CRC_IDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t IDR              :  8; /*!< Ofs=0, w=8 General-purpose 8-bit data register bits */
            uint32_t unused0          : 24;
    } B;
  };
#ifdef __cplusplus
  CRC_IDR_s(): R(0) {};
  void modify  (uint32_t (*f) (CRC_IDR_s & r)) volatile {
    CRC_IDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRC_IDR_s & r)) volatile {
    CRC_IDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CRC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t RESET            :  1; /*!< Ofs=0, w=1 reset bit */
            uint32_t unused0          :  2;
      __RWB uint32_t POLYSIZE         :  2; /*!< Ofs=3, w=2 Polynomial size */
      __RWB uint32_t REV_IN           :  2; /*!< Ofs=5, w=2 Reverse input data */
      __RWB uint32_t REV_OUT          :  1; /*!< Ofs=7, w=1 Reverse output data */
            uint32_t unused1          : 24;
    } B;
  };
#ifdef __cplusplus
  CRC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (CRC_CR_s & r)) volatile {
    CRC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRC_CR_s & r)) volatile {
    CRC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct CRC_INIT_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t INIT             : 32; /*!< Ofs=0, w=32 Programmable initial CRC value */
    } B;
  };
#ifdef __cplusplus
  CRC_INIT_s(): R(0) {};
  void modify  (uint32_t (*f) (CRC_INIT_s & r)) volatile {
    CRC_INIT_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (CRC_INIT_s & r)) volatile {
    CRC_INIT_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_CR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t TSCE             :  1; /*!< Ofs=0, w=1 Touch sensing controller enable */
      __RWB uint32_t START            :  1; /*!< Ofs=1, w=1 Start a new acquisition */
      __RWB uint32_t AM               :  1; /*!< Ofs=2, w=1 Acquisition mode */
      __RWB uint32_t SYNCPOL          :  1; /*!< Ofs=3, w=1 Synchronization pin polarity */
      __RWB uint32_t IODEF            :  1; /*!< Ofs=4, w=1 I/O Default mode */
      __RWB uint32_t MCV              :  3; /*!< Ofs=5, w=3 Max count value */
            uint32_t unused0          :  4;
      __RWB uint32_t PGPSC            :  3; /*!< Ofs=12, w=3 pulse generator prescaler */
      __RWB uint32_t SSPSC            :  1; /*!< Ofs=15, w=1 Spread spectrum prescaler */
      __RWB uint32_t SSE              :  1; /*!< Ofs=16, w=1 Spread spectrum enable */
      __RWB uint32_t SSD              :  7; /*!< Ofs=17, w=7 Spread spectrum deviation */
      __RWB uint32_t CTPL             :  4; /*!< Ofs=24, w=4 Charge transfer pulse low */
      __RWB uint32_t CTPH             :  4; /*!< Ofs=28, w=4 Charge transfer pulse high */
    } B;
  };
#ifdef __cplusplus
  TSC_CR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_CR_s & r)) volatile {
    TSC_CR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_CR_s & r)) volatile {
    TSC_CR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EOAIE            :  1; /*!< Ofs=0, w=1 End of acquisition interrupt enable */
      __RWB uint32_t MCEIE            :  1; /*!< Ofs=1, w=1 Max count error interrupt enable */
            uint32_t unused0          : 30;
    } B;
  };
#ifdef __cplusplus
  TSC_IER_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_IER_s & r)) volatile {
    TSC_IER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_IER_s & r)) volatile {
    TSC_IER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_ICR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EOAIC            :  1; /*!< Ofs=0, w=1 End of acquisition interrupt clear */
      __RWB uint32_t MCEIC            :  1; /*!< Ofs=1, w=1 Max count error interrupt clear */
            uint32_t unused0          : 30;
    } B;
  };
#ifdef __cplusplus
  TSC_ICR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_ICR_s & r)) volatile {
    TSC_ICR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_ICR_s & r)) volatile {
    TSC_ICR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_ISR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t EOAF             :  1; /*!< Ofs=0, w=1 End of acquisition flag */
      __RWB uint32_t MCEF             :  1; /*!< Ofs=1, w=1 Max count error flag */
            uint32_t unused0          : 30;
    } B;
  };
#ifdef __cplusplus
  TSC_ISR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_ISR_s & r)) volatile {
    TSC_ISR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_ISR_s & r)) volatile {
    TSC_ISR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IOHCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t G1_IO1           :  1; /*!< Ofs=0, w=1 G1_IO1 Schmitt trigger hysteresis mode */
      __RWB uint32_t G1_IO2           :  1; /*!< Ofs=1, w=1 G1_IO2 Schmitt trigger hysteresis mode */
      __RWB uint32_t G1_IO3           :  1; /*!< Ofs=2, w=1 G1_IO3 Schmitt trigger hysteresis mode */
      __RWB uint32_t G1_IO4           :  1; /*!< Ofs=3, w=1 G1_IO4 Schmitt trigger hysteresis mode */
      __RWB uint32_t G2_IO1           :  1; /*!< Ofs=4, w=1 G2_IO1 Schmitt trigger hysteresis mode */
      __RWB uint32_t G2_IO2           :  1; /*!< Ofs=5, w=1 G2_IO2 Schmitt trigger hysteresis mode */
      __RWB uint32_t G2_IO3           :  1; /*!< Ofs=6, w=1 G2_IO3 Schmitt trigger hysteresis mode */
      __RWB uint32_t G2_IO4           :  1; /*!< Ofs=7, w=1 G2_IO4 Schmitt trigger hysteresis mode */
      __RWB uint32_t G3_IO1           :  1; /*!< Ofs=8, w=1 G3_IO1 Schmitt trigger hysteresis mode */
      __RWB uint32_t G3_IO2           :  1; /*!< Ofs=9, w=1 G3_IO2 Schmitt trigger hysteresis mode */
      __RWB uint32_t G3_IO3           :  1; /*!< Ofs=10, w=1 G3_IO3 Schmitt trigger hysteresis mode */
      __RWB uint32_t G3_IO4           :  1; /*!< Ofs=11, w=1 G3_IO4 Schmitt trigger hysteresis mode */
      __RWB uint32_t G4_IO1           :  1; /*!< Ofs=12, w=1 G4_IO1 Schmitt trigger hysteresis mode */
      __RWB uint32_t G4_IO2           :  1; /*!< Ofs=13, w=1 G4_IO2 Schmitt trigger hysteresis mode */
      __RWB uint32_t G4_IO3           :  1; /*!< Ofs=14, w=1 G4_IO3 Schmitt trigger hysteresis mode */
      __RWB uint32_t G4_IO4           :  1; /*!< Ofs=15, w=1 G4_IO4 Schmitt trigger hysteresis mode */
      __RWB uint32_t G5_IO1           :  1; /*!< Ofs=16, w=1 G5_IO1 Schmitt trigger hysteresis mode */
      __RWB uint32_t G5_IO2           :  1; /*!< Ofs=17, w=1 G5_IO2 Schmitt trigger hysteresis mode */
      __RWB uint32_t G5_IO3           :  1; /*!< Ofs=18, w=1 G5_IO3 Schmitt trigger hysteresis mode */
      __RWB uint32_t G5_IO4           :  1; /*!< Ofs=19, w=1 G5_IO4 Schmitt trigger hysteresis mode */
      __RWB uint32_t G6_IO1           :  1; /*!< Ofs=20, w=1 G6_IO1 Schmitt trigger hysteresis mode */
      __RWB uint32_t G6_IO2           :  1; /*!< Ofs=21, w=1 G6_IO2 Schmitt trigger hysteresis mode */
      __RWB uint32_t G6_IO3           :  1; /*!< Ofs=22, w=1 G6_IO3 Schmitt trigger hysteresis mode */
      __RWB uint32_t G6_IO4           :  1; /*!< Ofs=23, w=1 G6_IO4 Schmitt trigger hysteresis mode */
            uint32_t unused0          :  8;
    } B;
  };
#ifdef __cplusplus
  TSC_IOHCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_IOHCR_s & r)) volatile {
    TSC_IOHCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_IOHCR_s & r)) volatile {
    TSC_IOHCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IOASCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t G1_IO1           :  1; /*!< Ofs=0, w=1 G1_IO1 analog switch enable */
      __RWB uint32_t G1_IO2           :  1; /*!< Ofs=1, w=1 G1_IO2 analog switch enable */
      __RWB uint32_t G1_IO3           :  1; /*!< Ofs=2, w=1 G1_IO3 analog switch enable */
      __RWB uint32_t G1_IO4           :  1; /*!< Ofs=3, w=1 G1_IO4 analog switch enable */
      __RWB uint32_t G2_IO1           :  1; /*!< Ofs=4, w=1 G2_IO1 analog switch enable */
      __RWB uint32_t G2_IO2           :  1; /*!< Ofs=5, w=1 G2_IO2 analog switch enable */
      __RWB uint32_t G2_IO3           :  1; /*!< Ofs=6, w=1 G2_IO3 analog switch enable */
      __RWB uint32_t G2_IO4           :  1; /*!< Ofs=7, w=1 G2_IO4 analog switch enable */
      __RWB uint32_t G3_IO1           :  1; /*!< Ofs=8, w=1 G3_IO1 analog switch enable */
      __RWB uint32_t G3_IO2           :  1; /*!< Ofs=9, w=1 G3_IO2 analog switch enable */
      __RWB uint32_t G3_IO3           :  1; /*!< Ofs=10, w=1 G3_IO3 analog switch enable */
      __RWB uint32_t G3_IO4           :  1; /*!< Ofs=11, w=1 G3_IO4 analog switch enable */
      __RWB uint32_t G4_IO1           :  1; /*!< Ofs=12, w=1 G4_IO1 analog switch enable */
      __RWB uint32_t G4_IO2           :  1; /*!< Ofs=13, w=1 G4_IO2 analog switch enable */
      __RWB uint32_t G4_IO3           :  1; /*!< Ofs=14, w=1 G4_IO3 analog switch enable */
      __RWB uint32_t G4_IO4           :  1; /*!< Ofs=15, w=1 G4_IO4 analog switch enable */
      __RWB uint32_t G5_IO1           :  1; /*!< Ofs=16, w=1 G5_IO1 analog switch enable */
      __RWB uint32_t G5_IO2           :  1; /*!< Ofs=17, w=1 G5_IO2 analog switch enable */
      __RWB uint32_t G5_IO3           :  1; /*!< Ofs=18, w=1 G5_IO3 analog switch enable */
      __RWB uint32_t G5_IO4           :  1; /*!< Ofs=19, w=1 G5_IO4 analog switch enable */
      __RWB uint32_t G6_IO1           :  1; /*!< Ofs=20, w=1 G6_IO1 analog switch enable */
      __RWB uint32_t G6_IO2           :  1; /*!< Ofs=21, w=1 G6_IO2 analog switch enable */
      __RWB uint32_t G6_IO3           :  1; /*!< Ofs=22, w=1 G6_IO3 analog switch enable */
      __RWB uint32_t G6_IO4           :  1; /*!< Ofs=23, w=1 G6_IO4 analog switch enable */
            uint32_t unused0          :  8;
    } B;
  };
#ifdef __cplusplus
  TSC_IOASCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_IOASCR_s & r)) volatile {
    TSC_IOASCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_IOASCR_s & r)) volatile {
    TSC_IOASCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IOSCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t G1_IO1           :  1; /*!< Ofs=0, w=1 G1_IO1 sampling mode */
      __RWB uint32_t G1_IO2           :  1; /*!< Ofs=1, w=1 G1_IO2 sampling mode */
      __RWB uint32_t G1_IO3           :  1; /*!< Ofs=2, w=1 G1_IO3 sampling mode */
      __RWB uint32_t G1_IO4           :  1; /*!< Ofs=3, w=1 G1_IO4 sampling mode */
      __RWB uint32_t G2_IO1           :  1; /*!< Ofs=4, w=1 G2_IO1 sampling mode */
      __RWB uint32_t G2_IO2           :  1; /*!< Ofs=5, w=1 G2_IO2 sampling mode */
      __RWB uint32_t G2_IO3           :  1; /*!< Ofs=6, w=1 G2_IO3 sampling mode */
      __RWB uint32_t G2_IO4           :  1; /*!< Ofs=7, w=1 G2_IO4 sampling mode */
      __RWB uint32_t G3_IO1           :  1; /*!< Ofs=8, w=1 G3_IO1 sampling mode */
      __RWB uint32_t G3_IO2           :  1; /*!< Ofs=9, w=1 G3_IO2 sampling mode */
      __RWB uint32_t G3_IO3           :  1; /*!< Ofs=10, w=1 G3_IO3 sampling mode */
      __RWB uint32_t G3_IO4           :  1; /*!< Ofs=11, w=1 G3_IO4 sampling mode */
      __RWB uint32_t G4_IO1           :  1; /*!< Ofs=12, w=1 G4_IO1 sampling mode */
      __RWB uint32_t G4_IO2           :  1; /*!< Ofs=13, w=1 G4_IO2 sampling mode */
      __RWB uint32_t G4_IO3           :  1; /*!< Ofs=14, w=1 G4_IO3 sampling mode */
      __RWB uint32_t G4_IO4           :  1; /*!< Ofs=15, w=1 G4_IO4 sampling mode */
      __RWB uint32_t G5_IO1           :  1; /*!< Ofs=16, w=1 G5_IO1 sampling mode */
      __RWB uint32_t G5_IO2           :  1; /*!< Ofs=17, w=1 G5_IO2 sampling mode */
      __RWB uint32_t G5_IO3           :  1; /*!< Ofs=18, w=1 G5_IO3 sampling mode */
      __RWB uint32_t G5_IO4           :  1; /*!< Ofs=19, w=1 G5_IO4 sampling mode */
      __RWB uint32_t G6_IO1           :  1; /*!< Ofs=20, w=1 G6_IO1 sampling mode */
      __RWB uint32_t G6_IO2           :  1; /*!< Ofs=21, w=1 G6_IO2 sampling mode */
      __RWB uint32_t G6_IO3           :  1; /*!< Ofs=22, w=1 G6_IO3 sampling mode */
      __RWB uint32_t G6_IO4           :  1; /*!< Ofs=23, w=1 G6_IO4 sampling mode */
            uint32_t unused0          :  8;
    } B;
  };
#ifdef __cplusplus
  TSC_IOSCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_IOSCR_s & r)) volatile {
    TSC_IOSCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_IOSCR_s & r)) volatile {
    TSC_IOSCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IOCCR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t G1_IO1           :  1; /*!< Ofs=0, w=1 G1_IO1 channel mode */
      __RWB uint32_t G1_IO2           :  1; /*!< Ofs=1, w=1 G1_IO2 channel mode */
      __RWB uint32_t G1_IO3           :  1; /*!< Ofs=2, w=1 G1_IO3 channel mode */
      __RWB uint32_t G1_IO4           :  1; /*!< Ofs=3, w=1 G1_IO4 channel mode */
      __RWB uint32_t G2_IO1           :  1; /*!< Ofs=4, w=1 G2_IO1 channel mode */
      __RWB uint32_t G2_IO2           :  1; /*!< Ofs=5, w=1 G2_IO2 channel mode */
      __RWB uint32_t G2_IO3           :  1; /*!< Ofs=6, w=1 G2_IO3 channel mode */
      __RWB uint32_t G2_IO4           :  1; /*!< Ofs=7, w=1 G2_IO4 channel mode */
      __RWB uint32_t G3_IO1           :  1; /*!< Ofs=8, w=1 G3_IO1 channel mode */
      __RWB uint32_t G3_IO2           :  1; /*!< Ofs=9, w=1 G3_IO2 channel mode */
      __RWB uint32_t G3_IO3           :  1; /*!< Ofs=10, w=1 G3_IO3 channel mode */
      __RWB uint32_t G3_IO4           :  1; /*!< Ofs=11, w=1 G3_IO4 channel mode */
      __RWB uint32_t G4_IO1           :  1; /*!< Ofs=12, w=1 G4_IO1 channel mode */
      __RWB uint32_t G4_IO2           :  1; /*!< Ofs=13, w=1 G4_IO2 channel mode */
      __RWB uint32_t G4_IO3           :  1; /*!< Ofs=14, w=1 G4_IO3 channel mode */
      __RWB uint32_t G4_IO4           :  1; /*!< Ofs=15, w=1 G4_IO4 channel mode */
      __RWB uint32_t G5_IO1           :  1; /*!< Ofs=16, w=1 G5_IO1 channel mode */
      __RWB uint32_t G5_IO2           :  1; /*!< Ofs=17, w=1 G5_IO2 channel mode */
      __RWB uint32_t G5_IO3           :  1; /*!< Ofs=18, w=1 G5_IO3 channel mode */
      __RWB uint32_t G5_IO4           :  1; /*!< Ofs=19, w=1 G5_IO4 channel mode */
      __RWB uint32_t G6_IO1           :  1; /*!< Ofs=20, w=1 G6_IO1 channel mode */
      __RWB uint32_t G6_IO2           :  1; /*!< Ofs=21, w=1 G6_IO2 channel mode */
      __RWB uint32_t G6_IO3           :  1; /*!< Ofs=22, w=1 G6_IO3 channel mode */
      __RWB uint32_t G6_IO4           :  1; /*!< Ofs=23, w=1 G6_IO4 channel mode */
            uint32_t unused0          :  8;
    } B;
  };
#ifdef __cplusplus
  TSC_IOCCR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_IOCCR_s & r)) volatile {
    TSC_IOCCR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_IOCCR_s & r)) volatile {
    TSC_IOCCR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IOGCSR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t G1E              :  1; /*!< Ofs=0, w=1 Analog I/O group x enable */
      __RWB uint32_t G2E              :  1; /*!< Ofs=1, w=1 Analog I/O group x enable */
      __RWB uint32_t G3E              :  1; /*!< Ofs=2, w=1 Analog I/O group x enable */
      __RWB uint32_t G4E              :  1; /*!< Ofs=3, w=1 Analog I/O group x enable */
      __RWB uint32_t G5E              :  1; /*!< Ofs=4, w=1 Analog I/O group x enable */
      __RWB uint32_t G6E              :  1; /*!< Ofs=5, w=1 Analog I/O group x enable */
      __RWB uint32_t G7E              :  1; /*!< Ofs=6, w=1 Analog I/O group x enable */
      __RWB uint32_t G8E              :  1; /*!< Ofs=7, w=1 Analog I/O group x enable */
            uint32_t unused0          :  8;
      __ROB uint32_t G1S              :  1; /*!< Ofs=16, w=1 Analog I/O group x status */
      __ROB uint32_t G2S              :  1; /*!< Ofs=17, w=1 Analog I/O group x status */
      __ROB uint32_t G3S              :  1; /*!< Ofs=18, w=1 Analog I/O group x status */
      __ROB uint32_t G4S              :  1; /*!< Ofs=19, w=1 Analog I/O group x status */
      __ROB uint32_t G5S              :  1; /*!< Ofs=20, w=1 Analog I/O group x status */
      __ROB uint32_t G6S              :  1; /*!< Ofs=21, w=1 Analog I/O group x status */
      __RWB uint32_t G7S              :  1; /*!< Ofs=22, w=1 Analog I/O group x status */
      __RWB uint32_t G8S              :  1; /*!< Ofs=23, w=1 Analog I/O group x status */
            uint32_t unused1          :  8;
    } B;
  };
#ifdef __cplusplus
  TSC_IOGCSR_s(): R(0) {};
  void modify  (uint32_t (*f) (TSC_IOGCSR_s & r)) volatile {
    TSC_IOGCSR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (TSC_IOGCSR_s & r)) volatile {
    TSC_IOGCSR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct TSC_IOG1CR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t CNT              : 14; /*!< Ofs=0, w=14 Counter value */
            uint32_t unused0          : 18;
    } B;
  };
#ifdef __cplusplus
  TSC_IOG1CR_s(__RO TSC_IOG1CR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct TSC_IOG2CR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t CNT              : 14; /*!< Ofs=0, w=14 Counter value */
            uint32_t unused0          : 18;
    } B;
  };
#ifdef __cplusplus
  TSC_IOG2CR_s(__RO TSC_IOG2CR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct TSC_IOG3CR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t CNT              : 14; /*!< Ofs=0, w=14 Counter value */
            uint32_t unused0          : 18;
    } B;
  };
#ifdef __cplusplus
  TSC_IOG3CR_s(__RO TSC_IOG3CR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct TSC_IOG4CR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t CNT              : 14; /*!< Ofs=0, w=14 Counter value */
            uint32_t unused0          : 18;
    } B;
  };
#ifdef __cplusplus
  TSC_IOG4CR_s(__RO TSC_IOG4CR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct TSC_IOG5CR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t CNT              : 14; /*!< Ofs=0, w=14 Counter value */
            uint32_t unused0          : 18;
    } B;
  };
#ifdef __cplusplus
  TSC_IOG5CR_s(__RO TSC_IOG5CR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct TSC_IOG6CR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t CNT              : 14; /*!< Ofs=0, w=14 Counter value */
            uint32_t unused0          : 18;
    } B;
  };
#ifdef __cplusplus
  TSC_IOG6CR_s(__RO TSC_IOG6CR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct GPIO_MODER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t MODER0           :  2; /*!< Ofs=0, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER1           :  2; /*!< Ofs=2, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER2           :  2; /*!< Ofs=4, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER3           :  2; /*!< Ofs=6, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER4           :  2; /*!< Ofs=8, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER5           :  2; /*!< Ofs=10, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER6           :  2; /*!< Ofs=12, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER7           :  2; /*!< Ofs=14, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER8           :  2; /*!< Ofs=16, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER9           :  2; /*!< Ofs=18, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER10          :  2; /*!< Ofs=20, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER11          :  2; /*!< Ofs=22, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER12          :  2; /*!< Ofs=24, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER13          :  2; /*!< Ofs=26, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER14          :  2; /*!< Ofs=28, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t MODER15          :  2; /*!< Ofs=30, w=2 Port x configuration bits (y = 0..15) */
    } B;
  };
#ifdef __cplusplus
  GPIO_MODER_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_MODER_s & r)) volatile {
    GPIO_MODER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_MODER_s & r)) volatile {
    GPIO_MODER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_OTYPER_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t OT0              :  1; /*!< Ofs=0, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT1              :  1; /*!< Ofs=1, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT2              :  1; /*!< Ofs=2, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT3              :  1; /*!< Ofs=3, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT4              :  1; /*!< Ofs=4, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT5              :  1; /*!< Ofs=5, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT6              :  1; /*!< Ofs=6, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT7              :  1; /*!< Ofs=7, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT8              :  1; /*!< Ofs=8, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT9              :  1; /*!< Ofs=9, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT10             :  1; /*!< Ofs=10, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT11             :  1; /*!< Ofs=11, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT12             :  1; /*!< Ofs=12, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT13             :  1; /*!< Ofs=13, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT14             :  1; /*!< Ofs=14, w=1 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OT15             :  1; /*!< Ofs=15, w=1 Port x configuration bits (y = 0..15) */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  GPIO_OTYPER_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_OTYPER_s & r)) volatile {
    GPIO_OTYPER_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_OTYPER_s & r)) volatile {
    GPIO_OTYPER_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_OSPEEDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t OSPEEDR0         :  2; /*!< Ofs=0, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR1         :  2; /*!< Ofs=2, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR2         :  2; /*!< Ofs=4, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR3         :  2; /*!< Ofs=6, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR4         :  2; /*!< Ofs=8, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR5         :  2; /*!< Ofs=10, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR6         :  2; /*!< Ofs=12, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR7         :  2; /*!< Ofs=14, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR8         :  2; /*!< Ofs=16, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR9         :  2; /*!< Ofs=18, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR10        :  2; /*!< Ofs=20, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR11        :  2; /*!< Ofs=22, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR12        :  2; /*!< Ofs=24, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR13        :  2; /*!< Ofs=26, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR14        :  2; /*!< Ofs=28, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t OSPEEDR15        :  2; /*!< Ofs=30, w=2 Port x configuration bits (y = 0..15) */
    } B;
  };
#ifdef __cplusplus
  GPIO_OSPEEDR_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_OSPEEDR_s & r)) volatile {
    GPIO_OSPEEDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_OSPEEDR_s & r)) volatile {
    GPIO_OSPEEDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_PUPDR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t PUPDR0           :  2; /*!< Ofs=0, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR1           :  2; /*!< Ofs=2, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR2           :  2; /*!< Ofs=4, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR3           :  2; /*!< Ofs=6, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR4           :  2; /*!< Ofs=8, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR5           :  2; /*!< Ofs=10, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR6           :  2; /*!< Ofs=12, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR7           :  2; /*!< Ofs=14, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR8           :  2; /*!< Ofs=16, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR9           :  2; /*!< Ofs=18, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR10          :  2; /*!< Ofs=20, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR11          :  2; /*!< Ofs=22, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR12          :  2; /*!< Ofs=24, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR13          :  2; /*!< Ofs=26, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR14          :  2; /*!< Ofs=28, w=2 Port x configuration bits (y = 0..15) */
      __RWB uint32_t PUPDR15          :  2; /*!< Ofs=30, w=2 Port x configuration bits (y = 0..15) */
    } B;
  };
#ifdef __cplusplus
  GPIO_PUPDR_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_PUPDR_s & r)) volatile {
    GPIO_PUPDR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_PUPDR_s & r)) volatile {
    GPIO_PUPDR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_IDR_s {
  union {
      __ROB uint32_t R;
    struct {
      __ROB uint32_t IDR0             :  1; /*!< Ofs=0, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR1             :  1; /*!< Ofs=1, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR2             :  1; /*!< Ofs=2, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR3             :  1; /*!< Ofs=3, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR4             :  1; /*!< Ofs=4, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR5             :  1; /*!< Ofs=5, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR6             :  1; /*!< Ofs=6, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR7             :  1; /*!< Ofs=7, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR8             :  1; /*!< Ofs=8, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR9             :  1; /*!< Ofs=9, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR10            :  1; /*!< Ofs=10, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR11            :  1; /*!< Ofs=11, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR12            :  1; /*!< Ofs=12, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR13            :  1; /*!< Ofs=13, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR14            :  1; /*!< Ofs=14, w=1 Port input data (y = 0..15) */
      __ROB uint32_t IDR15            :  1; /*!< Ofs=15, w=1 Port input data (y = 0..15) */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  GPIO_IDR_s(__RO GPIO_IDR_s & o) : R(o.R) {};
#endif // __cplusplus
};
struct GPIO_ODR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t ODR0             :  1; /*!< Ofs=0, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR1             :  1; /*!< Ofs=1, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR2             :  1; /*!< Ofs=2, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR3             :  1; /*!< Ofs=3, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR4             :  1; /*!< Ofs=4, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR5             :  1; /*!< Ofs=5, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR6             :  1; /*!< Ofs=6, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR7             :  1; /*!< Ofs=7, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR8             :  1; /*!< Ofs=8, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR9             :  1; /*!< Ofs=9, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR10            :  1; /*!< Ofs=10, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR11            :  1; /*!< Ofs=11, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR12            :  1; /*!< Ofs=12, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR13            :  1; /*!< Ofs=13, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR14            :  1; /*!< Ofs=14, w=1 Port output data (y = 0..15) */
      __RWB uint32_t ODR15            :  1; /*!< Ofs=15, w=1 Port output data (y = 0..15) */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  GPIO_ODR_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_ODR_s & r)) volatile {
    GPIO_ODR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_ODR_s & r)) volatile {
    GPIO_ODR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_BSRR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t BS0              :  1; /*!< Ofs=0, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS1              :  1; /*!< Ofs=1, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS2              :  1; /*!< Ofs=2, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS3              :  1; /*!< Ofs=3, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS4              :  1; /*!< Ofs=4, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS5              :  1; /*!< Ofs=5, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS6              :  1; /*!< Ofs=6, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS7              :  1; /*!< Ofs=7, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS8              :  1; /*!< Ofs=8, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS9              :  1; /*!< Ofs=9, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS10             :  1; /*!< Ofs=10, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS11             :  1; /*!< Ofs=11, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS12             :  1; /*!< Ofs=12, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS13             :  1; /*!< Ofs=13, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS14             :  1; /*!< Ofs=14, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BS15             :  1; /*!< Ofs=15, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BR0              :  1; /*!< Ofs=16, w=1 Port x set bit y (y= 0..15) */
      __WOB uint32_t BR1              :  1; /*!< Ofs=17, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR2              :  1; /*!< Ofs=18, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR3              :  1; /*!< Ofs=19, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR4              :  1; /*!< Ofs=20, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR5              :  1; /*!< Ofs=21, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR6              :  1; /*!< Ofs=22, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR7              :  1; /*!< Ofs=23, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR8              :  1; /*!< Ofs=24, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR9              :  1; /*!< Ofs=25, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR10             :  1; /*!< Ofs=26, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR11             :  1; /*!< Ofs=27, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR12             :  1; /*!< Ofs=28, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR13             :  1; /*!< Ofs=29, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR14             :  1; /*!< Ofs=30, w=1 Port x reset bit y (y = 0..15) */
      __WOB uint32_t BR15             :  1; /*!< Ofs=31, w=1 Port x reset bit y (y = 0..15) */
    } B;
  };
#ifdef __cplusplus
  GPIO_BSRR_s(): R(0) {};
  void setbits (uint32_t (*f) (GPIO_BSRR_s & r)) volatile {
    GPIO_BSRR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_LCKR_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t LCK0             :  1; /*!< Ofs=0, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK1             :  1; /*!< Ofs=1, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK2             :  1; /*!< Ofs=2, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK3             :  1; /*!< Ofs=3, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK4             :  1; /*!< Ofs=4, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK5             :  1; /*!< Ofs=5, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK6             :  1; /*!< Ofs=6, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK7             :  1; /*!< Ofs=7, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK8             :  1; /*!< Ofs=8, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK9             :  1; /*!< Ofs=9, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK10            :  1; /*!< Ofs=10, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK11            :  1; /*!< Ofs=11, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK12            :  1; /*!< Ofs=12, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK13            :  1; /*!< Ofs=13, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK14            :  1; /*!< Ofs=14, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCK15            :  1; /*!< Ofs=15, w=1 Port x lock bit y (y= 0..15) */
      __RWB uint32_t LCKK             :  1; /*!< Ofs=16, w=1 Port x lock bit y (y= 0..15) */
            uint32_t unused0          : 15;
    } B;
  };
#ifdef __cplusplus
  GPIO_LCKR_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_LCKR_s & r)) volatile {
    GPIO_LCKR_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_LCKR_s & r)) volatile {
    GPIO_LCKR_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_AFRL_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t AFRL0            :  4; /*!< Ofs=0, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL1            :  4; /*!< Ofs=4, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL2            :  4; /*!< Ofs=8, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL3            :  4; /*!< Ofs=12, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL4            :  4; /*!< Ofs=16, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL5            :  4; /*!< Ofs=20, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL6            :  4; /*!< Ofs=24, w=4 Alternate function selection for port x bit y (y = 0..7) */
      __RWB uint32_t AFRL7            :  4; /*!< Ofs=28, w=4 Alternate function selection for port x bit y (y = 0..7) */
    } B;
  };
#ifdef __cplusplus
  GPIO_AFRL_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_AFRL_s & r)) volatile {
    GPIO_AFRL_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_AFRL_s & r)) volatile {
    GPIO_AFRL_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_AFRH_s {
  union {
      __RWB uint32_t R;
    struct {
      __RWB uint32_t AFRH8            :  4; /*!< Ofs=0, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH9            :  4; /*!< Ofs=4, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH10           :  4; /*!< Ofs=8, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH11           :  4; /*!< Ofs=12, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH12           :  4; /*!< Ofs=16, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH13           :  4; /*!< Ofs=20, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH14           :  4; /*!< Ofs=24, w=4 Alternate function selection for port x bit y (y = 8..15) */
      __RWB uint32_t AFRH15           :  4; /*!< Ofs=28, w=4 Alternate function selection for port x bit y (y = 8..15) */
    } B;
  };
#ifdef __cplusplus
  GPIO_AFRH_s(): R(0) {};
  void modify  (uint32_t (*f) (GPIO_AFRH_s & r)) volatile {
    GPIO_AFRH_s t; t.R = R;
    R = f (t);
  }
  void setbits (uint32_t (*f) (GPIO_AFRH_s & r)) volatile {
    GPIO_AFRH_s t;
    R = f (t);
  }
#endif // __cplusplus
};
struct GPIO_BRR_s {
  union {
      __WOB uint32_t R;
    struct {
      __WOB uint32_t BR0              :  1; /*!< Ofs=0, w=1 Port x Reset bit y */
      __WOB uint32_t BR1              :  1; /*!< Ofs=1, w=1 Port x Reset bit y */
      __WOB uint32_t BR2              :  1; /*!< Ofs=2, w=1 Port x Reset bit y */
      __WOB uint32_t BR3              :  1; /*!< Ofs=3, w=1 Port x Reset bit y */
      __WOB uint32_t BR4              :  1; /*!< Ofs=4, w=1 Port x Reset bit y */
      __WOB uint32_t BR5              :  1; /*!< Ofs=5, w=1 Port x Reset bit y */
      __WOB uint32_t BR6              :  1; /*!< Ofs=6, w=1 Port x Reset bit y */
      __WOB uint32_t BR7              :  1; /*!< Ofs=7, w=1 Port x Reset bit y */
      __WOB uint32_t BR8              :  1; /*!< Ofs=8, w=1 Port x Reset bit y */
      __WOB uint32_t BR9              :  1; /*!< Ofs=9, w=1 Port x Reset bit y */
      __WOB uint32_t BR10             :  1; /*!< Ofs=10, w=1 Port x Reset bit y */
      __WOB uint32_t BR11             :  1; /*!< Ofs=11, w=1 Port x Reset bit y */
      __WOB uint32_t BR12             :  1; /*!< Ofs=12, w=1 Port x Reset bit y */
      __WOB uint32_t BR13             :  1; /*!< Ofs=13, w=1 Port x Reset bit y */
      __WOB uint32_t BR14             :  1; /*!< Ofs=14, w=1 Port x Reset bit y */
      __WOB uint32_t BR15             :  1; /*!< Ofs=15, w=1 Port x Reset bit y */
            uint32_t unused0          : 16;
    } B;
  };
#ifdef __cplusplus
  GPIO_BRR_s(): R(0) {};
  void setbits (uint32_t (*f) (GPIO_BRR_s & r)) volatile {
    GPIO_BRR_s t;
    R = f (t);
  }
#endif // __cplusplus
};

typedef struct TIM_s {
  __RW struct TIM_CR1_s         CR1;             /*!< Ofs=  0, W=4 control register 1 */
  __RW struct TIM_CR2_s         CR2;             /*!< Ofs=  4, W=4 control register 2 */
  __RW struct TIM_SMCR_s        SMCR;            /*!< Ofs=  8, W=4 slave mode control register */
  __RW struct TIM_DIER_s        DIER;            /*!< Ofs= 12, W=4 DMA/Interrupt enable register */
  __RW struct TIM_SR_s          SR;              /*!< Ofs= 16, W=4 status register */
  __WO struct TIM_EGR_s         EGR;             /*!< Ofs= 20, W=4 event generation register */
  union {
    __RW struct TIM_CCMR1_Output_s CCMR1_Output;    /*!< Ofs= 24, W=4 capture/compare mode register 1 (output mode) */
    __RW struct TIM_CCMR1_Input_s CCMR1_Input;     /*!< Ofs= 24, W=4 capture/compare mode register 1 (input mode) */
  };
  union {
    __RW struct TIM_CCMR2_Input_s CCMR2_Input;     /*!< Ofs= 28, W=4 capture/compare mode register 2 (input mode) */
    __RW struct TIM_CCMR2_Output_s CCMR2_Output;    /*!< Ofs= 28, W=4 capture/compare mode register 2 (output mode) */
  };
  __RW struct TIM_CCER_s        CCER;            /*!< Ofs= 32, W=4 capture/compare enable register */
  __RW struct TIM_CNT_s         CNT;             /*!< Ofs= 36, W=4 counter */
  __RW struct TIM_PSC_s         PSC;             /*!< Ofs= 40, W=4 prescaler */
  __RW struct TIM_ARR_s         ARR;             /*!< Ofs= 44, W=4 auto-reload register */
  __RW struct TIM_RCR_s         RCR;             /*!< Ofs= 48, W=4 repetition counter register */
  __RW struct TIM_CCR1_s        CCR1;            /*!< Ofs= 52, W=4 capture/compare register 1 */
  __RW struct TIM_CCR2_s        CCR2;            /*!< Ofs= 56, W=4 capture/compare register 2 */
  __RW struct TIM_CCR3_s        CCR3;            /*!< Ofs= 60, W=4 capture/compare register 3 */
  __RW struct TIM_CCR4_s        CCR4;            /*!< Ofs= 64, W=4 capture/compare register 4 */
  __RW struct TIM_BDTR_s        BDTR;            /*!< Ofs= 68, W=4 break and dead-time register */
  __RW struct TIM_DCR_s         DCR;             /*!< Ofs= 72, W=4 DMA control register */
  __RW struct TIM_DMAR_s        DMAR;            /*!< Ofs= 76, W=4 DMA address for full transfer */
  __RW struct TIM_OR_s          OR;              /*!< Ofs= 80, W=4 option register */
} TIM_Type; /* W=84=0x54 */ 
typedef struct RTC_s {
  __RW struct RTC_TR_s          TR;              /*!< Ofs=  0, W=4 time register */
  __RW struct RTC_DR_s          DR;              /*!< Ofs=  4, W=4 date register */
  __RW struct RTC_CR_s          CR;              /*!< Ofs=  8, W=4 control register */
  __RW struct RTC_ISR_s         ISR;             /*!< Ofs= 12, W=4 initialization and status register */
  __RW struct RTC_PRER_s        PRER;            /*!< Ofs= 16, W=4 prescaler register */
       uint32_t UNUSED0[2];     
  __RW struct RTC_ALRMAR_s      ALRMAR;          /*!< Ofs= 28, W=4 alarm A register */
       uint32_t UNUSED1;        
  __WO struct RTC_WPR_s         WPR;             /*!< Ofs= 36, W=4 write protection register */
  __RO struct RTC_SSR_s         SSR;             /*!< Ofs= 40, W=4 sub second register */
  __WO struct RTC_SHIFTR_s      SHIFTR;          /*!< Ofs= 44, W=4 shift control register */
  __RO struct RTC_TSTR_s        TSTR;            /*!< Ofs= 48, W=4 timestamp time register */
  __RO struct RTC_TSDR_s        TSDR;            /*!< Ofs= 52, W=4 timestamp date register */
  __RO struct RTC_TSSSR_s       TSSSR;           /*!< Ofs= 56, W=4 time-stamp sub second register */
  __RW struct RTC_CALR_s        CALR;            /*!< Ofs= 60, W=4 calibration register */
  __RW struct RTC_TAFCR_s       TAFCR;           /*!< Ofs= 64, W=4 tamper and alternate function configuration register */
  __RW struct RTC_ALRMASSR_s    ALRMASSR;        /*!< Ofs= 68, W=4 alarm A sub second register */
       uint32_t UNUSED2[2];     
  __RW struct RTC_BKP0R_s       BKP0R;           /*!< Ofs= 80, W=4 backup register */
  __RW struct RTC_BKP1R_s       BKP1R;           /*!< Ofs= 84, W=4 backup register */
  __RW struct RTC_BKP2R_s       BKP2R;           /*!< Ofs= 88, W=4 backup register */
  __RW struct RTC_BKP3R_s       BKP3R;           /*!< Ofs= 92, W=4 backup register */
  __RW struct RTC_BKP4R_s       BKP4R;           /*!< Ofs= 96, W=4 backup register */
} RTC_Type; /* W=100=0x64 */ 
typedef struct WWDG_s {
  __RW struct WWDG_CR_s         CR;              /*!< Ofs=  0, W=4 Control register */
  __RW struct WWDG_CFR_s        CFR;             /*!< Ofs=  4, W=4 Configuration register */
  __RW struct WWDG_SR_s         SR;              /*!< Ofs=  8, W=4 Status register */
} WWDG_Type; /* W=12=0xC */ 
typedef struct IWDG_s {
  __WO struct IWDG_KR_s         KR;              /*!< Ofs=  0, W=4 Key register */
  __RW struct IWDG_PR_s         PR;              /*!< Ofs=  4, W=4 Prescaler register */
  __RW struct IWDG_RLR_s        RLR;             /*!< Ofs=  8, W=4 Reload register */
  __RO struct IWDG_SR_s         SR;              /*!< Ofs= 12, W=4 Status register */
  __RW struct IWDG_WINR_s       WINR;            /*!< Ofs= 16, W=4 Window register */
} IWDG_Type; /* W=20=0x14 */ 
typedef struct I2C_s {
  __RW struct I2C_CR1_s         CR1;             /*!< Ofs=  0, W=4 Control register 1 */
  __RW struct I2C_CR2_s         CR2;             /*!< Ofs=  4, W=4 Control register 2 */
  __RW struct I2C_OAR1_s        OAR1;            /*!< Ofs=  8, W=4 Own address register 1 */
  __RW struct I2C_OAR2_s        OAR2;            /*!< Ofs= 12, W=4 Own address register 2 */
  __RW struct I2C_TIMINGR_s     TIMINGR;         /*!< Ofs= 16, W=4 Timing register */
  __RW struct I2C_TIMEOUTR_s    TIMEOUTR;        /*!< Ofs= 20, W=4 Status register 1 */
  __RW struct I2C_ISR_s         ISR;             /*!< Ofs= 24, W=4 Interrupt and Status register */
  __WO struct I2C_ICR_s         ICR;             /*!< Ofs= 28, W=4 Interrupt clear register */
  __RO struct I2C_PECR_s        PECR;            /*!< Ofs= 32, W=4 PEC register */
  __RO struct I2C_RXDR_s        RXDR;            /*!< Ofs= 36, W=4 Receive data register */
  __RW struct I2C_TXDR_s        TXDR;            /*!< Ofs= 40, W=4 Transmit data register */
} I2C_Type; /* W=44=0x2C */ 
typedef struct USB_s {
  __RW struct USB_EP0R_s        EP0R;            /*!< Ofs=  0, W=4 endpoint 0 register */
  __RW struct USB_EP1R_s        EP1R;            /*!< Ofs=  4, W=4 endpoint 1 register */
  __RW struct USB_EP2R_s        EP2R;            /*!< Ofs=  8, W=4 endpoint 2 register */
  __RW struct USB_EP3R_s        EP3R;            /*!< Ofs= 12, W=4 endpoint 3 register */
  __RW struct USB_EP4R_s        EP4R;            /*!< Ofs= 16, W=4 endpoint 4 register */
  __RW struct USB_EP5R_s        EP5R;            /*!< Ofs= 20, W=4 endpoint 5 register */
  __RW struct USB_EP6R_s        EP6R;            /*!< Ofs= 24, W=4 endpoint 6 register */
  __RW struct USB_EP7R_s        EP7R;            /*!< Ofs= 28, W=4 endpoint 7 register */
       uint32_t UNUSED0[8];     
  __RW struct USB_CNTR_s        CNTR;            /*!< Ofs= 64, W=4 control register */
  __RW struct USB_ISTR_s        ISTR;            /*!< Ofs= 68, W=4 interrupt status register */
  __RO struct USB_FNR_s         FNR;             /*!< Ofs= 72, W=4 frame number register */
  __RW struct USB_DADDR_s       DADDR;           /*!< Ofs= 76, W=4 device address */
  __RW struct USB_BTABLE_s      BTABLE;          /*!< Ofs= 80, W=4 Buffer table address */
  __RW struct USB_LPMCSR_s      LPMCSR;          /*!< Ofs= 84, W=4 LPM control and status register */
  __RW struct USB_BCDR_s        BCDR;            /*!< Ofs= 88, W=4 Battery charging detector */
} USB_Type; /* W=92=0x5C */ 
typedef struct CAN_s {
  __RW struct CAN_CAN_MCR_s     CAN_MCR;         /*!< Ofs=  0, W=4 CAN_MCR */
  __RW struct CAN_CAN_MSR_s     CAN_MSR;         /*!< Ofs=  4, W=4 CAN_MSR */
  __RW struct CAN_CAN_TSR_s     CAN_TSR;         /*!< Ofs=  8, W=4 CAN_TSR */
  __RW struct CAN_CAN_RF0R_s    CAN_RF0R;        /*!< Ofs= 12, W=4 CAN_RF0R */
  __RW struct CAN_CAN_RF1R_s    CAN_RF1R;        /*!< Ofs= 16, W=4 CAN_RF1R */
  __RW struct CAN_CAN_IER_s     CAN_IER;         /*!< Ofs= 20, W=4 CAN_IER */
  __RW struct CAN_CAN_ESR_s     CAN_ESR;         /*!< Ofs= 24, W=4 CAN_ESR */
  __RW struct CAN_CAN_BTR_s     CAN_BTR;         /*!< Ofs= 28, W=4 CAN BTR */
       uint32_t UNUSED0[88];    
  __RW struct CAN_CAN_TI0R_s    CAN_TI0R;        /*!< Ofs=384, W=4 CAN_TI0R */
  __RW struct CAN_CAN_TDT0R_s   CAN_TDT0R;       /*!< Ofs=388, W=4 CAN_TDT0R */
  __RW struct CAN_CAN_TDL0R_s   CAN_TDL0R;       /*!< Ofs=392, W=4 CAN_TDL0R */
  __RW struct CAN_CAN_TDH0R_s   CAN_TDH0R;       /*!< Ofs=396, W=4 CAN_TDH0R */
  __RW struct CAN_CAN_TI1R_s    CAN_TI1R;        /*!< Ofs=400, W=4 CAN_TI1R */
  __RW struct CAN_CAN_TDT1R_s   CAN_TDT1R;       /*!< Ofs=404, W=4 CAN_TDT1R */
  __RW struct CAN_CAN_TDL1R_s   CAN_TDL1R;       /*!< Ofs=408, W=4 CAN_TDL1R */
  __RW struct CAN_CAN_TDH1R_s   CAN_TDH1R;       /*!< Ofs=412, W=4 CAN_TDH1R */
  __RW struct CAN_CAN_TI2R_s    CAN_TI2R;        /*!< Ofs=416, W=4 CAN_TI2R */
  __RW struct CAN_CAN_TDT2R_s   CAN_TDT2R;       /*!< Ofs=420, W=4 CAN_TDT2R */
  __RW struct CAN_CAN_TDL2R_s   CAN_TDL2R;       /*!< Ofs=424, W=4 CAN_TDL2R */
  __RW struct CAN_CAN_TDH2R_s   CAN_TDH2R;       /*!< Ofs=428, W=4 CAN_TDH2R */
  __RO struct CAN_CAN_RI0R_s    CAN_RI0R;        /*!< Ofs=432, W=4 CAN_RI0R */
  __RO struct CAN_CAN_RDT0R_s   CAN_RDT0R;       /*!< Ofs=436, W=4 CAN_RDT0R */
  __RO struct CAN_CAN_RDL0R_s   CAN_RDL0R;       /*!< Ofs=440, W=4 CAN_RDL0R */
  __RO struct CAN_CAN_RDH0R_s   CAN_RDH0R;       /*!< Ofs=444, W=4 CAN_RDH0R */
  __RO struct CAN_CAN_RI1R_s    CAN_RI1R;        /*!< Ofs=448, W=4 CAN_RI1R */
  __RO struct CAN_CAN_RDT1R_s   CAN_RDT1R;       /*!< Ofs=452, W=4 CAN_RDT1R */
  __RO struct CAN_CAN_RDL1R_s   CAN_RDL1R;       /*!< Ofs=456, W=4 CAN_RDL1R */
  __RO struct CAN_CAN_RDH1R_s   CAN_RDH1R;       /*!< Ofs=460, W=4 CAN_RDH1R */
       uint32_t UNUSED1[12];    
  __RW struct CAN_CAN_FMR_s     CAN_FMR;         /*!< Ofs=512, W=4 CAN_FMR */
  __RW struct CAN_CAN_FM1R_s    CAN_FM1R;        /*!< Ofs=516, W=4 CAN_FM1R */
       uint32_t UNUSED2;        
  __RW struct CAN_CAN_FS1R_s    CAN_FS1R;        /*!< Ofs=524, W=4 CAN_FS1R */
       uint32_t UNUSED3;        
  __RW struct CAN_CAN_FFA1R_s   CAN_FFA1R;       /*!< Ofs=532, W=4 CAN_FFA1R */
       uint32_t UNUSED4;        
  __RW struct CAN_CAN_FA1R_s    CAN_FA1R;        /*!< Ofs=540, W=4 CAN_FA1R */
       uint32_t UNUSED5[8];     
  __RW struct CAN_F0R1_s        F0R1;            /*!< Ofs=576, W=4 Filter bank 0 register 1 */
  __RW struct CAN_F0R2_s        F0R2;            /*!< Ofs=580, W=4 Filter bank 0 register 2 */
  __RW struct CAN_F1R1_s        F1R1;            /*!< Ofs=584, W=4 Filter bank 1 register 1 */
  __RW struct CAN_F1R2_s        F1R2;            /*!< Ofs=588, W=4 Filter bank 1 register 2 */
  __RW struct CAN_F2R1_s        F2R1;            /*!< Ofs=592, W=4 Filter bank 2 register 1 */
  __RW struct CAN_F2R2_s        F2R2;            /*!< Ofs=596, W=4 Filter bank 2 register 2 */
  __RW struct CAN_F3R1_s        F3R1;            /*!< Ofs=600, W=4 Filter bank 3 register 1 */
  __RW struct CAN_F3R2_s        F3R2;            /*!< Ofs=604, W=4 Filter bank 3 register 2 */
  __RW struct CAN_F4R1_s        F4R1;            /*!< Ofs=608, W=4 Filter bank 4 register 1 */
  __RW struct CAN_F4R2_s        F4R2;            /*!< Ofs=612, W=4 Filter bank 4 register 2 */
  __RW struct CAN_F5R1_s        F5R1;            /*!< Ofs=616, W=4 Filter bank 5 register 1 */
  __RW struct CAN_F5R2_s        F5R2;            /*!< Ofs=620, W=4 Filter bank 5 register 2 */
  __RW struct CAN_F6R1_s        F6R1;            /*!< Ofs=624, W=4 Filter bank 6 register 1 */
  __RW struct CAN_F6R2_s        F6R2;            /*!< Ofs=628, W=4 Filter bank 6 register 2 */
  __RW struct CAN_F7R1_s        F7R1;            /*!< Ofs=632, W=4 Filter bank 7 register 1 */
  __RW struct CAN_F7R2_s        F7R2;            /*!< Ofs=636, W=4 Filter bank 7 register 2 */
  __RW struct CAN_F8R1_s        F8R1;            /*!< Ofs=640, W=4 Filter bank 8 register 1 */
  __RW struct CAN_F8R2_s        F8R2;            /*!< Ofs=644, W=4 Filter bank 8 register 2 */
  __RW struct CAN_F9R1_s        F9R1;            /*!< Ofs=648, W=4 Filter bank 9 register 1 */
  __RW struct CAN_F9R2_s        F9R2;            /*!< Ofs=652, W=4 Filter bank 9 register 2 */
  __RW struct CAN_F10R1_s       F10R1;           /*!< Ofs=656, W=4 Filter bank 10 register 1 */
  __RW struct CAN_F10R2_s       F10R2;           /*!< Ofs=660, W=4 Filter bank 10 register 2 */
  __RW struct CAN_F11R1_s       F11R1;           /*!< Ofs=664, W=4 Filter bank 11 register 1 */
  __RW struct CAN_F11R2_s       F11R2;           /*!< Ofs=668, W=4 Filter bank 11 register 2 */
  __RW struct CAN_F12R1_s       F12R1;           /*!< Ofs=672, W=4 Filter bank 4 register 1 */
  __RW struct CAN_F12R2_s       F12R2;           /*!< Ofs=676, W=4 Filter bank 12 register 2 */
  __RW struct CAN_F13R1_s       F13R1;           /*!< Ofs=680, W=4 Filter bank 13 register 1 */
  __RW struct CAN_F13R2_s       F13R2;           /*!< Ofs=684, W=4 Filter bank 13 register 2 */
  __RW struct CAN_F14R1_s       F14R1;           /*!< Ofs=688, W=4 Filter bank 14 register 1 */
  __RW struct CAN_F14R2_s       F14R2;           /*!< Ofs=692, W=4 Filter bank 14 register 2 */
  __RW struct CAN_F15R1_s       F15R1;           /*!< Ofs=696, W=4 Filter bank 15 register 1 */
  __RW struct CAN_F15R2_s       F15R2;           /*!< Ofs=700, W=4 Filter bank 15 register 2 */
  __RW struct CAN_F16R1_s       F16R1;           /*!< Ofs=704, W=4 Filter bank 16 register 1 */
  __RW struct CAN_F16R2_s       F16R2;           /*!< Ofs=708, W=4 Filter bank 16 register 2 */
  __RW struct CAN_F17R1_s       F17R1;           /*!< Ofs=712, W=4 Filter bank 17 register 1 */
  __RW struct CAN_F17R2_s       F17R2;           /*!< Ofs=716, W=4 Filter bank 17 register 2 */
  __RW struct CAN_F18R1_s       F18R1;           /*!< Ofs=720, W=4 Filter bank 18 register 1 */
  __RW struct CAN_F18R2_s       F18R2;           /*!< Ofs=724, W=4 Filter bank 18 register 2 */
  __RW struct CAN_F19R1_s       F19R1;           /*!< Ofs=728, W=4 Filter bank 19 register 1 */
  __RW struct CAN_F19R2_s       F19R2;           /*!< Ofs=732, W=4 Filter bank 19 register 2 */
  __RW struct CAN_F20R1_s       F20R1;           /*!< Ofs=736, W=4 Filter bank 20 register 1 */
  __RW struct CAN_F20R2_s       F20R2;           /*!< Ofs=740, W=4 Filter bank 20 register 2 */
  __RW struct CAN_F21R1_s       F21R1;           /*!< Ofs=744, W=4 Filter bank 21 register 1 */
  __RW struct CAN_F21R2_s       F21R2;           /*!< Ofs=748, W=4 Filter bank 21 register 2 */
  __RW struct CAN_F22R1_s       F22R1;           /*!< Ofs=752, W=4 Filter bank 22 register 1 */
  __RW struct CAN_F22R2_s       F22R2;           /*!< Ofs=756, W=4 Filter bank 22 register 2 */
  __RW struct CAN_F23R1_s       F23R1;           /*!< Ofs=760, W=4 Filter bank 23 register 1 */
  __RW struct CAN_F23R2_s       F23R2;           /*!< Ofs=764, W=4 Filter bank 23 register 2 */
  __RW struct CAN_F24R1_s       F24R1;           /*!< Ofs=768, W=4 Filter bank 24 register 1 */
  __RW struct CAN_F24R2_s       F24R2;           /*!< Ofs=772, W=4 Filter bank 24 register 2 */
  __RW struct CAN_F25R1_s       F25R1;           /*!< Ofs=776, W=4 Filter bank 25 register 1 */
  __RW struct CAN_F25R2_s       F25R2;           /*!< Ofs=780, W=4 Filter bank 25 register 2 */
  __RW struct CAN_F26R1_s       F26R1;           /*!< Ofs=784, W=4 Filter bank 26 register 1 */
  __RW struct CAN_F26R2_s       F26R2;           /*!< Ofs=788, W=4 Filter bank 26 register 2 */
  __RW struct CAN_F27R1_s       F27R1;           /*!< Ofs=792, W=4 Filter bank 27 register 1 */
  __RW struct CAN_F27R2_s       F27R2;           /*!< Ofs=796, W=4 Filter bank 27 register 2 */
} CAN_Type; /* W=800=0x320 */ 
typedef struct CRS_s {
  __RW struct CRS_CR_s          CR;              /*!< Ofs=  0, W=4 control register */
  __RW struct CRS_CFGR_s        CFGR;            /*!< Ofs=  4, W=4 configuration register */
  __RO struct CRS_ISR_s         ISR;             /*!< Ofs=  8, W=4 interrupt and status register */
  __RW struct CRS_ICR_s         ICR;             /*!< Ofs= 12, W=4 interrupt flag clear register */
} CRS_Type; /* W=16=0x10 */ 
typedef struct PWR_s {
  __RW struct PWR_CR_s          CR;              /*!< Ofs=  0, W=4 power control register */
  __RW struct PWR_CSR_s         CSR;             /*!< Ofs=  4, W=4 power control/status register */
} PWR_Type; /* W=8=0x8 */ 
typedef struct DAC_s {
  __RW struct DAC_CR_s          CR;              /*!< Ofs=  0, W=4 control register */
  __WO struct DAC_SWTRIGR_s     SWTRIGR;         /*!< Ofs=  4, W=4 software trigger register */
  __RW struct DAC_DHR12R1_s     DHR12R1;         /*!< Ofs=  8, W=4 channel1 12-bit right-aligned data holding register */
  __RW struct DAC_DHR12L1_s     DHR12L1;         /*!< Ofs= 12, W=4 channel1 12-bit left aligned data holding register */
  __RW struct DAC_DHR8R1_s      DHR8R1;          /*!< Ofs= 16, W=4 channel1 8-bit right aligned data holding register */
  __RW struct DAC_DHR12R2_s     DHR12R2;         /*!< Ofs= 20, W=4 DAC channel2 12-bit right-aligned data holding register */
  __RW struct DAC_DHR12L2_s     DHR12L2;         /*!< Ofs= 24, W=4 DAC channel2 12-bit left-aligned data holding register */
  __RW struct DAC_DHR8R2_s      DHR8R2;          /*!< Ofs= 28, W=4 DAC channel2 8-bit right-aligned data holding register */
  __RW struct DAC_DHR12RD_s     DHR12RD;         /*!< Ofs= 32, W=4 DHR12RD */
  __RW struct DAC_DHR12LD_s     DHR12LD;         /*!< Ofs= 36, W=4 Dual DAC 12-bit left-aligned data holding register */
  __RW struct DAC_DHR8RD_s      DHR8RD;          /*!< Ofs= 40, W=4 Dual DAC 8-bit right-aligned data holding register */
  __RO struct DAC_DOR1_s        DOR1;            /*!< Ofs= 44, W=4 channel1 data output register */
  __RO struct DAC_DOR2_s        DOR2;            /*!< Ofs= 48, W=4 DAC channel2 data output register */
  __RW struct DAC_SR_s          SR;              /*!< Ofs= 52, W=4 status register */
} DAC_Type; /* W=56=0x38 */ 
typedef struct CEC_s {
  __RW struct CEC_CR_s          CR;              /*!< Ofs=  0, W=4 control register */
  __RW struct CEC_CFGR_s        CFGR;            /*!< Ofs=  4, W=4 configuration register */
  __WO struct CEC_TXDR_s        TXDR;            /*!< Ofs=  8, W=4 Tx data register */
  __RO struct CEC_RXDR_s        RXDR;            /*!< Ofs= 12, W=4 Rx Data Register */
  __RW struct CEC_ISR_s         ISR;             /*!< Ofs= 16, W=4 Interrupt and Status Register */
  __RW struct CEC_IER_s         IER;             /*!< Ofs= 20, W=4 interrupt enable register */
} CEC_Type; /* W=24=0x18 */ 
typedef struct SYSCFG_s {
  __RW struct SYSCFG_SYSCFG_CFGR1_s SYSCFG_CFGR1;    /*!< Ofs=  0, W=4 configuration register 1 */
       uint32_t UNUSED0;        
  __RW struct SYSCFG_SYSCFG_EXTICR1_s SYSCFG_EXTICR1;  /*!< Ofs=  8, W=4 external interrupt configuration register 1 */
  __RW struct SYSCFG_SYSCFG_EXTICR2_s SYSCFG_EXTICR2;  /*!< Ofs= 12, W=4 external interrupt configuration register 2 */
  __RW struct SYSCFG_SYSCFG_EXTICR3_s SYSCFG_EXTICR3;  /*!< Ofs= 16, W=4 external interrupt configuration register 3 */
  __RW struct SYSCFG_SYSCFG_EXTICR4_s SYSCFG_EXTICR4;  /*!< Ofs= 20, W=4 external interrupt configuration register 4 */
  __RW struct SYSCFG_SYSCFG_CFGR2_s SYSCFG_CFGR2;    /*!< Ofs= 24, W=4 configuration register 2 */
  __RW struct SYSCFG_COMP_CSR_s COMP_CSR;        /*!< Ofs= 28, W=4 control and status register */
} SYSCFG_Type; /* W=32=0x20 */ 
typedef struct EXTI_s {
  __RW struct EXTI_IMR_s        IMR;             /*!< Ofs=  0, W=4 Interrupt mask register (EXTI_IMR) */
  __RW struct EXTI_EMR_s        EMR;             /*!< Ofs=  4, W=4 Event mask register (EXTI_EMR) */
  __RW struct EXTI_RTSR_s       RTSR;            /*!< Ofs=  8, W=4 Rising Trigger selection register (EXTI_RTSR) */
  __RW struct EXTI_FTSR_s       FTSR;            /*!< Ofs= 12, W=4 Falling Trigger selection register (EXTI_FTSR) */
  __RW struct EXTI_SWIER_s      SWIER;           /*!< Ofs= 16, W=4 Software interrupt event register (EXTI_SWIER) */
  __RW struct EXTI_PR_s         PR;              /*!< Ofs= 20, W=4 Pending register (EXTI_PR) */
} EXTI_Type; /* W=24=0x18 */ 
typedef struct ADC_s {
  __RW struct ADC_ISR_s         ISR;             /*!< Ofs=  0, W=4 interrupt and status register */
  __RW struct ADC_IER_s         IER;             /*!< Ofs=  4, W=4 interrupt enable register */
  __RW struct ADC_CR_s          CR;              /*!< Ofs=  8, W=4 control register */
  __RW struct ADC_CFGR1_s       CFGR1;           /*!< Ofs= 12, W=4 configuration register 1 */
  __RW struct ADC_CFGR2_s       CFGR2;           /*!< Ofs= 16, W=4 configuration register 2 */
  __RW struct ADC_SMPR_s        SMPR;            /*!< Ofs= 20, W=4 sampling time register */
       uint32_t UNUSED0[2];     
  __RW struct ADC_TR_s          TR;              /*!< Ofs= 32, W=4 watchdog threshold register */
       uint32_t UNUSED1;        
  __RW struct ADC_CHSELR_s      CHSELR;          /*!< Ofs= 40, W=4 channel selection register */
       uint32_t UNUSED2[5];     
  __RO struct ADC_DR_s          DR;              /*!< Ofs= 64, W=4 data register */
       uint32_t UNUSED3[177];   
  __RW struct ADC_CCR_s         CCR;             /*!< Ofs=776, W=4 common configuration register */
} ADC_Type; /* W=780=0x30C */ 
typedef struct SPI_s {
  __RW struct SPI_CR1_s         CR1;             /*!< Ofs=  0, W=4 control register 1 */
  __RW struct SPI_CR2_s         CR2;             /*!< Ofs=  4, W=4 control register 2 */
  __RW struct SPI_SR_s          SR;              /*!< Ofs=  8, W=4 status register */
  __RW struct SPI_DR_s          DR;              /*!< Ofs= 12, W=4 data register */
  __RW struct SPI_CRCPR_s       CRCPR;           /*!< Ofs= 16, W=4 CRC polynomial register */
  __RO struct SPI_RXCRCR_s      RXCRCR;          /*!< Ofs= 20, W=4 RX CRC register */
  __RO struct SPI_TXCRCR_s      TXCRCR;          /*!< Ofs= 24, W=4 TX CRC register */
  __RW struct SPI_I2SCFGR_s     I2SCFGR;         /*!< Ofs= 28, W=4 I2S configuration register */
  __RW struct SPI_I2SPR_s       I2SPR;           /*!< Ofs= 32, W=4 I2S prescaler register */
} SPI_Type; /* W=36=0x24 */ 
typedef struct USART_s {
  __RW struct USART_CR1_s       CR1;             /*!< Ofs=  0, W=4 Control register 1 */
  __RW struct USART_CR2_s       CR2;             /*!< Ofs=  4, W=4 Control register 2 */
  __RW struct USART_CR3_s       CR3;             /*!< Ofs=  8, W=4 Control register 3 */
  __RW struct USART_BRR_s       BRR;             /*!< Ofs= 12, W=4 Baud rate register */
  __RW struct USART_GTPR_s      GTPR;            /*!< Ofs= 16, W=4 Guard time and prescaler register */
  __RW struct USART_RTOR_s      RTOR;            /*!< Ofs= 20, W=4 Receiver timeout register */
  __RW struct USART_RQR_s       RQR;             /*!< Ofs= 24, W=4 Request register */
  __RO struct USART_ISR_s       ISR;             /*!< Ofs= 28, W=4 Interrupt & status register */
  __RW struct USART_ICR_s       ICR;             /*!< Ofs= 32, W=4 Interrupt flag clear register */
  __RO struct USART_RDR_s       RDR;             /*!< Ofs= 36, W=4 Receive data register */
  __RW struct USART_TDR_s       TDR;             /*!< Ofs= 40, W=4 Transmit data register */
} USART_Type; /* W=44=0x2C */ 
typedef struct DBGMCU_s {
  __RO struct DBGMCU_IDCODE_s   IDCODE;          /*!< Ofs=  0, W=4 MCU Device ID Code Register */
  __RW struct DBGMCU_CR_s       CR;              /*!< Ofs=  4, W=4 Debug MCU Configuration Register */
  __RW struct DBGMCU_APB1_FZ_s  APB1_FZ;         /*!< Ofs=  8, W=4 Debug MCU APB1 freeze register */
  __RW struct DBGMCU_APB2_FZ_s  APB2_FZ;         /*!< Ofs= 12, W=4 Debug MCU APB2 freeze register */
} DBGMCU_Type; /* W=16=0x10 */ 
typedef struct DMA_s {
  __RO struct DMA_ISR_s         ISR;             /*!< Ofs=  0, W=4 DMA interrupt status register (DMA_ISR) */
  __WO struct DMA_IFCR_s        IFCR;            /*!< Ofs=  4, W=4 DMA interrupt flag clear register (DMA_IFCR) */
  __RW struct DMA_CCR1_s        CCR1;            /*!< Ofs=  8, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR1_s      CNDTR1;          /*!< Ofs= 12, W=4 DMA channel 1 number of data register */
  __RW struct DMA_CPAR1_s       CPAR1;           /*!< Ofs= 16, W=4 DMA channel 1 peripheral address register */
  __RW struct DMA_CMAR1_s       CMAR1;           /*!< Ofs= 20, W=4 DMA channel 1 memory address register */
       uint32_t UNUSED0;        
  __RW struct DMA_CCR2_s        CCR2;            /*!< Ofs= 28, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR2_s      CNDTR2;          /*!< Ofs= 32, W=4 DMA channel 2 number of data register */
  __RW struct DMA_CPAR2_s       CPAR2;           /*!< Ofs= 36, W=4 DMA channel 2 peripheral address register */
  __RW struct DMA_CMAR2_s       CMAR2;           /*!< Ofs= 40, W=4 DMA channel 2 memory address register */
       uint32_t UNUSED1;        
  __RW struct DMA_CCR3_s        CCR3;            /*!< Ofs= 48, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR3_s      CNDTR3;          /*!< Ofs= 52, W=4 DMA channel 3 number of data register */
  __RW struct DMA_CPAR3_s       CPAR3;           /*!< Ofs= 56, W=4 DMA channel 3 peripheral address register */
  __RW struct DMA_CMAR3_s       CMAR3;           /*!< Ofs= 60, W=4 DMA channel 3 memory address register */
       uint32_t UNUSED2;        
  __RW struct DMA_CCR4_s        CCR4;            /*!< Ofs= 68, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR4_s      CNDTR4;          /*!< Ofs= 72, W=4 DMA channel 4 number of data register */
  __RW struct DMA_CPAR4_s       CPAR4;           /*!< Ofs= 76, W=4 DMA channel 4 peripheral address register */
  __RW struct DMA_CMAR4_s       CMAR4;           /*!< Ofs= 80, W=4 DMA channel 4 memory address register */
       uint32_t UNUSED3;        
  __RW struct DMA_CCR5_s        CCR5;            /*!< Ofs= 88, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR5_s      CNDTR5;          /*!< Ofs= 92, W=4 DMA channel 5 number of data register */
  __RW struct DMA_CPAR5_s       CPAR5;           /*!< Ofs= 96, W=4 DMA channel 5 peripheral address register */
  __RW struct DMA_CMAR5_s       CMAR5;           /*!< Ofs=100, W=4 DMA channel 5 memory address register */
       uint32_t UNUSED4;        
  __RW struct DMA_CCR6_s        CCR6;            /*!< Ofs=108, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR6_s      CNDTR6;          /*!< Ofs=112, W=4 DMA channel 6 number of data register */
  __RW struct DMA_CPAR6_s       CPAR6;           /*!< Ofs=116, W=4 DMA channel 6 peripheral address register */
  __RW struct DMA_CMAR6_s       CMAR6;           /*!< Ofs=120, W=4 DMA channel 6 memory address register */
       uint32_t UNUSED5;        
  __RW struct DMA_CCR7_s        CCR7;            /*!< Ofs=128, W=4 DMA channel configuration register (DMA_CCR) */
  __RW struct DMA_CNDTR7_s      CNDTR7;          /*!< Ofs=132, W=4 DMA channel 7 number of data register */
  __RW struct DMA_CPAR7_s       CPAR7;           /*!< Ofs=136, W=4 DMA channel 7 peripheral address register */
  __RW struct DMA_CMAR7_s       CMAR7;           /*!< Ofs=140, W=4 DMA channel 7 memory address register */
} DMA_Type; /* W=144=0x90 */ 
typedef struct RCC_s {
  __RW struct RCC_CR_s          CR;              /*!< Ofs=  0, W=4 Clock control register */
  __RW struct RCC_CFGR_s        CFGR;            /*!< Ofs=  4, W=4 Clock configuration register (RCC_CFGR) */
  __RW struct RCC_CIR_s         CIR;             /*!< Ofs=  8, W=4 Clock interrupt register (RCC_CIR) */
  __RW struct RCC_APB2RSTR_s    APB2RSTR;        /*!< Ofs= 12, W=4 APB2 peripheral reset register (RCC_APB2RSTR) */
  __RW struct RCC_APB1RSTR_s    APB1RSTR;        /*!< Ofs= 16, W=4 APB1 peripheral reset register (RCC_APB1RSTR) */
  __RW struct RCC_AHBENR_s      AHBENR;          /*!< Ofs= 20, W=4 AHB Peripheral Clock enable register (RCC_AHBENR) */
  __RW struct RCC_APB2ENR_s     APB2ENR;         /*!< Ofs= 24, W=4 APB2 peripheral clock enable register (RCC_APB2ENR) */
  __RW struct RCC_APB1ENR_s     APB1ENR;         /*!< Ofs= 28, W=4 APB1 peripheral clock enable register (RCC_APB1ENR) */
  __RW struct RCC_BDCR_s        BDCR;            /*!< Ofs= 32, W=4 Backup domain control register (RCC_BDCR) */
  __RW struct RCC_CSR_s         CSR;             /*!< Ofs= 36, W=4 Control/status register (RCC_CSR) */
  __RW struct RCC_AHBRSTR_s     AHBRSTR;         /*!< Ofs= 40, W=4 AHB peripheral reset register */
  __RW struct RCC_CFGR2_s       CFGR2;           /*!< Ofs= 44, W=4 Clock configuration register 2 */
  __RW struct RCC_CFGR3_s       CFGR3;           /*!< Ofs= 48, W=4 Clock configuration register 3 */
  __RW struct RCC_CR2_s         CR2;             /*!< Ofs= 52, W=4 Clock control register 2 */
} RCC_Type; /* W=56=0x38 */ 
typedef struct Flash_s {
  __RW struct Flash_ACR_s       ACR;             /*!< Ofs=  0, W=4 Flash access control register */
  __WO struct Flash_KEYR_s      KEYR;            /*!< Ofs=  4, W=4 Flash key register */
  __WO struct Flash_OPTKEYR_s   OPTKEYR;         /*!< Ofs=  8, W=4 Flash option key register */
  __RW struct Flash_SR_s        SR;              /*!< Ofs= 12, W=4 Flash status register */
  __RW struct Flash_CR_s        CR;              /*!< Ofs= 16, W=4 Flash control register */
  __WO struct Flash_AR_s        AR;              /*!< Ofs= 20, W=4 Flash address register */
       uint32_t UNUSED0;        
  __RO struct Flash_OBR_s       OBR;             /*!< Ofs= 28, W=4 Option byte register */
  __RO struct Flash_WRPR_s      WRPR;            /*!< Ofs= 32, W=4 Write protection register */
} Flash_Type; /* W=36=0x24 */ 
typedef struct CRC_s {
  __RW struct CRC_DR_s          DR;              /*!< Ofs=  0, W=4 Data register */
  __RW struct CRC_IDR_s         IDR;             /*!< Ofs=  4, W=4 Independent data register */
  __RW struct CRC_CR_s          CR;              /*!< Ofs=  8, W=4 Control register */
  __RW struct CRC_INIT_s        INIT;            /*!< Ofs= 12, W=4 Initial CRC value */
} CRC_Type; /* W=16=0x10 */ 
typedef struct TSC_s {
  __RW struct TSC_CR_s          CR;              /*!< Ofs=  0, W=4 control register */
  __RW struct TSC_IER_s         IER;             /*!< Ofs=  4, W=4 interrupt enable register */
  __RW struct TSC_ICR_s         ICR;             /*!< Ofs=  8, W=4 interrupt clear register */
  __RW struct TSC_ISR_s         ISR;             /*!< Ofs= 12, W=4 interrupt status register */
  __RW struct TSC_IOHCR_s       IOHCR;           /*!< Ofs= 16, W=4 I/O hysteresis control register */
       uint32_t UNUSED0;        
  __RW struct TSC_IOASCR_s      IOASCR;          /*!< Ofs= 24, W=4 I/O analog switch control register */
       uint32_t UNUSED1;        
  __RW struct TSC_IOSCR_s       IOSCR;           /*!< Ofs= 32, W=4 I/O sampling control register */
       uint32_t UNUSED2;        
  __RW struct TSC_IOCCR_s       IOCCR;           /*!< Ofs= 40, W=4 I/O channel control register */
       uint32_t UNUSED3;        
  __RW struct TSC_IOGCSR_s      IOGCSR;          /*!< Ofs= 48, W=4 I/O group control status register */
  __RO struct TSC_IOG1CR_s      IOG1CR;          /*!< Ofs= 52, W=4 I/O group x counter register */
  __RO struct TSC_IOG2CR_s      IOG2CR;          /*!< Ofs= 56, W=4 I/O group x counter register */
  __RO struct TSC_IOG3CR_s      IOG3CR;          /*!< Ofs= 60, W=4 I/O group x counter register */
  __RO struct TSC_IOG4CR_s      IOG4CR;          /*!< Ofs= 64, W=4 I/O group x counter register */
  __RO struct TSC_IOG5CR_s      IOG5CR;          /*!< Ofs= 68, W=4 I/O group x counter register */
  __RO struct TSC_IOG6CR_s      IOG6CR;          /*!< Ofs= 72, W=4 I/O group x counter register */
} TSC_Type; /* W=76=0x4C */ 
#if 0
typedef struct GPIO_s {
  __RW struct GPIO_MODER_s      MODER;           /*!< Ofs=  0, W=4 GPIO port mode register */
  __RW struct GPIO_OTYPER_s     OTYPER;          /*!< Ofs=  4, W=4 GPIO port output type register */
  __RW struct GPIO_OSPEEDR_s    OSPEEDR;         /*!< Ofs=  8, W=4 GPIO port output speed register */
  __RW struct GPIO_PUPDR_s      PUPDR;           /*!< Ofs= 12, W=4 GPIO port pull-up/pull-down register */
  __RO struct GPIO_IDR_s        IDR;             /*!< Ofs= 16, W=4 GPIO port input data register */
  __RW struct GPIO_ODR_s        ODR;             /*!< Ofs= 20, W=4 GPIO port output data register */
  __WO struct GPIO_BSRR_s       BSRR;            /*!< Ofs= 24, W=4 GPIO port bit set/reset register */
  __RW struct GPIO_LCKR_s       LCKR;            /*!< Ofs= 28, W=4 GPIO port configuration lock register */
  __RW struct GPIO_AFRL_s       AFRL;            /*!< Ofs= 32, W=4 GPIO alternate function low register */
  __RW struct GPIO_AFRH_s       AFRH;            /*!< Ofs= 36, W=4 GPIO alternate function high register */
  __WO struct GPIO_BRR_s        BRR;             /*!< Ofs= 40, W=4 Port bit reset register */
} GPIO_Type; /* W=44=0x2C */ 
#else
#endif
typedef struct {
  __RW uint32_t MODER;        /*!< GPIO port mode register,                                  Address offset: 0x00 */
  __RW uint16_t OTYPER;       /*!< GPIO port output type register,                           Address offset: 0x04 */
  uint16_t RESERVED0;         /*!< Reserved,                                                                 0x06 */
  __RW uint32_t OSPEEDR;      /*!< GPIO port output speed register,                          Address offset: 0x08 */
  __RW uint32_t PUPDR;        /*!< GPIO port pull-up/pull-down register,                     Address offset: 0x0C */
  __RW uint16_t IDR;          /*!< GPIO port input data register,                            Address offset: 0x10 */
  uint16_t RESERVED1;         /*!< Reserved,                                                                 0x12 */
  __RW uint16_t ODR;          /*!< GPIO port output data register,                           Address offset: 0x14 */
  uint16_t RESERVED2;         /*!< Reserved,                                                                 0x16 */
  __RW uint32_t BSRR;         /*!< GPIO port bit set/reset registerBSRR,                     Address offset: 0x18 */
  __RW uint32_t LCKR;         /*!< GPIO port configuration lock register,                    Address offset: 0x1C */
  __RW uint32_t AFR[2];       /*!< GPIO alternate function low register,                Address offset: 0x20-0x24 */
  __RW uint16_t BRR;          /*!< GPIO bit reset register,                                  Address offset: 0x28 */
  uint16_t RESERVED3;         /*!< Reserved,                                                                 0x2A */
} GPIO_Type;
#ifdef __cplusplus
static TIM_Type               & TIM2                   = * reinterpret_cast<TIM_Type               * const> (0x40000000u); /*!< General-purpose-timers */
static TIM_Type               & TIM3                   = * reinterpret_cast<TIM_Type               * const> (0x40000400u); /*!< General-purpose-timers */
static TIM_Type               & TIM6                   = * reinterpret_cast<TIM_Type               * const> (0x40001000u); /*!< Basic-timers */
static TIM_Type               & TIM7                   = * reinterpret_cast<TIM_Type               * const> (0x40001400u); /*!< Basic-timers */
static TIM_Type               & TIM14                  = * reinterpret_cast<TIM_Type               * const> (0x40002000u); /*!< General-purpose-timers */
static RTC_Type               & RTC                    = * reinterpret_cast<RTC_Type               * const> (0x40002800u); /*!< Real-time clock */
static WWDG_Type              & WWDG                   = * reinterpret_cast<WWDG_Type              * const> (0x40002C00u); /*!< Window watchdog */
static IWDG_Type              & IWDG                   = * reinterpret_cast<IWDG_Type              * const> (0x40003000u); /*!< Independent watchdog */
static SPI_Type               & SPI2                   = * reinterpret_cast<SPI_Type               * const> (0x40003800u); /*!< Serial peripheral interface */
static USART_Type             & USART2                 = * reinterpret_cast<USART_Type             * const> (0x40004400u); /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             & USART3                 = * reinterpret_cast<USART_Type             * const> (0x40004800u); /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             & USART4                 = * reinterpret_cast<USART_Type             * const> (0x40004C00u); /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             & USART5                 = * reinterpret_cast<USART_Type             * const> (0x40005000u); /*!< Universal synchronous asynchronous receiver transmitter */
static I2C_Type               & I2C1                   = * reinterpret_cast<I2C_Type               * const> (0x40005400u); /*!< Inter-integrated circuit */
static I2C_Type               & I2C2                   = * reinterpret_cast<I2C_Type               * const> (0x40005800u); /*!< Inter-integrated circuit */
static USB_Type               & USB                    = * reinterpret_cast<USB_Type               * const> (0x40005C00u); /*!< Universal serial bus full-speed device interface */
static CAN_Type               & CAN                    = * reinterpret_cast<CAN_Type               * const> (0x40006400u); /*!< Controller area network */
static CRS_Type               & CRS                    = * reinterpret_cast<CRS_Type               * const> (0x40006C00u); /*!< Clock recovery system */
static PWR_Type               & PWR                    = * reinterpret_cast<PWR_Type               * const> (0x40007000u); /*!< Power control */
static DAC_Type               & DAC                    = * reinterpret_cast<DAC_Type               * const> (0x40007400u); /*!< Digital-to-analog converter */
static CEC_Type               & CEC                    = * reinterpret_cast<CEC_Type               * const> (0x40007800u); /*!< HDMI-CEC controller */
static SYSCFG_Type            & SYSCFG_COMP            = * reinterpret_cast<SYSCFG_Type            * const> (0x40010000u); /*!< System configuration controller */
static EXTI_Type              & EXTI                   = * reinterpret_cast<EXTI_Type              * const> (0x40010400u); /*!< External interrupt/event controller */
static USART_Type             & USART6                 = * reinterpret_cast<USART_Type             * const> (0x40011400u); /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             & USART7                 = * reinterpret_cast<USART_Type             * const> (0x40011800u); /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             & USART8                 = * reinterpret_cast<USART_Type             * const> (0x40011C00u); /*!< Universal synchronous asynchronous receiver transmitter */
static ADC_Type               & ADC                    = * reinterpret_cast<ADC_Type               * const> (0x40012400u); /*!< Analog-to-digital converter */
static TIM_Type               & TIM1                   = * reinterpret_cast<TIM_Type               * const> (0x40012C00u); /*!< Advanced-timers */
static SPI_Type               & SPI1                   = * reinterpret_cast<SPI_Type               * const> (0x40013000u); /*!< Serial peripheral interface */
static USART_Type             & USART1                 = * reinterpret_cast<USART_Type             * const> (0x40013800u); /*!< Universal synchronous asynchronous receiver transmitter */
static TIM_Type               & TIM15                  = * reinterpret_cast<TIM_Type               * const> (0x40014000u); /*!< General-purpose-timers */
static TIM_Type               & TIM16                  = * reinterpret_cast<TIM_Type               * const> (0x40014400u); /*!< General-purpose-timers */
static TIM_Type               & TIM17                  = * reinterpret_cast<TIM_Type               * const> (0x40014800u); /*!< General-purpose-timers */
static DBGMCU_Type            & DBGMCU                 = * reinterpret_cast<DBGMCU_Type            * const> (0x40015800u); /*!< Debug support */
static DMA_Type               & DMA1                   = * reinterpret_cast<DMA_Type               * const> (0x40020000u); /*!< DMA controller */
static DMA_Type               & DMA2                   = * reinterpret_cast<DMA_Type               * const> (0x40020400u); /*!< DMA controller */
static RCC_Type               & RCC                    = * reinterpret_cast<RCC_Type               * const> (0x40021000u); /*!< Reset and clock control */
static Flash_Type             & Flash                  = * reinterpret_cast<Flash_Type             * const> (0x40022000u); /*!< Flash */
static CRC_Type               & CRC                    = * reinterpret_cast<CRC_Type               * const> (0x40023000u); /*!< cyclic redundancy check calculation unit */
static TSC_Type               & TSC                    = * reinterpret_cast<TSC_Type               * const> (0x40024000u); /*!< Touch sensing controller */
static GPIO_Type              & GPIOA                  = * reinterpret_cast<GPIO_Type              * const> (0x48000000u); /*!< General-purpose I/Os */
static GPIO_Type              & GPIOB                  = * reinterpret_cast<GPIO_Type              * const> (0x48000400u); /*!< General-purpose I/Os */
static GPIO_Type              & GPIOC                  = * reinterpret_cast<GPIO_Type              * const> (0x48000800u); /*!< General-purpose I/Os */
static GPIO_Type              & GPIOD                  = * reinterpret_cast<GPIO_Type              * const> (0x48000C00u); /*!< General-purpose I/Os */
static GPIO_Type              & GPIOE                  = * reinterpret_cast<GPIO_Type              * const> (0x48001000u); /*!< General-purpose I/Os */
static GPIO_Type              & GPIOF                  = * reinterpret_cast<GPIO_Type              * const> (0x48001400u); /*!< General-purpose I/Os */
#else // __cplusplus
static TIM_Type               * const TIM2                   = (TIM_Type               * const) 0x40000000u; /*!< General-purpose-timers */
static TIM_Type               * const TIM3                   = (TIM_Type               * const) 0x40000400u; /*!< General-purpose-timers */
static TIM_Type               * const TIM6                   = (TIM_Type               * const) 0x40001000u; /*!< Basic-timers */
static TIM_Type               * const TIM7                   = (TIM_Type               * const) 0x40001400u; /*!< Basic-timers */
static TIM_Type               * const TIM14                  = (TIM_Type               * const) 0x40002000u; /*!< General-purpose-timers */
static RTC_Type               * const RTC                    = (RTC_Type               * const) 0x40002800u; /*!< Real-time clock */
static WWDG_Type              * const WWDG                   = (WWDG_Type              * const) 0x40002C00u; /*!< Window watchdog */
static IWDG_Type              * const IWDG                   = (IWDG_Type              * const) 0x40003000u; /*!< Independent watchdog */
static SPI_Type               * const SPI2                   = (SPI_Type               * const) 0x40003800u; /*!< Serial peripheral interface */
static USART_Type             * const USART2                 = (USART_Type             * const) 0x40004400u; /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             * const USART3                 = (USART_Type             * const) 0x40004800u; /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             * const USART4                 = (USART_Type             * const) 0x40004C00u; /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             * const USART5                 = (USART_Type             * const) 0x40005000u; /*!< Universal synchronous asynchronous receiver transmitter */
static I2C_Type               * const I2C1                   = (I2C_Type               * const) 0x40005400u; /*!< Inter-integrated circuit */
static I2C_Type               * const I2C2                   = (I2C_Type               * const) 0x40005800u; /*!< Inter-integrated circuit */
static USB_Type               * const USB                    = (USB_Type               * const) 0x40005C00u; /*!< Universal serial bus full-speed device interface */
static CAN_Type               * const CAN                    = (CAN_Type               * const) 0x40006400u; /*!< Controller area network */
static CRS_Type               * const CRS                    = (CRS_Type               * const) 0x40006C00u; /*!< Clock recovery system */
static PWR_Type               * const PWR                    = (PWR_Type               * const) 0x40007000u; /*!< Power control */
static DAC_Type               * const DAC                    = (DAC_Type               * const) 0x40007400u; /*!< Digital-to-analog converter */
static CEC_Type               * const CEC                    = (CEC_Type               * const) 0x40007800u; /*!< HDMI-CEC controller */
static SYSCFG_Type            * const SYSCFG_COMP            = (SYSCFG_Type            * const) 0x40010000u; /*!< System configuration controller */
static EXTI_Type              * const EXTI                   = (EXTI_Type              * const) 0x40010400u; /*!< External interrupt/event controller */
static USART_Type             * const USART6                 = (USART_Type             * const) 0x40011400u; /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             * const USART7                 = (USART_Type             * const) 0x40011800u; /*!< Universal synchronous asynchronous receiver transmitter */
static USART_Type             * const USART8                 = (USART_Type             * const) 0x40011C00u; /*!< Universal synchronous asynchronous receiver transmitter */
static ADC_Type               * const ADC                    = (ADC_Type               * const) 0x40012400u; /*!< Analog-to-digital converter */
static TIM_Type               * const TIM1                   = (TIM_Type               * const) 0x40012C00u; /*!< Advanced-timers */
static SPI_Type               * const SPI1                   = (SPI_Type               * const) 0x40013000u; /*!< Serial peripheral interface */
static USART_Type             * const USART1                 = (USART_Type             * const) 0x40013800u; /*!< Universal synchronous asynchronous receiver transmitter */
static TIM_Type               * const TIM15                  = (TIM_Type               * const) 0x40014000u; /*!< General-purpose-timers */
static TIM_Type               * const TIM16                  = (TIM_Type               * const) 0x40014400u; /*!< General-purpose-timers */
static TIM_Type               * const TIM17                  = (TIM_Type               * const) 0x40014800u; /*!< General-purpose-timers */
static DBGMCU_Type            * const DBGMCU                 = (DBGMCU_Type            * const) 0x40015800u; /*!< Debug support */
static DMA_Type               * const DMA1                   = (DMA_Type               * const) 0x40020000u; /*!< DMA controller */
static DMA_Type               * const DMA2                   = (DMA_Type               * const) 0x40020400u; /*!< DMA controller */
static RCC_Type               * const RCC                    = (RCC_Type               * const) 0x40021000u; /*!< Reset and clock control */
static Flash_Type             * const Flash                  = (Flash_Type             * const) 0x40022000u; /*!< Flash */
static CRC_Type               * const CRC                    = (CRC_Type               * const) 0x40023000u; /*!< cyclic redundancy check calculation unit */
static TSC_Type               * const TSC                    = (TSC_Type               * const) 0x40024000u; /*!< Touch sensing controller */
static GPIO_Type              * const GPIOA                  = (GPIO_Type              * const) 0x48000000u; /*!< General-purpose I/Os */
static GPIO_Type              * const GPIOB                  = (GPIO_Type              * const) 0x48000400u; /*!< General-purpose I/Os */
static GPIO_Type              * const GPIOC                  = (GPIO_Type              * const) 0x48000800u; /*!< General-purpose I/Os */
static GPIO_Type              * const GPIOD                  = (GPIO_Type              * const) 0x48000C00u; /*!< General-purpose I/Os */
static GPIO_Type              * const GPIOE                  = (GPIO_Type              * const) 0x48001000u; /*!< General-purpose I/Os */
static GPIO_Type              * const GPIOF                  = (GPIO_Type              * const) 0x48001400u; /*!< General-purpose I/Os */
#endif // __cplusplus

#if 0  // koliduje s CMSIS a chybi potrebna systemova preruseni
typedef enum IRQn {
  WWDG_IRQn                = 0, /*!< Window Watchdog interrupt */
  PVD_IRQn                 = 1, /*!< PVD and VDDIO2 supply comparator interrupt */
  RTC_IRQn                 = 2, /*!< RTC interrupts */
  FLASH_IRQn               = 3, /*!< Flash global interrupt */
  RCC_CRS_IRQn             = 4, /*!< RCC and CRS global interrupts */
  EXTI0_1_IRQn             = 5, /*!< EXTI Line[1:0] interrupts */
  EXTI2_3_IRQn             = 6, /*!< EXTI Line[3:2] interrupts */
  EXTI4_15_IRQn            = 7, /*!< EXTI Line15 and EXTI4 interrupts */
  TSC_IRQn                 = 8, /*!< Touch sensing interrupt */
  DMA1_CH1_IRQn            = 9, /*!< DMA1 channel 1 interrupt */
  DMA1_CH2_3_DMA2_CH1_2_IRQn = 10, /*!< DMA1 channel 2 and 3 and DMA2 channel 1 and 2 interrupt */
  DMA1_CH4_5_6_7_DMA2_CH3_4_5_IRQn = 11, /*!< DMA1 channel 4, 5, 6 and 7 and DMA2 channel 3, 4 and 5 interrupts */
  ADC_COMP_IRQn            = 12, /*!< ADC and comparator interrupts */
  TIM1_BRK_UP_TRG_COM_IRQn = 13, /*!< TIM1 break, update, trigger and commutation interrupt */
  TIM1_CC_IRQn             = 14, /*!< TIM1 Capture Compare interrupt */
  TIM2_IRQn                = 15, /*!< TIM2 global interrupt */
  TIM3_IRQn                = 16, /*!< TIM3 global interrupt */
  TIM6_DAC_IRQn            = 17, /*!< TIM6 global interrupt and DAC underrun interrupt */
  TIM7_IRQn                = 18, /*!< TIM7 global interrupt */
  TIM14_IRQn               = 19, /*!< TIM14 global interrupt */
  TIM15_IRQn               = 20, /*!< TIM15 global interrupt */
  TIM16_IRQn               = 21, /*!< TIM16 global interrupt */
  TIM17_IRQn               = 22, /*!< TIM17 global interrupt */
  I2C1_IRQn                = 23, /*!< I2C1 global interrupt */
  I2C2_IRQn                = 24, /*!< I2C2 global interrupt */
  SPI1_IRQn                = 25, /*!< SPI1_global_interrupt */
  SPI2_IRQn                = 26, /*!< SPI2 global interrupt */
  USART1_IRQn              = 27, /*!< USART1 global interrupt */
  USART2_IRQn              = 28, /*!< USART2 global interrupt */
  USART3_4_5_6_7_8_IRQn    = 29, /*!< USART3, USART4, USART5, USART6, USART7, USART8 global interrupt */
  CEC_CAN_IRQn             = 30, /*!< CEC and CAN global interrupt */
  USB_IRQn                 = 31, /*!< USB global interrupt */
} IRQn_Type;
#endif // 0

#ifdef __cplusplus
};
#endif // __cplusplus
#endif // STM32F0x1_GENERATED_HEADER

#ifdef TEST
#include <assert.h>
static void size_test (void) {
  assert (sizeof(TIM_Type) == 84);
  assert (sizeof(RTC_Type) == 100);
  assert (sizeof(WWDG_Type) == 12);
  assert (sizeof(IWDG_Type) == 20);
  assert (sizeof(I2C_Type) == 44);
  assert (sizeof(USB_Type) == 92);
  assert (sizeof(CAN_Type) == 800);
  assert (sizeof(CRS_Type) == 16);
  assert (sizeof(PWR_Type) == 8);
  assert (sizeof(DAC_Type) == 56);
  assert (sizeof(CEC_Type) == 24);
  assert (sizeof(SYSCFG_Type) == 32);
  assert (sizeof(EXTI_Type) == 24);
  assert (sizeof(ADC_Type) == 780);
  assert (sizeof(SPI_Type) == 36);
  assert (sizeof(USART_Type) == 44);
  assert (sizeof(DBGMCU_Type) == 16);
  assert (sizeof(DMA_Type) == 144);
  assert (sizeof(RCC_Type) == 56);
  assert (sizeof(Flash_Type) == 36);
  assert (sizeof(CRC_Type) == 16);
  assert (sizeof(TSC_Type) == 76);
  assert (sizeof(GPIO_Type) == 44);
}
#endif // TEST

