//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-With Agument With Return Value
//Branch-EXTC





#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1 number \t");
    scanf("%d",&a);
    printf("Enter the 2 number \t");
    scanf("%d",&b);
    printf("Addition Of a and b is %d",sum(a,b));
    return 0;
}
int sum(n1,n2)
{
    int c;
    c=n1+n2;
    return c;
}