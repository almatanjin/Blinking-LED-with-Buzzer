int L1 = 13;
int L2 = 12;
int L3 = 11;
int L4 = 10;
int L5 = 9;
int L6 = 8;
int L7 = 7;  //7 LED pin

int buttonPin = 6;  //the number of the pushbutton pin

int de=100;  // delay time

int p=0;
int var=0;// variable for loop

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  

  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT); //led
  
  pinMode(buttonPin, INPUT);//switch

}

void loop() 
{
 buttonState = digitalRead(buttonPin);

 if (buttonState == HIGH){
   var=0;
   digitalWrite(L1,1);
   delay(de);
   digitalWrite(L2,1);
   delay(de);
   digitalWrite(L3,1);
   delay(de);
   digitalWrite(L4,1);
   delay(de);
   digitalWrite(L5,1);
   delay(de);
   digitalWrite(L6,1);
   delay(de);
   digitalWrite(L7,1);
   delay(de);
   
   digitalWrite(L7,0);
   delay(de);
   digitalWrite(L6,0);
   delay(de);
   digitalWrite(L5,0);
   delay(de);
   digitalWrite(L4,0);
   delay(de);
   digitalWrite(L3,0);
   delay(de);
   digitalWrite(L2,0);
   delay(de);
   digitalWrite(L1,0);
   delay(de);
   digitalWrite(L7,1);
   delay(de);
   digitalWrite(L5,1);
   delay(de);
   digitalWrite(L2,1);
   delay(de);
   digitalWrite(L1,1);
   delay(de);
   digitalWrite(L3,1);
   delay(de);
   digitalWrite(L4,1);
   delay(de);
   digitalWrite(L6,1);
   delay(de);
   digitalWrite(L6,0);
   delay(de);
   digitalWrite(L4,0);
   delay(de);
   digitalWrite(L3,0);
   delay(de);
   digitalWrite(L1,0);
   delay(de);
   digitalWrite(L2,0);
   delay(de);
   digitalWrite(L5,0);
   delay(de);
   digitalWrite(L7,0);
   delay(de);
   digitalWrite(L1,1); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //1
  delay(de); 
 digitalWrite(L7,1);
 digitalWrite(L5,1);
 digitalWrite(L3,0);
   digitalWrite(L1,0);
   digitalWrite(L2,0);
   digitalWrite(L4,0);
   digitalWrite(L6,0);
   delay(de);
   digitalWrite(L7,0);
   digitalWrite(L5,0);
   digitalWrite(L2,1);
   digitalWrite(L1,1);
   digitalWrite(L3,0);
   digitalWrite(L4,0);
   digitalWrite(L6,0);
   delay(de);
   digitalWrite(L2,0);
   digitalWrite(L1,0);
   digitalWrite(L3,1);
   digitalWrite(L4,1);
   digitalWrite(L6,0);
   digitalWrite(L7,0);
   digitalWrite(L5,0);
   delay(de);
   
   
  
 digitalWrite(L1,0); 
 digitalWrite(L2,1); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //2
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,1); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //3
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,1); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //4
  delay(200); 
  digitalWrite(L6,1);
   delay(de);
   digitalWrite(L4,1);
   delay(de);
   digitalWrite(L3,1);
   delay(de);
   digitalWrite(L1,1);
   delay(de);
   digitalWrite(L7,1);
   delay(de);
   digitalWrite(L5,1);
   delay(de);
   digitalWrite(L2,1);
   delay(200);
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,1); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //5
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,1); 
 digitalWrite(L7,0);  //6
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,1);  //7
  delay(de); 
  
  
  
  
  
  
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,1);  //7
  delay(de); 
  
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,1); 
 digitalWrite(L7,0);  //6
  delay(de);
  
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,1); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //5
  delay(de); 
  
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,1); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //4
  delay(de);  
 
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,1); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //3
  delay(de);  
 
 
  digitalWrite(L1,0); 
 digitalWrite(L2,1); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //2
  delay(de); 
  
   digitalWrite(L1,1); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //1
  delay(de);  
  
  
  
    
  
 digitalWrite(L1,1); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //1
  delay(de);  
  
 digitalWrite(L1,0); 
 digitalWrite(L2,1); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //2
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,1); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //3
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,1); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //4
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,1); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //5
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,1); 
 digitalWrite(L7,0);  //6
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,1);  //7
  delay(de); 
  
   
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,1); 
 digitalWrite(L7,0);  //6
  delay(de);
  
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,1); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //5
  delay(de); 
  
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,1); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //4
  delay(de);  
 
  digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,1); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //3
  delay(de);  
 
 
  digitalWrite(L1,0); 
 digitalWrite(L2,1); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //2
  delay(de); 
  
  
  
  
  
    
  
 digitalWrite(L1,1); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,1);  //1,7
  delay(de);  
  
 digitalWrite(L1,0); 
 digitalWrite(L2,1); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,1); 
 digitalWrite(L7,0);  //2,6
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,1); 
 digitalWrite(L4,0); 
 digitalWrite(L5,1); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //3,5
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,1); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //4
  delay(de); 
 
  
  
  
      
  
 

 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,1); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //4
  delay(de); 
  
 digitalWrite(L1,0); 
 digitalWrite(L2,0); 
 digitalWrite(L3,1); 
 digitalWrite(L4,0); 
 digitalWrite(L5,1); 
 digitalWrite(L6,0); 
 digitalWrite(L7,0);  //3,5
  delay(de); 
  
  
  
 digitalWrite(L1,0); 
 digitalWrite(L2,1); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,1); 
 digitalWrite(L7,0);  //2,6
  delay(de); 
    
 digitalWrite(L1,1); 
 digitalWrite(L2,0); 
 digitalWrite(L3,0); 
 digitalWrite(L4,0); 
 digitalWrite(L5,0); 
 digitalWrite(L6,0); 
 digitalWrite(L7,1);  //1,7
  delay(de);  
  
 
 

 digitalWrite(L1,1); 
 delay(de); 
 digitalWrite(L2,1); 
 delay(de); 
 digitalWrite(L3,1);
 delay(de);  
 digitalWrite(L4,1);
 delay(de);  
 digitalWrite(L5,1);
 delay(de);  
 digitalWrite(L6,1);
 delay(de);  
 digitalWrite(L7,1);  
 delay(de); 
 digitalWrite(L7,0);  
 delay(de); 
 digitalWrite(L6,0);
 delay(de); 
 digitalWrite(L5,0);
 delay(de); 
 digitalWrite(L4,0);
 delay(de); 
 digitalWrite(L3,0);
 delay(de); 
 digitalWrite(L2,0);
 delay(de); 
 digitalWrite(L1,0);
 
 digitalWrite(L1,1);
 delay(100);
  digitalWrite(L1,0);
 delay(100);
  digitalWrite(L1,1);
 delay(100);
  digitalWrite(L2,1);
 delay(100);
  digitalWrite(L2,0);
 delay(100);
  digitalWrite(L2,1);
 delay(100);
  digitalWrite(L3,1);
 delay(100);
  digitalWrite(L3,0);
 delay(100);
  digitalWrite(L3,1);
 delay(100);
  digitalWrite(L5,1);
 delay(100);
  digitalWrite(L5,0);
 delay(100);
  digitalWrite(L5,1);
 delay(100);
 digitalWrite(L4,1);
 delay(100);
 digitalWrite(L4,0);
 delay(100);
 digitalWrite(L4,1);
 delay(100);
 digitalWrite(L7,1);
 delay(100);
 digitalWrite(L7,0);
 delay(100);
 digitalWrite(L7,1);
 delay(100);
 digitalWrite(L6,1);
 delay(100);
 digitalWrite(L6,0);
 delay(100);
 digitalWrite(L6,1);
 delay(600); 
 
 }
 //when buttonstate is low then all led flick
 if (buttonState==LOW){
    
    while(var<1){
              digitalWrite(L7,1);
     delay(50);
     digitalWrite(L7,0);
     delay(50);
      digitalWrite(L7,1);
     delay(50);
      digitalWrite(L5,1);
     delay(50);
      digitalWrite(L5,0);
     delay(50);
     digitalWrite(L5,1);
     delay(50);
     digitalWrite(L2,1);
     delay(5);
     digitalWrite(L2,0);
     delay(50);
     digitalWrite(L2,1);
     delay(50);
     digitalWrite(L1,1);
     delay(50);
     digitalWrite(L1,0);
     delay(50);
     digitalWrite(L1,1);
     delay(50);
     
     digitalWrite(L3,1);
     delay(50);
     digitalWrite(L3,0);
     delay(50);
     digitalWrite(L3,1);
     delay(50);
     digitalWrite(L4,1);
     delay(50);
     digitalWrite(L4,0);
     delay(50);
     digitalWrite(L4,1);
     delay(50);
     
     digitalWrite(L6,1);
     delay(50);
     digitalWrite(L6,0);
     delay(50);
     digitalWrite(L6,1);
     
     delay(50);
     tone(5,450);//siren
     delay(500);
     noTone(5);
     
    var++;
    }
   digitalWrite(L1,0);
   delay(100);
   digitalWrite(L2,0);
   delay(100);
   digitalWrite(L3,0);
   delay(100);
   digitalWrite(L4,0);
   delay(100);
   digitalWrite(L5,0);
   delay(100);
   digitalWrite(L6,0);
   delay(100);
   digitalWrite(L7,0);
   delay(100);//all led off
     
   
}
}

