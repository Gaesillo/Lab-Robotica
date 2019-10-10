// Codigo Blink, basado en el codigo de ejemplo de Arduino

// Setup, configuracion de pines del Arduino UNO
void setup() 
{
  // Pin 8 (digital) como salida.
  pinMode(8, OUTPUT);
}

// Loop, codigo a ejecutar para parpadeo del LED
void loop() 
{
  digitalWrite(8, HIGH);  // 5V a LED mediante Pin 8
  delay(1000);            // Mantener 1 segundo encendido
  digitalWrite(8, LOW);   // 0V a LED mediante Pin 8
  delay(1000);            // Mantener 1 segundo apagado
}
