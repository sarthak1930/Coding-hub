//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-febunacci series
//Branch-EXTC

#include<stdio.h>
int main()
{
    int a=20;
    int A=0,B=1,C,i=0;

    while (i<a)
    {
        printf("%d",A);
        C=A+B;
        A=B;
        B=C;
        i++;
    }
    printf("\n");
    return 0;
}