/*

 *   Port_Config.h
 *
 *  Created on: Des 2 , 2023
 *  Author: Mayada Metwally
 */



#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_

/* Config Method*/
#define PRE_PROCESSOR    0
#define POST_COMPILE     1
/*Number of port*/
#define TWO_PORT         2
#define THREE_PORT       3
#define FOUR_PORT        4
#define SIX_PORT         6
/*Micro Config*/
/*Total number of pins in microcontroler*/
#define NUMBER_OF_PINS  32
/*Total number of pins in microcontroler*/
#define NUMBER_OF_PORT   TWO_PORT
/*Config Method*/
#define CONFIG_METHOD   POST_COMPILE

/*Preprocessor configuration*/
#if CONFIG_METHOD == PRE_PROCESSOR

#define HIGH            1
#define LOW             0

/* PINS DIRECTION */
/*
 * OUTPUT = 1
 * INPUT  = 0
 */

/* PINS VALUE */

/* 0 : IN Output (Low),  IN INPUT (Floating) */
/* 1 : IN Output (High), IN INPUT (Pulled Up) */
#if NUMBER_OF_PINS>=16
/* PINS VALUE */
#define VALUE_PIN00             HIGH
#define VALUE_PIN01             HIGH
#define VALUE_PIN02             LOW
#define VALUE_PIN03             LOW
#define VALUE_PIN04             LOW
#define VALUE_PIN05             LOW
#define VALUE_PIN06             LOW
#define VALUE_PIN07             LOW

#define VALUE_PIN08             LOW
#define VALUE_PIN09             LOW
#define VALUE_PIN10             LOW
#define VALUE_PIN11             LOW
#define VALUE_PIN12             LOW
#define VALUE_PIN13             LOW
#define VALUE_PIN14             LOW
#define VALUE_PIN15             LOW

/* PINS DIRECTION */
#define DIR_PIN00         HIGH
#define DIR_PIN01         HIGH
#define DIR_PIN02         LOW
#define DIR_PIN03         LOW
#define DIR_PIN04         LOW
#define DIR_PIN05         LOW
#define DIR_PIN06		  LOW
#define DIR_PIN07		  LOW

#define DIR_PIN08         LOW
#define DIR_PIN09		  LOW
#define DIR_PIN10		  LOW
#define DIR_PIN11		  LOW
#define DIR_PIN12         LOW
#define DIR_PIN13         LOW
#define DIR_PIN14         LOW
#define DIR_PIN15         LOW

#endif


#if NUMBER_OF_PINS>=24
/* PINS VALUE */
#define VALUE_PIN16             LOW
#define VALUE_PIN17             LOW
#define VALUE_PIN18             LOW
#define VALUE_PIN19             LOW
#define VALUE_PIN20             LOW
#define VALUE_PIN21             LOW
#define VALUE_PIN22             LOW
#define VALUE_PIN23             LOW



/* PINS DIRECTION */
#define DIR_PIN16         LOW
#define DIR_PIN17         LOW
#define DIR_PIN18         LOW
#define DIR_PIN19         LOW
#define DIR_PIN20         LOW
#define DIR_PIN21         LOW
#define DIR_PIN22         LOW
#define DIR_PIN23         LOW
#endif
#if NUMBER_OF_PINS>=32

/* PINS VALUE */
#define VALUE_PIN24             LOW
#define VALUE_PIN25             LOW
#define VALUE_PIN26             LOW
#define VALUE_PIN27             LOW
#define VALUE_PIN28             LOW
#define VALUE_PIN29             LOW
#define VALUE_PIN30             LOW
#define VALUE_PIN31             LOW

/* PINS DIRECTION */
#define DIR_PIN24         LOW
#define DIR_PIN25         LOW
#define DIR_PIN26         LOW
#define DIR_PIN27         LOW
#define DIR_PIN28         LOW
#define DIR_PIN29         LOW
#define DIR_PIN30         LOW
#define DIR_PIN31         LOW

#endif

#if NUMBER_OF_PINS>=48
/* PINS VALUE */
#define VALUE_PIN32             LOW
#define VALUE_PIN33             LOW
#define VALUE_PIN34             LOW
#define VALUE_PIN35             LOW
#define VALUE_PIN36             LOW
#define VALUE_PIN37             LOW
#define VALUE_PIN38             LOW
#define VALUE_PIN39             LOW

#define VALUE_PIN40             LOW
#define VALUE_PIN41             LOW
#define VALUE_PIN42             LOW
#define VALUE_PIN43             LOW
#define VALUE_PIN44             LOW
#define VALUE_PIN45             LOW
#define VALUE_PIN46             LOW
#define VALUE_PIN47             LOW

/* PINS DIRECTION */
#define DIR_PIN32         LOW
#define DIR_PIN33         LOW
#define DIR_PIN34         LOW
#define DIR_PIN35         LOW
#define DIR_PIN36         LOW
#define DIR_PIN37         LOW
#define DIR_PIN38         LOW
#define DIR_PIN39         LOW

#define DIR_PIN40         LOW
#define DIR_PIN41         LOW
#define DIR_PIN42         LOW
#define DIR_PIN43         LOW
#define DIR_PIN44         LOW
#define DIR_PIN45         LOW
#define DIR_PIN46         LOW
#define DIR_PIN47         LOW
#endif

      /*PRE_PROCESSOR_CONFIG_METHOD*/


/*PostCompiler Configuration*/
#elif CONFIG_METHOD == POST_COMPILE
#if NUMBER_OF_PINS==16
typedef enum
{
	PIN00 = 0,
	PIN01,
	PIN02,
	PIN03,
	PIN04,
	PIN05,
	PIN06,
	PIN07,
	PIN08,
	PIN09,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15,

}tenu_PinsNumber;

#endif

#if NUMBER_OF_PINS==32
typedef enum
{
	PIN00 = 0,
	PIN01,
	PIN02,
	PIN03,
	PIN04,
	PIN05,
	PIN06,
	PIN07,
	PIN08,
	PIN09,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15,
	PIN16,
	PIN17,
	PIN18,
	PIN19,
	PIN20,
	PIN21,
	PIN22,
	PIN23,
	PIN24,
	PIN25,
	PIN26,
	PIN27,
	PIN28,
	PIN29,
	PIN30,
	PIN31

}tenu_PinsNumber;

#endif

#if NUMBER_OF_PINS==48
typedef enum
{
	PIN00 = 0,
	PIN01,
	PIN02,
	PIN03,
	PIN04,
	PIN05,
	PIN06,
	PIN07,
	PIN08,
	PIN09,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15,
	PIN16,
	PIN17,
	PIN18,
	PIN19,
	PIN20,
	PIN21,
	PIN22,
	PIN23,
	PIN24,
	PIN25,
	PIN26,
	PIN27,
	PIN28,
	PIN29,
	PIN30,
	PIN31,
	PIN32,
	PIN33,
	PIN34,
	PIN35,
	PIN36,
	PIN37,
	PIN38,
	PIN39,
	PIN40,
	PIN41,
	PIN42,
	PIN43,
	PIN44,
	PIN45,
	PIN46,
	PIN47,



}tenu_PinsNumber;

#endif


typedef enum
{
	INPUT = 0,
	OUTPUT


}tenu_PinDirection;

typedef enum
{
	LOW = 0,
	HIGH


}tenu_PinValue;

typedef struct
{
	tenu_PinsNumber       tenu_Pin;
	tenu_PinDirection     tenu_Dir;
	tenu_PinValue         tenu_Value;

}tstr_PinConfig;



#else
#error "Invalid Configuration Method"

#endif       /*POST_COMPILERCONFIG_METHOD*/



#endif /* PORT_CONFIG_H_ */
























