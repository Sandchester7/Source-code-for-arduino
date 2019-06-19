#include <Servo.h>

Servo doorServo;
Servo fingerServo;
int swPin=2;
int pos=0;
int selection=0;
void setup() {
  // put your setup code here, to run once:
 pinMode(swPin, INPUT);
 doorServo.attach(9);
 fingerServo.attach(10);
 doorServo.write(90);
 fingerServo.write(129);
 randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(swPin) == HIGH){
      selection=1;
      switch (selection){
      case 1: simpleClose(); break;
      case 2: shyclose();break;
      case 3: annoyedmove();break;
      case 4: crazydoor();break;
      case 5: slow();break;
      case 6: serious();break;
      case 7: trollClose();break;
      case 8: matrix();break;
      case 9: sneak();break;
    }}}
   // basic move 
   void simpleClose() 
   {    
   //Moving door
    for(pos = 155; pos > 0; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
    //Moving hand
    for(pos = 129; pos > 0; pos -= 4)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    }  
    
    //hiding hand
    for(pos = 0; pos<=129; pos+=4)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    } 
      
    //hiding door
    for(pos = 0; pos<=80; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
   }
   void shyclose(){
    for(pos = 80; pos > 40; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    delay(4000);
    for(pos=40;pos>0;pos-=3)
    {//door move 2
      doorServo.write(pos);
      delay(15);
    }//hand move
    for(pos=129; pos>0;pos-=4){
      fingerServo.write(pos);
      delay(15);
    }
    for(pos=0;pos<=129;pos+=4){//finger hide
      fingerServo.write(pos);
      delay(15);
    }
    for(pos=0;pos<=40;pos+=3){
      doorServo.write(pos);
      delay(15);
      }
    delay(5000);
    for(pos=40;pos<=80;pos+=3){
      doorServo.write(pos);
      delay(15);
    }
   }
   void annoyedmove(){
    for (pos=80;pos>0;pos-=3){//door move
      doorServo.write(pos);
      delay(15);
    }
    for (pos=129;pos>0;pos-=4){
      fingerServo.write(pos);
      delay(15);
    }
    for (int n=0;n<5;n++){
      if(n%2==1){
        for(pos=0;pos<60;pos+=4){
          fingerServo.write(pos);
          delay(15);
        }
      }
      else{
        for(pos=60;pos>0;pos-=4){
          fingerServo.write(pos);
          delay(15);
        }
      }
    }
    for(pos=0;pos<129;pos+=4){
      fingerServo.write(pos);
      delay(15);
    }
    for(pos=155;pos>80;pos-=3){
      doorServo.write(pos);
      delay(15);
    }
   }
   void crazydoor()
  {
    
   //Moving door
    for(pos = 80; pos > 40; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
  
    //hiding door
    for(pos = 40; pos<=80; pos+=5)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
   //Moving door
    for(pos = 80; pos > 40; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
  
    //hiding door
    for(pos = 40; pos<=80; pos+=15)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
    delay(700);
   //Moving door
    for(pos = 80; pos > 40; pos -= 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    delay(700);
    //hiding door
    for(pos = 40; pos<=80; pos+=5)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 

  //Moving door
    for(pos = 80; pos > 0; pos -= 8)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
    //Moving hand
    for(pos = 129; pos > 0; pos -= 3)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    }  
    
    //hiding hand
    for(pos = 0; pos>=129; pos+=3)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    } 
      
    //hiding door
    for(pos = 0; pos<=80; pos+=15)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    }    
    
  }   
  void slow()
 {
 
//Moving door
    for(pos = 80; pos < 155; pos += 1)   
    {                                   
    doorServo.write(pos);              
    delay(30);                       
    }
   
    //Moving hand
    for(pos = 0; pos < 129; pos += 1)  
    {                                   
    fingerServo.write(pos);               
    delay(30);                       
    }  
    
    //hiding hand
    for(pos = 129; pos>=0; pos-=1)      
    {                                
    fingerServo.write(pos);               
    delay(30);                        
    } 
      
    //hiding door
    for(pos = 155; pos>=125; pos-=1)     
    {                                
    doorServo.write(pos);              
    delay(30);                      
    }
    delay(100);
    for(pos = 125; pos>=80; pos-=4)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    }     
    
 
 }
  void serious() {
 
//Moving door
    for(pos = 80; pos < 155; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
     
    //Moving hand
    for(pos = 0; pos < 70; pos += 1)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    }
    delay(800);
    
    
    //hiding door
    for(pos = 155; pos>=130; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15); 
    }
    
    //hiding door
    for(pos = 130; pos < 155; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15); 
    } 
     //hiding door
    for(pos = 155; pos>=130; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15); 
    }   
    //hiding door
    for(pos = 130; pos < 155; pos+=3)     
    {                                
    doorServo.write(pos);              
    delay(15); 
    } 
     
    fingerServo.write(40);
    delay(1000);
      
    //Moving hand
    for(pos = 40; pos < 129; pos += 4)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    } 
    
    //hiding hand
    for(pos = 129; pos>=0; pos-=4)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    } 
    
      
    for(pos = 120; pos>=80; pos -= 1)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
   
     
} 
void trollClose(){
//Moving door
    for(pos = 80; pos < 155; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
    //Moving hand
    for(pos = 0; pos < 127; pos += 4)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    }
    //hiding door
    for(pos = 155; pos>=130; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    }   
    delay(2000);
    
    for(pos = 130; pos < 155; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    
    for(pos = 155; pos>=140; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15);
    }
    for(pos = 140; pos < 155; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    delay(500);
    //hiding hand
    for(pos = 127; pos>=0; pos-=4)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    } 
      
    //hiding door
    for(pos = 155; pos>=80; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 

}
void matrix()
{

 //Moving door
    for(pos = 80; pos < 155; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
    //Moving hand
    for(pos = 0; pos < 80; pos += 4)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    }
    
    for(pos = 80; pos < 129; pos += 1)  
    {                                   
    fingerServo.write(pos);               
    delay(30);                       
    }  
    delay(300);
    
    for(pos = 129; pos>=0; pos-=4)      
    {                                
    fingerServo.write(pos);               
    delay(10);                        
    } 
      
    //hiding door
    for(pos = 155; pos>=80; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
  
}

void sneak() 
   {    
   //Moving door
    for(pos = 80; pos < 130; pos += 1)   
    {                                   
    doorServo.write(pos);              
    delay(30);                       
    }
    delay(2000);
    
    //Moving hand
    for(pos = 0; pos < 40; pos += 1)  
    {                                   
    fingerServo.write(pos);               
    delay(30);                       
    }  
        
    delay(500);
    
    for(pos = 130; pos < 155; pos += 4)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    delay(100);
    
    for(pos = 40; pos < 90; pos += 4)  
    {                                   
    fingerServo.write(pos);               
    delay(15);                       
    }  
    delay(500);
    //hiding hand
    for(pos = 90; pos>=70; pos-=4)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    }
    delay(100);
    for(pos = 70; pos < 90; pos += 4)  
    {                                   

    fingerServo.write(pos);               
    delay(15);                       
    }
    delay(100);
    for(pos = 90; pos>=70; pos-=4)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    }
    delay(100);
       
    for(pos = 70; pos < 129; pos += 4)  
    {                                   

    fingerServo.write(pos);               
    delay(15);                       
    }
    
    for(pos = 129; pos>=0; pos-=4)      
    {                                
    fingerServo.write(pos);               
    delay(15);                        
    }    
    //hiding door
    for(pos = 155; pos>=80; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    } 
   } 
