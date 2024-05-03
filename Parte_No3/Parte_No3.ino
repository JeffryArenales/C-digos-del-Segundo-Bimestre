/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.4 Parte III 
    Dev: Jeffry Arenales 2020199
    Fecha: 02 de Mayo
*/

int pin;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  for(pin=6;pin <= 12;pin++){
   pinMode(pin,OUTPUT); 
  } 
}

void loop()
{
 if(digitalRead(2)==HIGH)//SECCION 1
  {
    Serial.println("Practica No.4 Jeffry Emanuel Arenales Lopez");
    delay(500);
  }
  
 if(digitalRead(3)==HIGH){ //SECCION 2
  for(pin=6;pin <= 12;pin++)
    {
    pinMode(pin, OUTPUT);
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    }
  
    for(pin=12;pin >= 6;pin--)
    {
    pinMode(pin, OUTPUT);
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    }
   
  }
  if(digitalRead(4)==HIGH)//SECCION 3
  {
   digitalWrite(6,HIGH);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);   //C
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
   digitalWrite(6,LOW);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);   //U
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
   digitalWrite(6,HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);    //A
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   delay(2000);
   digitalWrite(6,LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);   //T
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   delay(2000);
   digitalWrite(6,HIGH);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);    //R
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
   digitalWrite(6,HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);   //O
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
  }
 
  //SECCION 4
  if((digitalRead(2)==HIGH && digitalRead(4)==HIGH)||(digitalRead(3)==HIGH && digitalRead(5)==HIGH))
  {
   Serial.println("Gracias por su atencion");
   delay(500);
  }
  
}
