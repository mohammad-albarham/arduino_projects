#define motion_Sensor 3


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motion_Sensor,INPUT);
  pinMode(4,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(motion_Sensor)==HIGH) {
    digitalWrite(4,HIGH); 
  }
  else  digitalWrite(4,LOW); 

}
