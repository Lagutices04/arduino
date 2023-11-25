int PULSADOR = 2;
int LED = 3;


void setup(){
  pinMode(PULSADOR, INPUT);   //Pin dos como entrada
  pinMode(LED, OUTPUT);  //Pin tres como salida
}

void loop(){
  while(digitalRead(PULSADOR)==LOW){

  }
  digitalWrite(LED, HIGH);
  delay(5000);
  digitalWrite(LED, LOW);
  while(digitalRead(PULSADOR)==HIGH){
    
  }
}
