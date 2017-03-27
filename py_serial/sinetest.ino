/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;

float sinx[]={0,0.173648,0.34202,0.5,0.642788,0.766044,0.866025,0.939693,0.984808,1.0
            ,0.984808,0.939693,0.866025, 0.766044,0.642788,0.5,0.34202,0.173648,0
            ,-0.173648,-0.34202,-0.5,-0.642788,-0.766044,-0.866025,-0.939693,-0.984808,-1.0
            ,-0.984808,-0.939693, -0.866025, -0.766044,-0.642788,-0.5,-0.34202,-0.173648};
           
// the setup routine runs once when you press reset:
int count;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  count=0;
}

// the loop routine runs over and over again forever:
void loop() {
  
  
  // print out the state of the button:
  Serial.println(sinx[count]);
  count=count+1;
  count=count%36;
  delay(1000);        // delay in between reads for stability
}



