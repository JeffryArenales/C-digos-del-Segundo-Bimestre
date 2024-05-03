/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.4 Parte IV 
    Dev: Jeffry Arenales 2020199
    Fecha: 26 de Abril
*/

const int pinIncrementar = 2; // Interruptor de incremento
const int pinDecrementar = 3; // Interruptor de decremento

int conteo = 0;

void setup() {
    // Configurar los pines como entradas
    pinMode(pinIncrementar, INPUT);
    pinMode(pinDecrementar, INPUT);
    Serial.begin(9600);
    // Conteo inicial
    Serial.println("Conteo inicial: 0");
}

void loop() {
    if (digitalRead(pinIncrementar) == HIGH) {
    conteo++;
    // Si el conteo llega a 100 se reinicia a 0
    if (conteo >= 100) {
      conteo = 0;
    }
    Serial.print("Conteo en Incremento: ");
    Serial.println(conteo);
    delay(200);
  }

    if (digitalRead(pinDecrementar) == HIGH) {
    conteo--;
    if (conteo < 0) {
      conteo = 99;
    }
    Serial.print("Conteo en Decremento: ");
    Serial.println(conteo);
    delay(200);
  }
}
