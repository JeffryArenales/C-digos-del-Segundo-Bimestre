/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.6 Parte I
    Dev: Jeffry Arenales 2020199
    Fecha: 20 de Mayo
*/

#include <LiquidCrystal.h>

#define RS  6
#define Enable 7
#define D4 2
#define D5 3
#define D6 4
#define D7 5

LiquidCrystal LCD_1(RS, Enable, D4, D5, D6, D7);

void setup()
{
  LCD_1.begin(16,2); 
  LCD_1.setCursor(3,0);
  LCD_1.print("Jeffry");
}

void loop()
{
  LCD_1.setCursor(3,1);
  LCD_1.print("2020199");
}
