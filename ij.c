#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        {
            printf("\n");
        }

    }
    return 0;

}