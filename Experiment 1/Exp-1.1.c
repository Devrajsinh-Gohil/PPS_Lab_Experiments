//Write a program that performs as calculator (addition, multiplication, division, subtraction).

#include<stdio.h>

int main()
{
    int a,b;
    float ans;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);

    ans = a+b;
    printf("a + b = %f \n",ans);
    ans = a-b;
    printf("a - b = %f \n",ans);
    ans = a*b;
    printf("a * b = %f \n",ans);
    ans = (float)a/b;
    printf("a / b = %f \n",ans);

    return 0;
}