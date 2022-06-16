// Write a C program to check whether the entered character is capital, small letter, digit or any special character.

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int ascii = (int)c;
    if (ascii <= 90 && ascii >= 65)
    {
        printf("Entered character is a Capital letter.");
    }
    else if (ascii <= 122 && ascii >= 97)
    {
        printf("Entered character is a Small letter.");
    }
    else
    {
        printf("Entered character is a digit or any special character.");
    }
    return 0;
}