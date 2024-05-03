/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Práctica No.4 Parte I 
    Dev: Jeffry Arenales 2020199
    Fecha: 26 de Abril
*/

int contador = 0;
void setup() {
  Serial.begin(9600);     
  Serial.println("Contador ascendete de 0 a 9");     
  pinMode(2, INPUT);     
  pinMode(3, INPUT);   
  pinMode(4, INPUT);
}

void loop(){
  for(int c = 0; c<=9; c++){
    contador = 500;
    if(digitalRead(2)==HIGH){
       contador = 1000;}
    else if (digitalRead(3)==HIGH){
      contador = 2000; 
    } else if (digitalRead(4)==HIGH){
       contador =3000;} 
    if (digitalRead(2)==HIGH && digitalRead(3)==HIGH && digitalRead(4)==HIGH){
      contador = 500;}  
    Serial.println(c);
    delay(contador);
  } 
} 
