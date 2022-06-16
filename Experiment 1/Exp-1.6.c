// Write a program to compute Fahrenheit from centigrade
//(f=1.8*c +32)

#include<stdio.h>

int main()
{
    int centigrade = 0;
    printf("Enter the value in centigrade: ");
    scanf("%d",&centigrade);
    float fahrenheit = (1.8*centigrade) +32;
    printf("Equivalent tempreture in Fahrenheit is: %f",fahrenheit);

    return 0;
}