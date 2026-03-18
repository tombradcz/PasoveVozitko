u_int mikrofon;
int maximum = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  mikrofon = analogRead(A0);
  //Serial.println(mikrofon);

 

  }
  




}
