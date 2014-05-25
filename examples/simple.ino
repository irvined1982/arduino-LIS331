/* Copyright 2011 David Irvine
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <LIS331.h>
#include <Wire.h>
LIS331 lis;
void setup(){
    lis.setPowerStatus(LR_POWER_NORM);
    lis.setXEnable(true);
    lis.setYEnable(true);
    lis.setZEnable(true);
    Serial.begin(115200);
}
void loop(){
	int16_t x,y,z;
        lis.getXValue(&x);
        lis.getYValue(&y);
        lis.getZValue(&z);        
        Serial.print("X Value: ");
        Serial.print(x);
        Serial.println(" milli Gs");
        Serial.print("Y Value: ");
        Serial.print(y);
        Serial.println(" milli Gs");
        Serial.print("Z Value: ");
        Serial.print(z);
        Serial.println(" milli Gs");
}


