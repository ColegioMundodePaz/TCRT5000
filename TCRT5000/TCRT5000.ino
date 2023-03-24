int sensor;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(10);
  if(sensor == HIGH){
    Serial.println("SOBRE LA LINEA");
  } else {
    Serial.println("FUERA DE LA LINEA");
  }
  delay(50);
}
