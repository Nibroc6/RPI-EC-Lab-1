//////////////////////////
//** Lab 1
//** ENGR-2350 S26
//** Names: XXXX
//** Section: X
//** Side: X
//** Seat: X
//////////////////////////

#include "engr2350_mspm0.h"
#include "lab1lib.h"

void GPIOInit();
void testIO();
void controlSystem();


int main() {      /// Main Function ///

    sysInit(); // Basic car initialization
    initSequence(); // Initializes the lab1Lib Driver
    GPIOInit();

    printf("\r\n\n"
           "===========\r\n"
           "Lab 1 Begin\r\n"
           "===========\r\n");

    while(1){
        testIO(); // Used in Part A to test the IO
        //controlSystem(); // Used in Part B to implement the desired functionality
    }
}      /// End Main Function ///  


void GPIOInit(){
    // Add initializations of inputs and outputs
    
    // ==== custom ====
    GPIO_initDigitalInput(GPIOB, GPIO_PIN3); // init push 2
    GPIO_initDigitalInput(GPIOB, GPIO_PIN2); // init push 1
    GPIO_initDigitalInput(GPIOA, GPIO_PIN9); // init slide switch
    
    GPIO_initDigitalOutput(GPIOA, GPIO_PIN12); //init biLED A
    GPIO_initDigitalOutput(GPIOA, GPIO_PIN13); //init biLED B
    
    // ==== onboard ====
    GPIO_initDigitalInput(GPIOA, GPIO_PIN7); // init bumper 1
    GPIO_initDigitalInput(GPIOA, GPIO_PIN14); // init bumper 2
    GPIO_initDigitalInput(GPIOB, GPIO_PIN5); // init bumper 3
    GPIO_initDigitalInput(GPIOB, GPIO_PIN21); // init bumper 4
    GPIO_initDigitalInput(GPIOB, GPIO_PIN23); // init bumper 5
    GPIO_initDigitalInput(GPIOB, GPIO_PIN25); // init bumper 6
    
    GPIO_initDigitalInput(GPIOB, GPIO_PIN22); // init rgb 1
    GPIO_initDigitalInput(GPIOB, GPIO_PIN26); // init rgb 2
    GPIO_initDigitalInput(GPIOB, GPIO_PIN27); // init rgb 3
    
    GPIO_initDigitalInput(GPIOB, GPIO_PIN15); // init left motor on/off
    GPIO_initDigitalInput(GPIOB, GPIO_PIN8); // init left motor direction
    
    GPIO_initDigitalInput(GPIOB, GPIO_PIN16); // init right motor on/off
    GPIO_initDigitalInput(GPIOB, GPIO_PIN0); // init right motor direction
}

void testIO(){
    // Add printf statement(s) for testing inputs

    // Example code for testing outputs
    while(1){
        uint8_t cmd = getchar();
        if(cmd == 'r'){
            // Turn RGB LED Red
        }else if(cmd == 'g'){
            // Turn RGB LED Green
        }// ...
    }
}

void controlSystem(){

}
