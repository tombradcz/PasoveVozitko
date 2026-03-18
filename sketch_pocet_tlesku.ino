u_int mikrofon;
int maximum = 10;
int hranice = 80;
int stav = 0;
int cas1;


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

  if(stav == 1){
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
}

else if(stav == 0){
digitalWrite(3,LOW);
digitalWrite(4,LOW);
}
  
  mikrofon = analogRead(A0);
  //Serial.println(mikrofon);

if(mikrofon > hranice){
  cas1 = millis();
  stav= 0;
  delay(200);
 
      while((millis()-cas1)<2000){
      if(analogRead(A0)>hranice){
        
          stav = 1;
        
                          }
                                 }

                       }




Serial.println(stav);

  }
  





