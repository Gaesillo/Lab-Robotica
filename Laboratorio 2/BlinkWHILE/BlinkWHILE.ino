// Codigo Blink usando ciclo WHILE, basado en el codigo de ejemplo de Arduino

// Setup, configuracion de pines del Arduino UNO
void setup()
{
  pinMode(8, OUTPUT);
}

// Loop, codigo a ejecutar para parpadeo del LED con variacion de tiempos
void loop() {
  int i;
  while(i<=10)
  {
    int A=i*100;
    digitalWrite(8, HIGH);
    delay(A); 
    digitalWrite(8, LOW); 
    delay(A); 
    i=i+1;
  }
}
