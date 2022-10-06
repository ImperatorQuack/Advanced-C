/*
Write a program to read elements in an array and find the sum of array elements.
You must use a variable length array for the size of your array
The obvious benefit of allowing variable-length arrays is that you don't have to know in advance of your program running, how much memory to allocate for your array variables,
*/
#include <stdio.h>

int main(){
    int arr_length=0;
    int sum=0;
    printf("Specify the length of the array: \n");
    scanf("%d", &arr_length);
    int array[arr_length];

    printf("Insert %d elements in the array. \n", arr_length);

    for(int i=0;i<arr_length;i++){
        scanf("%d", &array[i]);
    }

    for(int i=0;i<arr_length;i++){
        
        sum += array[i];
    }
    
    printf("The Sum of the elements of your array is: %d ", sum);

    

    return 0;
}