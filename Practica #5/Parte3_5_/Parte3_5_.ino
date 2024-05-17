/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.5 Parte III
    Dev: Jeffry Arenales 2020199
    Fecha: 16 de Mayo
*/

void setupPins() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

  //9
  void displaySequence() { 
  int pins[5] = {2,3,4,7,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins[i], LOW);} 
  delay(500);
  }

  //8
  void displaySequence_1() {  
  int pins[7] = {2,3,4,5,6,7,8};
  for (int i = 0; i < 7; i++) {
  digitalWrite(pins[i], HIGH);} 
  delay(1000);
  for (int i = 7; i >= 0; i--) {
  digitalWrite(pins[i], LOW);} 
  delay(500);
  }

  //7
  void displaySequence_2() {  
  int pins[3] = {2,3,4};
  for (int i = 0; i < 3; i++) {
  digitalWrite(pins[i], HIGH);} 
  delay(1000);
  for (int i = 3; i >= 0; i--) {
  digitalWrite(pins[i], LOW);} 
  delay(500);
  }

  //6
  void displaySequence_3() {  
  int pins[5] = {4,5,6,7,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins[i], LOW);} 
  delay(500);
  }

  //5
  void displaySequence_4() {   
  int pins_1[5] = {2,4,5,7,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(500);
  } 

  //4
  void displaySequence_5() {   
  int pins_1[4] = {3,4,7,8};
  for (int i = 0; i < 4; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 4; i >=0 ; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(500);
  } 

  //3
  void displaySequence_6() {   
  int pins_1[5] = {2,3,4,5,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(500);
  } 

  //2
  void displaySequence_7() {   
  int pins_1[5] = {2,3,5,6,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(500);
  } 

  //1
  void displaySequence_8() {   
  int pins_1[2] = {3,4};
  for (int i = 0; i < 2; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 2; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(500);
  }

  //0
   void displaySequence_9() {  
  int pins_1[6] = {2,3,4,5,6,7};
  for (int i = 0; i < 6; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(500);
  for (int i = 6; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);
  
    
  const int eH = 250;} 
    tone(11, 250, 500);
    delay(500);
    noTone(11);
    delay(1000);}


void beep(int note, int duration)
{}
void setup(){
 
  pinMode(10, OUTPUT); 
   digitalWrite(10, LOW);
  pinMode(11, OUTPUT); 
   displaySequence();
   displaySequence_1();
   displaySequence_2();
   displaySequence_3();
   displaySequence_4();
   displaySequence_5();
   displaySequence_6();
   displaySequence_7();
   displaySequence_8();
   displaySequence_9();
 digitalWrite(10, HIGH);
   delay(5000);
  }
    
void loop(){
}
