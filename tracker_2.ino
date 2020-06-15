int switch1 = 2; 
int led1 = 4; 

int switch2 = 5; 
int led2 = 6; 

int switch3 = 8; 
int led3 = 7; 

int switch4 = 10; 
int led4 = 9; 

int switch5 = 12; 
int led5 = 11; 

char oldSwitch1 = LOW; 
char newSwitch1 = LOW; 
char oldLED1 = LOW; 
char newLED1 = LOW; 

char oldSwitch2 = LOW; 
char newSwitch2 = LOW; 
char oldLED2 = LOW; 
char newLED2 = LOW;

char oldSwitch3 = LOW; 
char newSwitch3 = LOW; 
char oldLED3 = LOW; 
char newLED3 = LOW;

char oldSwitch4 = LOW; 
char newSwitch4 = LOW; 
char oldLED4 = LOW; 
char newLED4 = LOW;

char oldSwitch5 = LOW; 
char newSwitch5 = LOW; 
char oldLED5 = LOW; 
char newLED5 = LOW;

void setup() {
  pinMode(led1,OUTPUT); 
  pinMode(switch1,INPUT_PULLUP); 
  pinMode(led2,OUTPUT); 
  pinMode(switch2,INPUT_PULLUP);
  pinMode(led3,OUTPUT); 
  pinMode(switch3,INPUT_PULLUP);
  pinMode(led4,OUTPUT); 
  pinMode(switch4,INPUT_PULLUP);
  pinMode(led5,OUTPUT); 
  pinMode(switch5,INPUT_PULLUP);

}

void loop() {
  light1 (); 
  light2 (); 
  light3 (); 
  light4 (); 
  light5 (); 
}

void light1(){
  newSwitch1 = digitalRead(switch1);
  newLED1 = digitalRead(led1); 
    if (newSwitch1 && !oldSwitch1){
        if(newLED1 == LOW){
        digitalWrite(led1, HIGH);
        }
        else{
        digitalWrite(led1, LOW);
        }
    }
    // Update
    oldSwitch1 = newSwitch1;
    oldLED1 = newLED1; 
}

void light2(){
  newSwitch2 = digitalRead(switch2);
  newLED2 = digitalRead(led2); 
    if (newSwitch2 && !oldSwitch2){
        if(newLED2 == LOW){
        digitalWrite(led2, HIGH);
        }
        else{
        digitalWrite(led2, LOW);
        }
    }
    // Update
    oldSwitch2 = newSwitch2;
    oldLED2 = newLED2; 
}

void light3(){
  newSwitch3 = digitalRead(switch3);
  newLED3 = digitalRead(led3); 
    if (newSwitch3 && !oldSwitch3){
        if(newLED3 == LOW){
        digitalWrite(led3, HIGH);
        }
        else{
        digitalWrite(led3, LOW);
        }
    }
    // Update
    oldSwitch3 = newSwitch3;
    oldLED3 = newLED3; 
}

void light4(){
  newSwitch4 = digitalRead(switch4);
  newLED4 = digitalRead(led4); 
    if (newSwitch4 && !oldSwitch4){
        if(newLED4 == LOW){
        digitalWrite(led4, HIGH);
        }
        else{
        digitalWrite(led4, LOW);
        }
    }
    // Update
    oldSwitch4 = newSwitch4;
    oldLED4 = newLED4; 
}

void light5(){
  newSwitch5 = digitalRead(switch5);
  newLED5 = digitalRead(led5); 
    if (newSwitch5 && !oldSwitch5){
        if(newLED5 == LOW){
        digitalWrite(led5, HIGH);
        }
        else{
        digitalWrite(led5, LOW);
        }
    }
    // Update
    oldSwitch5 = newSwitch5;
    oldLED5 = newLED5; 
}
