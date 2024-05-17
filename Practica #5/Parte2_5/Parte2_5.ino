/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.5 Parte II 
    Dev: Jeffry Arenales 2020199
    Fecha: 10 de Mayo
*/

const float pinBuzzer = 2; 

void setup() {
  Serial.begin(2000);     
  Serial.println("Inicio de Cancion");
  
  //sol  
  tone (pinBuzzer, 391.995, 353);  
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(85);
  
  //mib
  tone (pinBuzzer, 311.127, 118); 
  delay(235);
  noTone(pinBuzzer);
  delay(50);
  
  // sib  
  tone (pinBuzzer, 466.164, 118); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //sol  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //mib
  tone (pinBuzzer, 311.127, 118); 
  delay(235);
  noTone(pinBuzzer);
  delay(50);
  
  //sib  
  tone (pinBuzzer, 466.164, 118); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //sol  
  tone (pinBuzzer, 391.995, 706);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Re  
  tone (pinBuzzer, 293.665, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 293.665, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 293.665, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //mib
  tone (pinBuzzer, 311.127, 118); 
  delay(235);
  noTone(pinBuzzer);
  delay(50);
  
  // sib
  tone (pinBuzzer, 466.164, 118); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //solb  
  tone (pinBuzzer, 369.994, 353); 
  delay(706); 
  noTone(pinBuzzer);
  delay(100);
  
  //mib
  tone (pinBuzzer, 311.127, 353); 
  delay(353);
  noTone(pinBuzzer);
  delay(50);
  
  // sib  
  tone (pinBuzzer, 466.164, 353); 
  delay(225); 
  noTone(pinBuzzer);
  delay(65);
  
  //sol 
  tone (pinBuzzer, 391.995, 706);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 190);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  tone (pinBuzzer, 391.995, 118);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  tone (pinBuzzer, 391.995, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //fa#  
  tone (pinBuzzer, 369.994, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //fa  
  tone (pinBuzzer, 349.228, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Mi  
  tone (pinBuzzer, 329.628, 118);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Re#  
  tone (pinBuzzer, 311.127, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //Mi 
  tone (pinBuzzer, 329.628, 450);
  delay(353);
  noTone(pinBuzzer);
  delay(353);
  
 //sol#  
  tone (pinBuzzer, 415.305, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do#  
  tone (pinBuzzer, 277.183, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do 
  tone (pinBuzzer, 261.626, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Si 
  tone (pinBuzzer, 493.883, 177);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Sib  
  tone (pinBuzzer, 466.164, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //La  
  tone (pinBuzzer, 440.000, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib 
  tone (pinBuzzer, 466.164, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Mib  
  tone (pinBuzzer, 311.127, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Solb  
  tone (pinBuzzer, 369.994, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Mib 
  tone (pinBuzzer, 311.127, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Solb 
  tone (pinBuzzer, 369.994, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Sib  
  tone (pinBuzzer, 466.164, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol
  tone (pinBuzzer, 391.995, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib 
  tone (pinBuzzer, 466.164, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Re  
  tone (pinBuzzer, 293.665, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //sol  
  tone (pinBuzzer, 391.995, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  tone (pinBuzzer, 391.995, 130);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  tone (pinBuzzer, 391.995, 130);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  tone (pinBuzzer, 391.995, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //fa#  
  tone (pinBuzzer, 369.994, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //fa 
  tone (pinBuzzer, 349.228, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Mi  
  tone (pinBuzzer, 329.628, 118);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Re#  
  tone (pinBuzzer, 311.127, 353);
  delay(400);
  noTone(pinBuzzer);
  delay(100);
  
  //Mi
  tone (pinBuzzer, 329.628, 450);
  delay(353);
  noTone(pinBuzzer);
  delay(353);
  
  //sol#  
  tone (pinBuzzer, 415.305, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do#  
  tone (pinBuzzer, 277.183, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Do  
  tone (pinBuzzer, 261.626, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Si  
  tone (pinBuzzer, 493.883, 177);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Sib  
  tone (pinBuzzer, 466.164, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //La  
  tone (pinBuzzer, 440.000, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib  
  tone (pinBuzzer, 466.164, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Mib  
  tone (pinBuzzer, 311.127, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Solb  
  tone (pinBuzzer, 369.994, 353);
  delay(706);
  noTone(pinBuzzer);
  delay(100);
  
  //Mib  
  tone (pinBuzzer, 311.127, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(65);
  
  //Sib  
  tone (pinBuzzer, 466.164, 180);
  delay(353);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol  
  tone (pinBuzzer, 391.995, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  
  //Mib  
  tone (pinBuzzer, 311.127, 200);
  delay(300);
  noTone(pinBuzzer);
  delay(85);
  
  //Sib  
  tone (pinBuzzer, 466.164, 130);
  delay(235);
  noTone(pinBuzzer);
  delay(85);
  
  //Sol
  tone (pinBuzzer, 391.995, 353);
  delay(353);
  noTone(pinBuzzer);
  delay(100);
  }

void loop() { }
