// Codigo Blink usando ciclo FOR, basado en el codigo de ejemplo de Arduino

// Setup, configuracion de pines del Arduino UNO
void setup() 
{
  // Pin 8 (digital) como salida.
  pinMode(8, OUTPUT);
}

// Loop, codigo a ejecutar para parpadeo del LED con variacion de tiempos
void loop() 
{
  for(float i=0; i<=10; i=i+1)
  {
    int A=i*100;
    digitalWrite(8, HIGH);
    delay(A);
    digitalWrite(8, LOW);
    delay(A);
  }
}
