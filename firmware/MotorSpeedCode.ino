#include <Wire.h>

// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley
// $Id: ConstantSpeed.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
// AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
//temporary pins for the LEDS


AccelStepper stepper(AccelStepper::DRIVER, 2, 3);
LiquidCrystal_I2C lcd(0x27, 16, 2);  

double flowRate; 
double diameter;
// converting the mL to mm^3 to mL
double conversionFactor = 0.001;
const float MY_PI = 3.14159265;
const int buttonPin = 4;
const int redLED = 11;
const int greenLED = 10;
const int blueLED = 9;
const int latchingButton = 5;
boolean motorRunning = false;
long lastStepCount = 0;



void setup()
{  //the maxiumum speed the motor is supposed to go 
   //steps per second 1000/sec
   stepper.setMaxSpeed(1000);
   stepper.setSpeed(50);

   pinMode(buttonPin, INPUT_PULLUP); 
   pinMode(latchingButton,INPUT_PULLUP);

   pinMode(redLED, OUTPUT);
   pinMode(greenLED, OUTPUT);
   pinMode(blueLED, OUTPUT);
   
  lcd.init();        // initialize the LCD
  lcd.backlight();   // turn on the backlight

  lcd.setCursor(0, 0);
  lcd.print("RATE:");
  //change this when he tells the flow rate 
  lcd.print("0.6 mL");

  lcd.setCursor(0, 1);
  lcd.print("I2C LCD Ready");

}

double calcArea(double diameter){
   double r = diameter/2.0;
   return MY_PI*r*r;
}


double numStepsPerSec(double diameter,double flowRate){
double leadScrew = 2.0;
double motorStepRate = 3200;
double area = calcArea(diameter);
//converts mL per min to mL per second 
double flowMlSec = flowRate/60.0;
double volumePerRev = (leadScrew)*area; // mm^3/rev
double volumePerStep = (volumePerRev/motorStepRate);//mm^3/step
double mlPerStep = volumePerStep*(conversionFactor);//mm^3--> mL/step
double stepsPerSec = (flowMlSec/mlPerStep);//step/sec
return stepsPerSec;
}

// Computes remaining time based on how much volume is left
double computeRemainingTime(double diameter, double flowRate, double totalVolume_ml, long stepsMoved) {
  double leadScrew = 2.0;
  double motorStepRate = 3200;

  // --- area of syringe ---
  double area = calcArea(diameter);

  // --- volume moved per step (mm^3/step) ---
  double volumePerRev = leadScrew * area;                  // mm^3 per full lead screw revolution
  double volumePerStep = volumePerRev / motorStepRate;     // mm^3 per step

  // convert mm^3 → mL
  double mlPerStep = volumePerStep * conversionFactor;

  // --- total delivered so far ---
  double delivered_ml = stepsMoved * mlPerStep;

  // --- remaining volume ---
  double remaining_ml = totalVolume_ml - delivered_ml;
  if (remaining_ml < 0) remaining_ml = 0;

  // --- compute remaining time ---
  if (flowRate <= 0) return -1;  // avoid divide by zero
  double remainingTime_sec = (remaining_ml / flowRate) * 60.0;

  return remainingTime_sec;
}



void loop()
{  
  //when the button is pressed it is supposed to be yellow
   boolean buttonPressed = (digitalRead(buttonPin)==LOW);
   boolean latchingButtonPressed = (digitalRead(latchingButton)==HIGH);
   if(buttonPressed && !latchingButtonPressed){
    //stops the motor and makes it yellow 
    stepper.setSpeed(0);
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, LOW);
   }
     else if (latchingButtonPressed) {
    stepper.setSpeed(0);             // optional: stop motor when red
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, LOW);
  }

   //if the latching button is pressed then make it red 
   else{
    //if the button is not pressed and if the latching button is not pressde it turns it red 
    stepper.setSpeed(numStepsPerSec(14.9, 0.6));
    stepper.runSpeed();
    //turns it to green
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, LOW);
   }
 // Track steps
long currentSteps = stepper.currentPosition();
// Compute remaining time
double remainingTime = computeRemainingTime(14.9, 0.6, 10.0, currentSteps); // diameter, flowRate, totalVolume(mL)

// Display remaining time
lcd.setCursor(0, 1);
lcd.print("Left: ");
lcd.print(remainingTime);
lcd.print(" s  ");

stepper.runSpeed();
}
