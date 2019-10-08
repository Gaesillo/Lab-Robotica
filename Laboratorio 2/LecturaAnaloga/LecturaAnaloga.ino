// Codigo AnalogReadSerial, basado en el codigo de ejemplo proporcionado por Arduino
// utilizacion de potentiometro para variar e interpretar lectura analoga

void setup() 
{
  Serial.begin(9600);   // Inicializacion de monitor Serial a 9600 baudios
}

void loop() 
{
  int sensorValue = analogRead(A0);   // Lectura de entrada analoga en Pin A0, definiendola como variable
  Serial.println(sensorValue);        // Reporte de la variable en monitor Seria
  delay(10);
}
