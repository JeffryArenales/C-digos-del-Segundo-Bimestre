/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto: Catálogo de productos
    Dev: Jeffry Arenales 2020199
    Fecha: 19 de abril de 2024
*/ 

struct datos_de_los_dulces
{
  char datos_dulce[50]; 
  byte cantidad_dulces;
};

//Dulces surtidos
datos_de_los_dulces dulce1 = {"Dulces de coco", 29};
datos_de_los_dulces dulce2 = {"Gomitas", 37};
datos_de_los_dulces dulce3 = {"Chocolates", 26};
datos_de_los_dulces dulce4 = {"Chiclosos", 34};

void setup() {
  Serial.begin(9600);     
  Serial.println("Catalogo de dulces");     
  Serial.begin(9600);     
  pinMode(2, INPUT);     
  pinMode(3, INPUT);     
}

  byte contador = 0;
void loop() {
  if(digitalRead(2)==HIGH) {
  delay(350);
  contador = contador+1; 
  Serial.println(contador );
    
  if(contador == 1){
   Serial.print("El dulce es ");
   Serial.println(dulce1.datos_dulce);
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce1.cantidad_dulces);
  }    
      
  if(contador == 2){
   Serial.print("El dulce es ");
   Serial.println(dulce2.datos_dulce);
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce2.cantidad_dulces);
  } 
        
  if(contador == 3){
   Serial.print("El dulce es ");
   Serial.println(dulce3.datos_dulce);
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce3.cantidad_dulces);
  }
          
  if(contador == 4){
   Serial.print("El dulce es ");
   Serial.println(dulce4.datos_dulce);
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce4.cantidad_dulces);
  } 
}
  else if(digitalRead(3)==HIGH){  
   delay(350);
   contador = contador-1;  
   Serial.println(contador );
   
  if(contador == 1){
   Serial.print("El dulce es ");
   Serial.println(dulce1.datos_dulce);
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce1.cantidad_dulces);
  } 
      
  if(contador == 2){
   Serial.print("El dulce es ");
   Serial.println(dulce2.datos_dulce); 
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce2.cantidad_dulces);
  } 
        
  if(contador == 3){
   Serial.print("El dulce es ");
   Serial.println(dulce3.datos_dulce); 
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce3.cantidad_dulces);
  } 
          
  if(contador == 4){
   Serial.print("El dulce es ");
   Serial.println(dulce4.datos_dulce); 
   Serial.print("La cantidad de dulces es  ");
   Serial.println(dulce4.cantidad_dulces);
  } 
 }
}
    
  
  
