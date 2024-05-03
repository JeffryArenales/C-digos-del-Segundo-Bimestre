/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.4 Parte II 
    Dev: Jeffry Arenales 2020199
    Fecha: 26 de Abril
*/

const int ledPins[] = {2, 3, 4, 5, 6, 7}; // Pines para los LED
const int interruptor1Pin = 8;
const int interruptor2Pin = 9;

//Estado de los interruptores 
bool interruptor1Estado = false;
bool interruptor2Estado = false;
int velocidadSecuencia = 500; // Velocidad inicial 

//Secuencia de luces
void realizarSecuencia() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(velocidadSecuencia);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = 4; i > -1; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(velocidadSecuencia);
    digitalWrite(ledPins[i], LOW);
  }
}

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  
  pinMode(interruptor1Pin, INPUT_PULLUP);
  pinMode(interruptor2Pin, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  interruptor1Estado = digitalRead(interruptor1Pin);
  interruptor2Estado = digitalRead(interruptor2Pin);
  
  if (!interruptor1Estado && !interruptor2Estado) {
    velocidadSecuencia = 0; // No se realiza la secuencia si no se presiona ningún interruptor
  } else if (!interruptor1Estado) {
    velocidadSecuencia = 500; 
    Serial.println("Secuencia - velocidad 1");
  } else if (!interruptor2Estado) {
    velocidadSecuencia = 250; 
    Serial.println("Secuencia - velocidad 2");
  }
  
  if (velocidadSecuencia > 0) {
    realizarSecuencia();
  }
}
