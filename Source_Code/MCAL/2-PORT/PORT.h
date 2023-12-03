/*
 * VALUE_Port.h
 *
 *  Created on: Des 2, 2023
 *      Author: Mayada Metwally
 *
 */

#ifndef PORT_H_
#define PORT_H_

typedef enum{
	LBTY_OK = 0,
	LBTY_NOK

}tenu_ErrorStatus;

void PortInitPreProcessor();

tenu_ErrorStatus PortInitPostCompiler(void);

#if CONFIG_METHOD == PRE_PROCESSOR

#define CONCAT(b7, b6, b5, b4, b3, b2, b1, b0)			CONC_HELPER(b7, b6, b5, b4, b3, b2, b1, b0)
#define CONC_HELPER(b7, b6, b5, b4, b3, b2, b1, b0)		0b##b7##b6##b5##b4##b3##b2##b1##b0



#elif  CONFIG_METHOD == POST_COMPILE


#else
#error "Invalid Configuration Method"
#endif

#endif /* PORT_H_ */
