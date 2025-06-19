//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-Addition of Matrix
//Branch-EXTC

#include<stdio.h>
int main ()
{
    int i,j,c[3][3];
    int a[3][3]={{1,1,3},{1,1,4},{1,1,5}};
    int b[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf ("%d",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
