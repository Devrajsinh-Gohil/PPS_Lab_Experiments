// Write a C program to enter a distance in to kilometre and convert it into 
// meter, feet, inches and centimetre

#include<stdio.h>

int main()
{
    int l;
    printf("Enter the value in k.m.: ");
    scanf("%d",&l);
    printf("value in meters: %d\n", l*1000);
    printf("value in feet: %f\n", l*3280.84);
    printf("value in inches: %f\n", l*39370.1);
    printf("value in centimetre: %d\n", l*100000);

    return 0;
}