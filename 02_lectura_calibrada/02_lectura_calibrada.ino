const int analogPin = 34; // Pin analógico A0
const int digitalPin = 25; // Pin digital D0

// Valores calibrados reales
const int valorSeco = 4095; // Sensor al aire libre
const int valorAgua = 880;  // Sensor en tierra muy húmeda

void setup() {
  Serial.begin(115200);
  pinMode(digitalPin, INPUT);
  delay(1000);
  Serial.println("--- Sistema de Monitoreo Iniciado ---");
}

void loop() {
  int lecturaAnalogica = analogRead(analogPin);
  int lecturaDigital = digitalRead(digitalPin);
  
  // Convertir a porcentaje invertido (4095 = 0%, 880 = 100%)
  int porcentaje = map(lecturaAnalogica, valorSeco, valorAgua, 0, 100);
  
  // Limitar los extremos
  if(porcentaje < 0) porcentaje = 0;
  if(porcentaje > 100) porcentaje = 100;

  // Imprimir en consola
  Serial.print("Humedad Analógica: ");
  Serial.print(lecturaAnalogica);
  Serial.print(" -> (");
  Serial.print(porcentaje);
  Serial.print("%) | ");
  
  Serial.print("Alerta Digital: ");
  if(lecturaDigital == HIGH) {
    Serial.println("SECO (1)");
  } else {
    Serial.println("HÚMEDO (0)");
  }
  
  delay(1500);
}
