# smart water level
 Proteus smart water detection with aduino code

 The code is a program that uses the Arduino to control an LED, buzzer, and LCD.
 The code starts by declaring variables for the pins used in the circuit.
 It then declares two integers: percentage and duration.
 Percentage is set to 100% while duration is set to 0 seconds.
 The next line of code sets up a long variable called distance which will be used later on in the program when calculating how far away from usonic it was detected at.
 Next, there are three lines of code that initialize all of the components needed for this project: LiquidCrystal lcd(12, 11, 5), int trigger = 7; int echo = 6; int buzzer = 13; //const int ledPin = 13; Then comes one line of code that initializes m11 with 8 because it's pin number 1 on the Arduino board and m12 with 9 because it's pin number 2 on the Arduino board (the first row).
 Then we have another line where we define usonic as being equal to 0.034 meters per second squared or 34 centimeters per second squared (cm/s2) which is equivalent to 34 inches per second squared or 3 feet per second squared (ft/s2).
 This value will
 The code is a simple example of how to use the LiquidCrystal library.
 The first line includes Wire.h and LiquidCrystal_I2C.h, which are required for this sketch.
 Next, we declare the variables that will be used in this sketch: m11, m12, usonic, percentage and duration.
 m11 and m12 are pins on the Arduino's I2C bus connected to the LCD module; usonic is an oscillator frequency defined by 1/4th of a second; percentage is a variable that stores our current percentage value; duration will store the time it takes for our LED to light up after pressing the button; distance will store how far away from our target object we are
 The code starts by declaring the variables that will be used in this program.
 The first variable is an integer called "counter" which will hold the number of times a button has been pressed.
 Next, there are two integers called "button1" and "button2".
 These represent the buttons on your Arduino board that you want to use for input.
 Finally, there is a boolean called "isButtonPressed".
 This variable will be used to determine if either of the buttons have been pressed or not.
 The code then starts with some basic setup commands such as setting up pins for output and input, initializing serial communication, and setting up digital pin modes (which can be found in any electronics textbook).
 After these commands are run through, it sets up two variables: one representing each button's state (pressed or not) and another representing whether or not both buttons have been pressed at once (in other words: when both values are true).
 Next comes a function call which tells Arduino to begin execution of whatever follows after this line.
 In this case it calls lcd() which stands for Liquid Crystal Display Library .
 This library allows us to control LCD screens using I2C communication protocol over 4 wires - SDA(data), SCL
 The code will initialize the LCD to a 16 chars and 2 line display.
 The next step is to initialize the Arduino's serial port at 9600 baud rate.
 Next, you'll need to configure two pins as outputs (m11 and m12) and two pins as inputs (trigger and echo).
 The buzzer pin is configured as an output.
 The code starts by turning on the buzzer.
 The code then uses a digitalWrite to turn on the trigger, which is connected to an LED and a photocell.
 This will allow for the sensor to detect when someone is near it.
 The next line of code sets up variables that are used later in the program: duration, distance, echo, usonic.
 These variables are used in calculations later in the program.
 Next comes a loop that continuously runs through two different functions: void setup() { // Turn off all outputs digitalWrite(ledPin1, LOW); digitalWrite(ledPin2, LOW); } and void loop().
 In this loop there is one function called analyze(), which calculates how long it takes for sound waves from your voice to reach your water level sensor and return back again (duration).
 Then there's another function called print(), which prints out text onto an LCD screen using lcd.print().
 The code is a simple example of how to use the distance sensor.
 The code above sets up the hardware for the project, and then it starts running in loop() function.
 The first line of code turns on the buzzer.
 The next line checks if there is water level in the tank, and prints "ST-Water Level" when there is water level in the tank.
 Then it sets cursor to 0,1 so that we can print text on LCD screen with lcd.print().
 Next line prints "LOADING ... ".
 Then delay(1000) waits for 1 second before printing another message on LCD screen with lcd.print(" LOADING ...").
 The code starts by declaring a variable called percentage.
 The value of the variable is set to 0 if it's less than 0, and 100 if it's greater than or equal to 100.
 The code then checks whether the distance is less than 1023 cm (the capacity in tank) and prints out "Capacity in" on LCD screen with cursor at position 1.
 If the distance is greater than or equal to 1023 cm, then it prints out "Distance:" on LCD screen with cursor at position 1.
 The code checks the distance of the tank in order to determine its capacity.
 If the percentage is less than 0, then it will be set to 0.
 If it is greater than 100, then it will be set to 100.
 If the percentage is greater than 90, then a message will be displayed on the LCD screen stating "Capacity in" followed by a percentage value and centimeters.
