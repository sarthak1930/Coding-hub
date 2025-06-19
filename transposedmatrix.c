//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-Transpose matrix
//Branch-EXTC

#include<stdio.h>

int main()
{
    int i,j;
    int a [3][3]={{1,2,3},{2,3,4},{3,2,1}};
    int transpose [3][3];
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose [j][i]=a [i][j];
        }
    }
    printf ("transposed matdix:\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d",transpose [i][j]);
        }
        printf("\n");
    }
    return 0;
}    