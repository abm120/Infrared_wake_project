int ledPin[5] ={1,4,7,10,13};                   //initialising 5 LED's with pins  
 int pr=0;                                       //initialising Photoresistor to pin 0  
 void setup()  
 {  
   for(int i=0;i<5;i++)                         //setting pin mode to 5 LED's  
   {  
    pinMode(ledPin[i], OUTPUT);  
   }  
 }  
 void loop()  
 {  
   int pr_input=0;                             //initial value of Photoresistor is set to 0  
   pr_input = analogRead(pr);                  //reading value from analog inut pin A0  
    
   for(int j=0;j<5;j++)                        //setting all LED's to OFF state  
   {  
     digitalWrite(ledPin[j],LOW);  
     delay(2000);                              //wait for 2 seconds
   }  
    
   if(pr_input<=32)        
   {  
    for(int j=0;j<5;j++)                       //Setting 5 LED's to ON state  
    {  
     digitalWrite(ledPin[j],HIGH);  
     delay(2000);                              //wait for 2 seconds

    }  
   }  
   else if(pr_input>32 && pr_input<=76)   
   {  
    for(int j=0;j<4;j++)                       //Setting 4 LED's to ON state  
    {  
     digitalWrite(ledPin[j],HIGH);  
     delay(2000);                              //wait for 2 seconds
    }  
   }  
   else if(pr_input>76 && pr_input<=184)  
   {  
    for(int j=0;j<3;j++)                       //Setting 3 LED's to ON state  
    {  
     digitalWrite(ledPin[j],HIGH);  
     delay(2000);                              //wait for 2 seconds
    }  
   }  
   else if(pr_input>184 && pr_input<=235)  
   {  
    for(int j=0;j<2;j++)                       //Setting 2 LED's to ON state  
    {  
     digitalWrite(ledPin[j],HIGH);  
     delay(2000);                              //wait for 2 seconds
    }  
   }  
   else if(pr_input>235 && pr_input<=655)  
   {  
     digitalWrite(ledPin[1],HIGH);            //Setting 1 LED to ON state  
     delay(2000);                             //wait for 2 seconds
   }  
    
 }  
