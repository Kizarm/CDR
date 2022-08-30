#ifndef _MAIN_H
#define _MAIN_H
#include "system.h"
#include "goertzel.h"
#include "generator.h"
#include "dac_class.h"
#include "adc_class.h"
#include "io_manip.h"
#include "usart.h"

/** @mainpage Selektivní volba jako test konstantních výrazů.
 V devadesátých létech minulého století jsem dělal informatika u hasičů na Kladně
 a v nových poměrech jsme si udělali s kolegy výlet do Vídně. Z radiostanice se
 ozývalo podivné cvrlikání. Kolega byl radioamatér, tak nám vysvětlil, že je to
 selektivní volba, kterou lze adresovat jednotlivé radiostanice. Tedy něco telefonní
 číslo vytáčené DTMF. Když veliteli došlo jaké by to mohlo mít možnosti, chtěl to také.
 Radiostanice Tesla tohle neuměly i když nějakou primitivní selektivu měly,
 tak se s prvotním nadšením nakoupila rádia, která to uměla. Jen tak pro zajímavost -
 ten kolega radioamatér, který o tom něco málo z doslechu věděl, byl pověřen aby
 sestavil číslovací plán pro celou republiku (i když na to byli na vnitru specialisté).
 A protože to znal jen z doslechu, použil volbu ZVEI i když se v okolních státech
 používala volba jiná. Zůstalo to tak dodnes, jen se analogová rádia už moc nepoužívají.
 
 No a na nás informaticích bylo zapracovat tohle do informačního systému. Tedy propojit
 to s počítačem. Což znamenalo použít jakoukoli radiostanici, která měla vyvedeny potřebné
 signály - analogové audio dovnitř a ven plus zaklíčování (PTT). K tomu pak připojit
 nějakou chytrou krabičku, která by zajišťovala propojení se sériovým portem PC.
 Hotové řešení na trhu tehdy sice bylo, ale z mnoha důvodů (cena, množství dalších nepotřebných funkcí,
 divné rozhraní) nevyhovovalo. Generovat audio tón jednočipem jsme tehdy už uměli, byly to sice
 jen obdélníky s frekvencí jen přibližnou, ale to nevadilo, rádio stejně ven harmonické nepustí
 a frekvence se zase tolik nelišily. Problém byl v dekodéru. Nakonec jsme použili specializovaný
 integrovaný obvod FX003 z produkce CML Micro.
 
 Dalším požadavkem bylo vybavit touto volbou staré radiostanice Tesla pro svolávání
 dobrovolných hasičů. Na to byl ale už obvod FX003 moc drahý, bylo by asi levnější koupit
 nové rádio. Nápad byl vyhodnocovat volbu přímo procesorem. Pro tehdejší možnosti, tedy
 8051 a assembler to byl dost náročný úkol, ale dalo se to. DAC byl vlastně jednobitový,
 vyhodnocoval se průchod signálu nulou, a protože to mělo reagovat jen na určitou,
 pevně danou adresu, problém se hodně zjednodušil tím, že bylo potřebné vyhodnocovat
 současně jen dva tóny - ten současně přijímaný a další, co následuje v adrese.
 Bylo to v době před nástupem internetu, takže nějaký Goertzelův algoritmus jsem tehdy
 neznal, ale šlo to udělat jako komlexní korelaci vstupního signálu a harmonického průběhu
 generovaného z look up tabulky. Když uvážíme že Goertzel je filtr IIR 2. řádu, není to
 o moc výpočetně náročnější. Pokud by někoho zajímalo, jak to vlastně fungovalo, stačí si
 najít na youtube přednášku prof. Cejnara, kde vysvětluje jak funguje princip nejmenší
 akce pomocí dráhového integrálu Richarda Feynmana. Sice se zdá, že to spolu vůbec nesouvisí,
 ale jak se zdá, některé postupy jsou opravdu univerzální. A bylo to na svou primitivnost
 celkem spolehlivé, tak na 90%, stejně bylo počítáno s tím, že rádiová cesta může být
 zarušena, takže rádio muselo na výzvu správě odpovědět, v případě chyby šlo výzvu opakovat.
 
 Dnešní možnosti jsou už úplně někde jinde, 32-bitové procesory jsou rychlé, mají ADC i DAC
 přímo na čipu, takže je zde ukázka jak se to dá dělat dnes, při využití všech možností, včetně
 překladače C++ s rozšířením C++14 a konstantních výrazů. Je to sice úplně k ničemu,
 ale jako ukázka technologického pokroku za 30 let je to názorné.
  
 @section preamble Úvodní poznámky.
 Jde to, ale má to omezení. Pokud je výpočet složitý,
 nejde to zapouzdřit. A funguje to samozřejmě jen pro
 staticky vytvářené třídy. Takže Goertzelovy koeficienty
 v integer se musí spočítat extra a pak přenést do vlastní
 třídy (je to pole, nelze ho jednoduše inicializovat v
 constexpr konstruktoru jinak než na 0).
 Přetékání integer aritmetiky vzniká pokud je max vstup
 větší než +/- 256 a počet vzorků 80.
 Velikost vzorku je asi PERIOD * max, nesmí přelézt
 cca 30000 (coeff ~ 2 * (1 << RSHIFT), tedy dost velký).
 
 Zdálo by se, že by mohlo pomoci zpracovávat místo vzorku
 první diferenci, ale moc to nezabere a výstup je samozřejmě
 závislý na frekvenci. Je to tak o 1 bit širší (tedy vstup dvojnásobný),
 protože vstupní frekvence je de facto blízká frekvenci vzorkovací.
 
 28.08.2022 - rozchozeno na STM32L051 HSE 8MHz, <b>funguje clang
 verze, která má oproti gcc asi třetinovou velikost</b> - počítá
 ty konstanty v doublech už za překladu. Kupodivu zde není
 ani obvyklý problém s nezarovnaným přístupem. Testováno na
 -# arm-none-eabi-g++ version 9.2.1
 -# clang version 10.0.0
 
 Linuxová verze, která má stejné jádro, používá jako AD/DA
 převodník default zvukovou kartu na 44100Hz, převzorkování
 je řešeno přímo zde, je to zajímavý problém, protože poměr
 frekvencí není celočíselný. Funkce resample() je v principu
 cosi jako sigma/delta převodník, poměr zachovává poměrně
 přesně (5.5125, nikoli 5.5, tedy prosté střídání 5/6).
 
 Základní nastavení je v basics.h, ale závislosti nejsou
 řešeny do všech detailů, ADC/DAC mají nastavenu frekvenci
 samostatně.
 
 Poznámka : Hardware používá jako USART1 RS485, takže vysílaná
 data jsou zároveň i přijímána. Takže dekódovaná volba je zpět
 vysílána. Pro test to nevadí, je nutné s tím počítat.
 Pokud zapojíme výstup DAC na vstup ADC, bude se to motat
 do nekonečna.
 
 @section desc Popis programu.
 Obrázek vydá za mnoho slov. Základní, dost hrubá struktuta objektů
 je asi následující
 @dot
 digraph Goertzel {
   rankdir = LR;
   node [shape=none];
   1->2->3->4->5->6 [arrowhead=none];
   node [style=filled, shape=ellipse, fillcolor=pink, fontcolor=blue];
   RS485 [label="RS485"];
   LO    [label="Line\nOUT" ];
   LI    [label="Line\n IN "];
   subgraph cluster0 {
     label="IO";
     fontcolor=darkgreen;
     node  [style=filled, shape=rectangle, fillcolor=yellow, fontcolor=black];
     USART [label="<N>Usart | <F>FIFO", shape=record];
   }
   subgraph cluster1 {
     label="Core";
     color=lightgray;
     fontcolor=red;
     style=filled;
     node [style=filled, shape=rectangle, fillcolor=yellow, fontcolor=black];
     IOM [label="IO_manip"];
     GEN [label="<N>Generator | <F>FIFO" shape=record];
     DEC [label="Decoder"];
   { rank=same; DEC; GEN; }
   }
   subgraph cluster2 {
     label="IO";
     fontcolor=darkgreen;
     node [style=filled, shape=rectangle, fillcolor=yellow, fontcolor=black];
     DAC [label="DAC_class"];
     ADC [label="ADC_class"];
   }
   { rank=same; 1; RS485;  }
   { rank=same; 6; LO; LI; }
   RS485   -> USART:N;
   USART:N -> RS485;
   USART:N -> IOM     [label="Usart::\nUp()"];
   IOM     -> USART:F [label="BaseLayer::\nDown()\n(skryto)"];
   DEC   -> IOM   [label="Decoder::\nIO_manip::\nDown()"];
   IOM   -> GEN:F [label="IO_manip::\nUp()"];
   ADC   -> DEC   [label="ADC_class::\nsend()"];
   GEN:N -> DAC   [label="DAC_class::\nsend()"];
   LI    -> ADC;
   DAC   -> LO;
 }
 @enddot
 
 Pokud se podíváme do zdrojáků main.cpp, je tam jen vytvoření instancí nějakých statických tříd,
 jejich inicializace a následuje nekonečná smyčka, ve které nic není - jen čeká na
 nějaké přerušení. Ano, vše je řešeno v přerušení. Je zde popsáno jen jádro programu (označené jako Core),
 vstupy a výstupy IO na obou stranách jsou platformně závislé, příliš se tím tedy nezabývám. ADC a DAC
 na STM32F051 používají DMA, přece jen při vzorkování 8kHz je to výhodnější, nepřerušuje se tak často.
 Šipky v grafu mají směr tekoucích dat, jejich popis znázorňuje, která třída a metoda přenos volá.
 Růžové elipsy jsou vlastně fyzické piny procesoru, žluté obdélníky jsou třídy programu (které mohou obsahovat
 další objekty).
 -# třída IO_manip je jen obal na BaseLayer, rozdělí metody BaseLayer::Up(), BaseLayer::Down() pro Generator a Decoder.
 -# znak přicházející ze sériového portu je zapsán do fronty FIFO, kde si ho Generator (v přerušení) případně vyzvedne.
 -# Decoder zapíše také znak do fronty FIFO, vyzvedne ho přerušení od vysílače Usart (zjedodušeně, ale nic na tom není).
 
 Objekty (třídy) v C++ lze pospojovat různými způsoby. Zde je nejvíce použita metoda pomocí bázových tříd
 AbstractChain a BaseLayer a jejich virtálních metod. Ale např. Decoder používá ukazatel na IO_manip, je to jednodušší,
 lze pak volat potřebné Decoder::IO_manip::Down(). Ono by to šlo i jinak, nejjednodušší by bylo udělat IO_manip jako
 globální instanci a volat přímo jí, ale to není moc hezké. Nebo všechno nacpat do společného kontejneru a volat
 přes tt. kontejner. Možností je dost.
 
 Dále jsou tam použity třídy jako TABLE, ARRAY, TONES, které vytvářejí konstantní tabulky nějakým constexpr výpočtem.
 Třída @ref real je obal na aritmetiku v pevné řádové čárce, FIFO fronta, umožňující výměnu dat mezi vlákny (přerušeními)
 ve své podstatě atomicky bez nutnosti použít něco jako std::atomic (které na Cortex-M0 není).
 
 * */

#endif // _MAIN_H
