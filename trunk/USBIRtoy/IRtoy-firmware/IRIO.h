/*
*
*	USB infrared remote control receiver transmitter firmware v1.0
*	License: creative commons - attribution, share-alike 
*	Copyright Ian Lesnet 2010
*	http://dangerousprototypes.com
*
*/
#ifndef USB2UART_H
#define USB2UART_H

void Usb2UartSetup(void);
u8 Usb2UartService(void);
void Usb2UartInterruptHandlerHigh (void);

#endif
