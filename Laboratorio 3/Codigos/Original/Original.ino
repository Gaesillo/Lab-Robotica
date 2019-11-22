// Autores:
// Julio Cesar Fuentealba Concha
// Braulio Bustos
// Ingenieria de Ejecucion Mecanica
// Laboratorio de Topico de especialidad: Robotica

void setup() {
  pinMode(2,OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
  delay(2000);
}
