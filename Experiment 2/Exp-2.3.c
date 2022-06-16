// Write a program to read three numbers from keyboard and find out maximum out of these three. (nested if else)

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("give three numbers with space in between: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is the maximum of all.",a);
        }
        else
        {
            printf("%d is the maximum of all.",c);
        }
    }
    else if (c>b)
    {
        if (c>a)
        {
            printf("%d is the maximum of all.",c);
        }
        else
        {
            printf("%d is the maximum of all.",b);
        }
    }
    else
    {
        printf("%d is the maximum of all.",b);
    }
    return 0;
}