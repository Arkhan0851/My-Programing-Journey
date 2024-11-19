const int trigPin = 15;
const int echopin = 2;
void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echopin, INPUT);}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = duration * 0.034 / 2;
  if (distance == 0) {
    Serial.println("Tidak ada objek terdeteksi");
  }else{
    Serial.print("Jarak");
    Serial.print(distance);
    Serial.println(" cm");}
   delay(500);}
  
