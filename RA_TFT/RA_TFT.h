/*
 * Copyright 2010 Reef Angel / Roberto Imai
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 /*
  * Updated by:  Curt Binder
  * Updates Released under Apache License, Version 2.0
  */

#ifndef __RA_TFT_H__
#define __RA_TFT_H__

#include <Globals.h>

#define CS0 cbi(PORTL,1)
#define CS1 sbi(PORTL,1)
#define RS0 cbi(PORTL,2)
#define RS1 sbi(PORTL,2)
#define WR0 cbi(PORTL,3)
#define WR1 sbi(PORTL,3)
#define RST0 cbi(PORTL,6)
#define RST1 sbi(PORTL,6)
#define BL0 cbi(PORTL,5)
#define BL1 sbi(PORTL,5)
#define LED0 cbi(PORTH, 4)
#define LED1 sbi(PORTH, 4)

class RA_TFT
{
public:
	static void Init();
	static void SendComData(int Com,int Data);
	static void SendCom(byte H,byte L);
	static void SendData(byte H,byte L);
	static void WriteBus(byte H,byte L);
	static void Clear(int color, int x1, int y1, int x2, int y2);
	static void SetBox(int x1, int y1, int x2, int y2);
	static void Pixels(int count, const byte* d);
	static void DrawPixel(int color, int x, int y);
	static void Scroll(int offset);};

#endif // __RA_TFT_H__
