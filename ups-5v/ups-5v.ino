/*
 * Fuses
 *   CKDIV8 = 1      (make sure unchecked) turn off the clock div
 *   BODLEVEL2 = 1   bod at 2.7V (could be as low as 2.5V; low-voltage tiny85 recommended)
 *   BODLEVEL1 = 0
 *   BODLEVEL0 = 1
 * 
 *   HIGH=DA, LOW=E2, EXT=FF
 */

#include <Arduino.h>
#include <TinyWireS.h>
#include <util/crc16.h>

#define R1 10000
#define R2 7500
// Note: Make sure to use a float when specifying the voltage
#define ON_THRESH_DESIRED 4.7
#define POWERUP_THRESH_DESIRED 4.7
#define OFF_THRESH_DESIRED 3.5

#include "../ups-common/ups.ino"
