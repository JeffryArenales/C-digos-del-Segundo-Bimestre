/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Práctica #5 Parte I
   Dev: Jeffry Emanuel Arenales López
   Fecha: 10 de Mayo
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
  
  float KgParaLb(float Kg) {
  return Kg * 2.20462;
  }

  float AParauA(float A) {
  return A * 1000000;
  }

// 1 
  void displaySequence_1() {
  int pins[2] = {3,4};
  for (int i = 0; i < 2; i++) {
  digitalWrite(pins[i], HIGH);} 
  delay(1000);
  for (int i = 2; i >= 0; i--) {
  digitalWrite(pins[i], LOW);} 
  delay(1000);}

// 3  
  void displaySequence_3() {
  int pins_1[5] = {2,3,4,5,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(1000);}

// 5
  void displaySequence_5() {
  int pins_1[5] = {2,4,5,7,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(1000);}

// 7 
  void displaySequence_7() {
  int pins_1[3] = {2,3,4};
  for (int i = 0; i < 3; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 3; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(1000);}

// 9
  void displaySequence_9() {
  int pins_1[5] = {2,3,4,7,8};
  for (int i = 0; i < 5; i++) {
  digitalWrite(pins_1[i], HIGH);} 
  delay(1000);
  for (int i = 5; i >= 0; i--) {
  digitalWrite(pins_1[i], LOW);} 
  delay(1000);} 

  void setup() {
  setupPins();
  Serial.begin(9600); 
  
  //Kg a lb
  float Kg = 23.0;
  float Lb = KgParaLb(Kg);
  Serial.print(Kg);
  Serial.print(" Kg = ");
  Serial.print(Lb);
  Serial.println(" Lb");
  
  //A a uA
  float A = 46.0;
  float uA = AParauA(A);
  Serial.print(A);
  Serial.print(" A = ");
  Serial.print(uA);
  Serial.println(" uA");

  //Orden  
  displaySequence_1();
  displaySequence_3();
  displaySequence_5();
  displaySequence_7();
  displaySequence_9();
 }

  void loop() {  
 }
