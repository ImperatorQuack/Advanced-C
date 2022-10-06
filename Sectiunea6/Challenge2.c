/*
Write a program that uses a flexible array member inside a structure.
Create a structurea named myArray that has a length member and a flexible array member named array.
read in from the user the size of the array at runtime.
Allocate memory for the structure based on this size read from the user.
Set the length member and fill the array with some dummy data.
Print the array elements.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct myArray{
    int arr_length;
    int array[];
};

int main(){

    
    int desiredLength;
    printf("Specify the length of your array: \n");
    scanf("%d", &desiredLength);
    
    size_t size = (sizeof (struct myArray));
    struct myArray *strPtr = malloc(size + sizeof(int)*desiredLength);
    
    for(int i=0;i<desiredLength;i++){
        strPtr->array[i]=i+1;
    }

    printf("The elements of your array are:");

    for(int i=0;i<desiredLength;i++){
        printf("%d , ", strPtr->array[i]);
    }

    return 0;
}