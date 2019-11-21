// Autores:
// Julio Cesar Fuentealba Concha

// Ingenieria de Ejecucion Mecanica
// Laboratorio de Topico de especialidad: Robotica

void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    char t=Serial.read(); // Solo funciona con caracteres, debemos convertir a enteros despues para poder usarlo como numero
    if(t=='1')
    {
      digitalWrite(2, HIGH);
    }
    else if(t=='2')
    {
      digitalWrite(2, LOW);
    }  
  }
}

// Codigo modificado original, no funciona de forma correcta

//void loop() {
//  if (Serial.available() > 0)
//  {
//    int t=Serial.read();
//    if(t==0)
//    {
//      digitalWrite(2, HIGH);
//    }
//    else if(t==1)
//    {
//      digitalWrite(2, LOW);
//    }  
//  }
//}
