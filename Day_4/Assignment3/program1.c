// Write a C program to find maximum between two numbers using conditional operator

#include <stdio.h>

int main(){

    int a,b;

    printf("Enter the Value of two numbers:");
    scanf("%d %d", &a, &b);

    int max = a;

    if( b > a )
        max = b;
    
    printf("Max num is:%d", max);
}