#define TRIG 5   
#define ECHO 2   
#define ENA 13   
#define IN1 14   
#define IN2 12   
#define ENB 25  
#define IN3 27   
#define IN4 26   

void setup() {
  Serial.begin(115200);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 200);
  analogWrite(ENB, 200);

  Serial.println("Starting robot...");
}

long getDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH, 25000);
  if (duration == 0) return 999;

  return duration * 0.0343 / 2;
}

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void leftTurn() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void loop() {
  long distance = getDistance();
  Serial.print("Distance: "); Serial.println(distance);

  if (distance < 15) {     
    stopCar();
    delay(200);

    leftTurn();            
    delay(500);            

    stopCar();
    delay(200);
  }

  forward();               
}
