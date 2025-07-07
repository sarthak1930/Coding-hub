//Sarthak Tukaram Shinde
//PRN-24030331372046
//Branch-EXTC

#include <stdio.h>
int main() 
{
    int n = 3;
    int i, j, space;
    for (i = 1; i <= n; i++) 
    {
        for (space = 1; space <= n - i; space++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) 
    {
        for (space = 1; space <= n - i; space++) 
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}