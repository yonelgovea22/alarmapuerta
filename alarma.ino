
int contacto = 2; 
const int led_naranja = 8;
const int led_rojo = 9;
const int led_azul = 10;

void setup() 
{
 pinMode(contacto,INPUT); 
 pinMode(led_naranja, OUTPUT); 
 pinMode(led_rojo, OUTPUT);
 pinMode(led_azul, OUTPUT); 
}


void loop() 
{
 if (digitalRead(contacto)==LOW){
  digitalWrite(led_naranja,LOW); 
  digitalWrite(led_rojo,LOW); 
  digitalWrite(led_azul,LOW); 
 }else{
  for(int a=0; a<10; a++){
 digitalWrite(led_naranja,HIGH); 
 delay(50); //Tiempo
 digitalWrite(led_naranja,LOW); 
 delay(50); //Tiempo
 digitalWrite(led_rojo,HIGH); 
 delay(50); //Tiempo
 digitalWrite(led_rojo,LOW); 
 delay(50); //Tiempo
 digitalWrite(led_azul,HIGH); 
 delay(50); //Tiempo
 digitalWrite(led_azul,LOW); 
 delay(50);
 } 
 
 }
 }
//Fin del programa
