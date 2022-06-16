// Write a C program to interchange two numbers.

#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping\n");
    printf("value of a is: %d \n",a);
    printf("value of b is: %d",b);

    return 0;
}