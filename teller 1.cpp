Solucion del taller #1 
Developer: Alan David Portilla Castillo

bool inter = false;

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  char input;
  int value;

  if (Serial.available()) {
    input = Serial.read();
    value = input - '0';
  }
  
  

  switch (value) {
    case 1:
      inter = false;
      digitalWrite(11, HIGH);
      break;
    case 2:
      inter = false;
      digitalWrite(11, LOW);
      break;
    case 3:
      inter = false;
      digitalWrite(12, HIGH);
      break;
    case 4:
      inter = false;
      digitalWrite(12, LOW);
      break;
    case 5:
      inter = false;
      digitalWrite(13, HIGH);
      break;
    case 6:
      inter = false;
      digitalWrite(13, LOW);
      break;
    case 7:
      inter = false;
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      break;
    case 8:
      inter = false;
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      break;
    case 9:
      inter = true;
      break;
  }

  if (inter) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(500);
  }
  
}