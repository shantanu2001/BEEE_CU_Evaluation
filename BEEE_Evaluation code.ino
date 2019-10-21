int val = 0;
void setup(){
  for(int i=8; i<=13 ; i++){
    pinMode(i,OUTPUT);
   }
  pinMode(6,INPUT);
}


void loop(){
  val = digitalRead(6);
  if(val== HIGH){
    for(int i = 8; i<=13;i++){
      if(i!=13){
      	 digitalWrite(i,HIGH);
     	 digitalWrite(i+1,HIGH);
     	 delay(200);
        alloff();
      }else{
      digitalWrite(i,HIGH);
      digitalWrite(i-5,HIGH);
        alloff();
      }
      alloff();
    }
  }
  else if(val==0){
     digitalWrite(8,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(12,HIGH);
    delay(500);
      alloff();
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(13,HIGH);
    delay(500);
    alloff();
    delay(500);
       
      }
    }

 
  
 void alloff(void)
{
  for (int i = 8; i < 14; i++) {
    digitalWrite(i, LOW);
  }
 
}