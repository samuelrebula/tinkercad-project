// C++ code

int state = 0; // declaring circuit state variable

void setup()
{
  pinMode(13, OUTPUT); // red LED
  pinMode(12, OUTPUT); // yellow LED
  pinMode(11, OUTPUT); // green LED
  pinMode(7, INPUT); // key
}

void signal_cycle(int needed) // if the key is pressed by the person
  // the green light will last less for the person in need
  // can cross
  
{
  if (necess == 0){ // normal cycle
   
    // red light
    digitalWrite(13, HIGH);
    delay(5000); // red signal yet
    digitalWrite(13, LOW);

    // green light
    digitalWrite(11, HIGH);
    delay(10000);
    digitalWrite(11, LOW); // green signal -> yellow
    
    // yellow light
    digitalWrite(12, HIGH);
    delay(1000); // stays in yellow for 1 sec and restarts the loop
    digitalWrite(12, LOW);
    
  }else if (necess == 1){ // cycle with longer red light

    // red light
    digitalWrite(13, HIGH);
    delay(7000); // red signal yet
    digitalWrite(13, LOW);

    // green light
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(11, LOW); // green signal -> yellow

    // yellow light
    digitalWrite(12, HIGH);
    delay(1500); // stays in yellow for 1 sec and restarts the loop
    digitalWrite(12, LOW);
    
    state = 0;
  }
  
}

void loop()
{
  int button_pressed = digitalRead(7); // reading key status
  
  if (button_apertado == HIGH){ // identifying whether the signal will be
    state = 1; // longer or normal
  }else if (button_pressed == LOW && status != 1){
    state = 0;
  }
  
cycle_signal(state); // calling function
} 
