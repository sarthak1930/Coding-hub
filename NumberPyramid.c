//Sarthak Tukaram Shinde
//PRN-24030331372046
//Branch-EXTC

#include <stdio.h>
int main() 
{
    int rows = 5;
    int current_number = 1;
    for (int i = 1; i <= rows; i++) 
    {
        for (int space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%-3d", current_number++);
        }
        printf("\n");
    }
    return 0;
}