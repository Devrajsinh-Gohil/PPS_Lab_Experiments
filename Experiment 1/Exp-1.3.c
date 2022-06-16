// Write a program to calculate simple interest i = (p*r*n)/100
// i = Simple interest
// p = Principal amount
// r = Rate of interest
// n = Number of years

#include<stdio.h>

int main()
{
    float i,p,r,n;
    printf("Enter principle amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter number of years: ");
    scanf("%f",&n);
    i = (p*r*n)/100;
    printf("Amount of simple interset is: %f", i);

    return 0;
}