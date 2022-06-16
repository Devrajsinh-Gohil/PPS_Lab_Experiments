//Write a C program to find out distance travelled by the equation
//d=ut+1⁄2at^2

#include<stdio.h>

int main()
{
    int u,t,a;
    printf("enter initial speed in km/h: ");
    scanf("%d",&u);
    printf("enter time in hours: ");
    scanf("%d",&t);
    printf("enter accelaration in km/h^2: ");
    scanf("%d",&a);
    float d = (u*t)+((0.5)*(a*t*t));
    printf("distance travelled in km: %f", d);
    
    return 0;
}