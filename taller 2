Solucion del taller #2
Developer: Alan David Portilla Castillo

#define TMP A0
#define LED 13 
#define MOTOR 12 

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(MOTOR, OUTPUT);
}

void loop() {
  
  float temperature = analogRead(TMP) * 0.48828125 - 50;

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (isnan(temperature)) {
    Serial.println("Error al leer la temperatura");
    return;
  }

  if (temperature < 5.0) {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  } else if (temperature >= 6.0 && temperature <= 25.0) {
    digitalWrite(LED, LOW);
  } else if (temperature > 25.0) {
    digitalWrite(LED, HIGH);
    digitalWrite(MOTOR, HIGH);
  }
}
