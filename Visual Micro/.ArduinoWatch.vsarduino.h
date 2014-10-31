/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Uno, Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define ARDUINO 106
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}

//
//
void init_msg_array();
void init_emg_array();
void setTimeValue();
bool isLeapYear(short year);
byte getDaysInMonth(byte month);
short daysPassedInCurrentYear(byte month, byte day);
int calcDaysSoFar(short year, byte month, byte day);
byte calcDayOfWeekIndex();
void updateTime(unsigned long current_time);
boolean receiveBluetoothData();
void parseStartSignal(byte c);
void parseCommand(byte c);
void parseMessage(byte c);
void parseTime(byte c);
void parseId(byte c);
boolean parseEndSignal(byte c);
void processTransaction();
void onDraw(unsigned long currentTime);
boolean isDisplayTime(unsigned long currentTime);
void setNextDisplayTime(unsigned long currentTime, unsigned long nextUpdateTime);
boolean isPageChangeTime(unsigned long currentTime);
void setPageChangeTime(unsigned long currentTime);
boolean findNextEmerMessage();
boolean findNextNormalMessage();
int countEmergency();
int countMessage();
void startClockMode();
void startEmergencyMode();
void startMessageMode();
void startIdleMode();
void drawIndicator();
void drawStartUp();
void drawEmergency();
void drawMessage();
void drawClock();
void drawIdleClock();
void drawClockDigital(byte xPos, byte yPos);
void drawClockAnalog(byte radius);
int getCenterAlignedXOfMsg(int msgIndex);
int getCenterAlignedXOfEmg(int emgIndex);
void showTimePin(int center_x, int center_y, double pl1, double pl2, double pl3);
void drawIcon(int posx, int posy, int icon_num);

#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\standard\pins_arduino.h" 
#include "C:\Users\milan.ajdinovic\Documents\GitHub\ArduinoWatch\Watch.ino"
#include "C:\Users\milan.ajdinovic\Documents\GitHub\ArduinoWatch\bitmap.h"
#endif
