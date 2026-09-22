int counter = 0;

void setup() {

  Serial.begin(9600);
  pinMode(2, INPUT);
  attachInterrupt(0, interruptServiceRoutine, RISING); // RISING      FALLING     LOW     CHANGE

}

void loop() {

  Serial.println(counter); 
  delay(1000);
  
}


void interruptServiceRoutine(){
  
    counter++; 
    
}
