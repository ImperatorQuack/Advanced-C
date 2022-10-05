/*
Our first challenge is to write a small program that declares the following variables
-an int variable with block scope and temporary storage
-a global double variable that is only accessible within the entire program
-a float local variable with permanent storage
-a register int variable
-a function that is only accesible with the file it is defined
*/
#include <stdio.h>

static int func(int num);

static double x=3.1415;
float  y=4.32;

int main(){
    register int r;
    float result;
    for(int i=0; i<25;i++){
        if(i%2==0){
            r+=i/2;
        }
        else r+=(i+1)/2;
    }
    result = (float )x * func(y)-r;
    printf("rezultatul este: %.2d",result);

    return 0;

}

static int func(int num){
    int temp=num*7;
    static float perm =9.22;
    return temp;
}