// Write a c program to prepare pay slip using following data: 
// Da = 10% of basic,
// Hra = 7.50% of basic,
// Ma = 300,
// Pf = 12.50% of basic, 
// Gross=basic+Da+Hra+Ma,
// Nt=Gross–Pf.

#include<stdio.h>

int main()
{
    int basic;
    printf("Enter Basic salary: ");
    scanf("%d", &basic);
    float da = 0.1*basic;
    float hra = 0.075 * basic;
    int ma = 300;
    float pf = 0.125 * basic;
    float gross = basic+da+hra+ma;
    float nt = gross -pf;


    printf("Da = %0.2f\nHra = %0.2f\nMa = %d\nPf = %0.2f\n",da,hra,ma,pf);
    printf("Gross = %0.2f\nNt = %0.2f",gross,nt);
    return 0;
}