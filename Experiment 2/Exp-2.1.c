// Write a C program to find that the accepted number is Negative, or Positive or Zero.

#include<stdio.h>

int main()
{
    float in;
    printf("Please give a numerical input: ");

    int re = scanf("%f",&in);
    if (re == 0)
    {
        printf("The input is invalid.");
    }
    
    if (in>0)
    {
        printf("The input is Positive.");
    }
    else if (in<0) 
    {
        printf("The input is Negative.");
    }
    else if (in==0)
    {
        printf("The input is Zero");
    }
    return 0;
}