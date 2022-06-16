// Write a program to read marks of a student from keyboard whether the student is pass or fail (using if else)

#include<stdio.h>

int main(){
    int marks;
    printf("Please enter marks out of 100: ");
    scanf("%d",&marks);
    if (marks>=30 && marks<=100)
    {
        printf("Pass");
    }
    else if (marks<30)
    {
        printf("Fail");
    }
    else
    {
        printf("Please enter valid marks.");
    }
    return 0;
}