/*
 * DIO_Port_Config.c
 *
 *  Created on: Des 2 , 2023
 *  Author: Mayada Metwally
 */

#include"..\..\LIB\STD_TYPES.h"
#include"PORT_Config.h"
#if CONFIG_METHOD == POST_COMPILE
#if NUMBER_OF_PINS ==16
tstr_PinConfig PinsConfig[NUMBER_OF_PINS] =
{
		{.tenu_Pin = PIN00, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN01, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN02, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN03, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN04, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN05, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN06, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN07, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN08, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN09, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN10, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN11, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN12, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN13, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN14, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN15, .tenu_Dir = INPUT , .tenu_Value = LOW},


};

#elif NUMBER_OF_PINS ==32
tstr_PinConfig PinsConfig[NUMBER_OF_PINS] =
{
		{.tenu_Pin = PIN00, .tenu_Dir = OUTPUT , .tenu_Value = HIGH},
		{.tenu_Pin = PIN01, .tenu_Dir = OUTPUT , .tenu_Value = HIGH},
		{.tenu_Pin = PIN02, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN03, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN04, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN05, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN06, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN07, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN08, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN09, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN10, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN11, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN12, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN13, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN14, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN15, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN16, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN17, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN18, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN19, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN20, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN21, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN22, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN23, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN24, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN25, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN26, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN27, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN28, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN29, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN30, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN31, .tenu_Dir = INPUT , .tenu_Value = LOW},



};

#elif NUMBER_OF_PINS == 48
tstr_PinConfig PinsConfig[NUMBER_OF_PINS] =
{
		{.tenu_Pin = PIN00, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN01, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN02, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN03, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN04, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN05, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN06, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN07, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN08, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN09, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN10, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN11, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN12, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN13, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN14, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN15, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN16, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN17, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN18, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN19, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN20, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN21, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN22, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN23, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN24, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN25, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN26, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN27, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN28, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN29, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN30, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN31, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN32, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN33, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN34, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN35, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN36, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN37, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN38, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN39, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN40, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN41, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN42, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN43, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN44, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN45, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN46, .tenu_Dir = INPUT , .tenu_Value = LOW},
		{.tenu_Pin = PIN47, .tenu_Dir = INPUT , .tenu_Value = LOW},




};

#else
  #error "Invalid Number Of Pins"
#endif

#elif CONFIG_METHOD == PRE_PROCESSOR

#else
#error "Invalid Cofig Method"
#endif



