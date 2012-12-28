/*
             LUFA Library
     Copyright (C) Dean Camera, 2012.

  dean [at] fourwalledcubicle [dot] com
           www.lufa-lib.org
*/

/*
  Copyright 2012  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaim all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

/** \file
 *
 *  Header file for StillImageHost.c.
 */

#ifndef _STILL_IMAGE_HOST_H_
#define _STILL_IMAGE_HOST_H_

#define PTP_DEBUG

/* Includes: */
#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/power.h>
#include <avr/interrupt.h>
#include <stdio.h>

#include "hardware.h"
#include "PTP_Codes.h"

#include <LUFA/Drivers/USB/USB.h>
#include <LUFA/Drivers/Peripheral/Serial.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Function Prototypes: */
void PTP_Enable(void);
void PTP_Disable(void);
void PTP_Task(void);

void EVENT_USB_Host_HostError(const uint8_t ErrorCode);
void EVENT_USB_Host_DeviceAttached(void);
void EVENT_USB_Host_DeviceUnattached(void);
void EVENT_USB_Host_DeviceEnumerationFailed(const uint8_t ErrorCode,
                                            const uint8_t SubErrorCode);
void EVENT_USB_Host_DeviceEnumerationComplete(void);
uint8_t PTP_Transaction(uint16_t opCode, uint8_t mode, uint8_t paramCount, uint32_t *params);
uint8_t PTP_OpenSession(void);
uint8_t PTP_CloseSession(void);
uint8_t PTP_GetDeviceInfo(void);
void UnicodeToASCII(char *UnicodeString,
                char *Buffer);

extern char PTP_Buffer[512];
extern char PTP_CameraModel[21];
extern uint8_t PTP_Ready, PTP_Connected;

#ifdef __cplusplus
}
#endif

#endif

