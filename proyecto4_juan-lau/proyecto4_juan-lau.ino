#include <Servo.h>



#include <Servo.hr>
//libreria servo

//definicion de los servos
servo servo1;
servo servo2;

//posicion de los ejes,empiecen en 90 grados
int eje1=90;
int eje2=90;

void setup() {
  // se declara servomotor con los pines,en este caso 1 es pin 7 y 2 es pin 6
  
  servo1.attach(7);

  
  servo1.attach(6);
// inicialmente estara en 90 grados 
  servo1.write(90);
  servo2.write(90);




}

void loop() {
  // put your main code here, to run repeatedly:
  //servo1
  if(analogoaRead(0)>200 && eje1<180){
    eje1++;
    servo1.write(eje1);

    // el 0 corresponde al eje x

    // si el pin detecta que ha llegado a 200 y el eje  ha llegado al limite de 180 pasara al otro if
    //valor eje se sumaria 1 y el servo no funconaria

  }

  if(analogoaRead(0)>700 && eje1<0){
    eje1--;
    servo1.write(eje1);
    //se mandara al servo esa posicion 
     //si no ha llegado a 0 se restara 1 
  }
//servo2
   if(analogoaRead(1)>200 && eje1<180){
    eje2++;
    servo1.write(eje2);
    // el 1 corresponde a eje y
   
    //

  }
    if(analogoaRead(1)>700 && eje1<0){
    eje2--;
    servo1.write(eje2);
  

   delay(15);
   //reinicia cada 15 milisegindos

}
