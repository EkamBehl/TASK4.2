int led1=D2;
int led2=D3;

int led3=D4;

void setup() {
    
    //setting all the pin outputs
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    //particle function  
    Particle.function("led",ledToggle);
    
    //first turn all leds off!!
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    
}

void loop() {
    
}
//MAIL FUNCTION WHICH SETS CASES LIKE ON1,ON2,ON3 WHICH TURNS THEIR RESPECTIVE LEDS
int ledToggle(String command){
    if(command=='on1'){
        digitalWrite(led1,HIGH);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        return 1;
        
    }
    else if(command=='on2'){
        digitalWrite(led1,LOW);
        digitalWrite(led2,HIGH);
        digitalWrite(led3,LOW);
        return 0;
    }
    else if(command=='on3'){
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,HIGH);
        return 0;
        
    }
    else{
        return -1;
    }
}
