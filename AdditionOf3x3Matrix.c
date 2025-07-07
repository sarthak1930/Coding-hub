//Sarthak Tukaram Shinde
//PRN-24030331372046
//Branch-EXTC

#include <stdio.h>
int main() 
{
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sum[3][3];
    int i, j;
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Result of matrix addition:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}