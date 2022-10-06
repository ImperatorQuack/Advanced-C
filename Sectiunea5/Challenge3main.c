/*
-create a c program that shares a variable amongst two files
-create a source file named main.c (I named it Challange3main.c)
        -this source file should include a global variable used as a loop counter
        -this file includes a main function that uses the global variable to iteratethrough a loop 5 times
              -inside this loop a function should be invoked(display) that is defined in another file(do not use an iclude file)
              -the display function should take no parameters
-create another source file named display.c
        -the display function is defined in this file
             -this function displays the global variable from main.c(incremented by 1) 

*/
#include <stdio.h>

int counter;
extern void display();

int main(){
    for(counter=0;counter<5;counter++){
        display();
    }

}