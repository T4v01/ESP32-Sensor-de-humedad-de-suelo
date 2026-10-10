const int sensorPin = 34; // Pin analógico donde conectaste A0
int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Iniciando lectura de sensor de humedad de suelo...");
}

void loop() {
  // Leer el valor analógico del sensor
  sensorValue = analogRead(sensorPin);
  
  Serial.print("Valor del sensor (Humedad): ");
  Serial.println(sensorValue);
  
  delay(1000); // Esperar 1 segundo entre lecturas
}
