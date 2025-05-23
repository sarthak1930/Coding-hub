#include<stdio.h>
int main()
{
    int num,i,rem,check=0;
    printf("enter the number\t");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            check=1;
            break;
        }
    }
    if (check==0)
    {
        printf("prime");

    }
    else
    {
        printf("not prime");
    }
    return 0;
}