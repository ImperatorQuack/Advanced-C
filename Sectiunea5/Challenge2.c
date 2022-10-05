/*
Our second challenge is to write a c program that finds the sum of various numbers
You cannot pass any variable representing the running total to the sum() function
*/
#include <stdio.h>

int sum(int num);


int main(){
    
    printf("suma este %d\n",sum(25));
    printf("suma este %d\n",sum(15));
    printf("suma este %d\n",sum(30));

    return 0;
}

int sum(int num){

    static int rez;
    rez+=num;
}