#ifndef CONFIG_H_
#define CONFIG_H_
/*
 * Configuration file
 *
 */
 
/*
 * Choose your ESP Module
 * 
 * (defaults to NODEMCU10)
 */
 
//#define ESP01
//#define ESP12EQ
//#define NODEMCU09
#define NODEMCU10

/*
 * Choose your ADC
 * 
 * (defaults to MCP3208)
 */
 
//#define MCP3008
#define MCP3208

/*
 * Choose your cloud endpoint
 * 
 * (defaults to emoncms)
 */
 
//#define DiYIoT
//#define host "127.0.0.1"
#define EMONCMS






/*
 * Do NOT change anything below these lines unless instructed to do so by the developers
 */
 
// Current EmonCMS host 
#if defined(EMONCMS)
  #define host "emoncms.org"
#endif  
 
// pin definitions for NodeMCU 1.0
#if defined(NODEMCU10)
  #define SELPIN   D8  //CS
  #define DATAOUT  D7  //MOSI
  #define DATAIN   D6  //MISO
  #define SPICLOCK D5  //SCLK
#endif  

// pin definitions for generic ESP-01 modules (8 pins)
#if defined(ESP01)
  #define SELPIN   0  //CS
  #define DATAOUT  1  //MOSI
  #define DATAIN   3  //MISO
  #define SPICLOCK 2  //SCLK
#endif  
 
#endif /* CONFIG_H_ */