// Codigo AnalogReadSerial, basado en el codigo de ejemplo proporcionado por Arduino
// utilizacion de potentiometro para variar e interpretar lectura analoga

void setup() 
{
  Serial.begin(9600);   // Inicializacion de monitor Serial a 9600 baudios
  pinMode(10,OUTPUT);   // Definir Pin 10 como salida
  pinMode(11,INPUT);    // Definir Pin 11 como entrada
}

void loop() 
{
  int sensorValue = digitalRead(11);  // Lectura de Pin 11, esperando PWM
  Serial.println(sensorValue);        // Reporte en monitor Serial
  delay(10);
}

// El codigo no funciona, los puertos digitales no pueden trabajar como entrada analoga
