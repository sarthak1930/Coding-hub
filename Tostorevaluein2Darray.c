//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-To store value in 2D array
//Branch-EXTC

#include<stdio.h>
int main()
    {
        int a[3][3];
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("enter value at row=%d,column=%d",i,j);
                scanf("%d",&a[i][j]);

            }
            printf("\n");

        }
        return 0;
    }
