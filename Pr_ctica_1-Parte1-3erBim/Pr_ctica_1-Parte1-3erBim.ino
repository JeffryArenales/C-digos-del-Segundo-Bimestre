/*
 
   Fundacion Kinal
   Centro Educativo Técnico Laboral Kinal
   Quinto perito
   Quinto Electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Práctica #1 Tercer Bimestre
   Dev: Jeffry Emanuel Arenales López
   Fecha: 05 de Julio
*/


#include <Adafruit_NeoPixel.h>

int pines[] = {6, 7, 8, 9, 10, 11, 12};  

Adafruit_NeoPixel anillo(7, 4, NEO_GRB + NEO_KHZ800); 
long sensor;
long distancia; 
int contadorpersonas = 0;

void setup() {
  pinMode(2, OUTPUT); 
  pinMode(3, INPUT);  
  digitalWrite(2, LOW); 
  Serial.begin(9600);
  anillo.begin();
  
  for (int i = 0; i < 7; i++) {
    pinMode(pines[i], OUTPUT);
  
      digitalWrite(6, HIGH); 
      digitalWrite(7, HIGH); 
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(11,HIGH); 
  }
}

void loop() {
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  sensor = pulseIn(3, HIGH);
  distancia = sensor / 59;
  
  if (distancia >= 6 && distancia <= 9) {
    delay(1000);
    anillo.setPixelColor(0, anillo.Color(124, 252, 0));
    anillo.show();
    mostrarNumero(contadorpersonas); 
    delay(1000);
    
    
    if (contadorpersonas < 10) {
    contadorpersonas++; 
    }
  }
  
   if (contadorpersonas >= 10) {
    anillo.setPixelColor(0, anillo.Color(255, 0, 0));
    anillo.show();
    //digitalWrite(12, HIGH); 
  } else
    
    delay(100);  
}


void mostrarNumero(int numero) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pines[i], LOW);
  }
  
  switch (numero) {
    
    case 1:
      digitalWrite(7, HIGH); //mostrar 1
      digitalWrite(8, HIGH); 
      break;
    
    case 2:
      digitalWrite(6, HIGH); //mostrar 2
      digitalWrite(7, HIGH); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH);
      digitalWrite(12,HIGH);
 
      break;
    
    case 3:
      digitalWrite(6, HIGH); //mostrar 3
      digitalWrite(7, HIGH); 
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH); 
      digitalWrite(12,HIGH); 
      break;
    
    case 4:
      digitalWrite(7, HIGH); //mostrar 4
      digitalWrite(8, HIGH); 
      digitalWrite(11,HIGH); 
      digitalWrite(12,HIGH); 
      break;
    
    case 5:
      digitalWrite(6, HIGH);  //mostrar 5
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH); 
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);  
      break;
    
    case 6:
      digitalWrite(8, HIGH); //mostrar 6
      digitalWrite(9, HIGH); 
      digitalWrite(10, HIGH); 
      digitalWrite(11,HIGH);  
      digitalWrite(12,HIGH);  
      break;
    
    case 7:
      digitalWrite(6, HIGH); //mostrar 7
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH); 
      break;
    
    case 8:
      digitalWrite(6, HIGH); //mostrar 8
      digitalWrite(7, HIGH); 
      digitalWrite(8, HIGH); 
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH); 
      digitalWrite(11,HIGH); 
      digitalWrite(12,HIGH); 
      break;
    
    case 9:
      digitalWrite(6, HIGH);  //mostrar 9
      digitalWrite(7, HIGH);  
      digitalWrite(8, HIGH);  
      digitalWrite(11,HIGH);  
      digitalWrite(12,HIGH); 
      delay(1000); 
      digitalWrite(6, LOW);  //mostrar 9
      digitalWrite(7, LOW);  
      digitalWrite(8, LOW);  
      digitalWrite(11,LOW);  
      digitalWrite(12,HIGH); 
    break;
   
  }
   
  }
