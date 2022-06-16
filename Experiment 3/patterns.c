#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = -1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = i + 1; k < n - 1; k++)
        {
            printf("  ");
        }
        for (int j = -1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}