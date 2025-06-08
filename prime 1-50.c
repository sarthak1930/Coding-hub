//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-prime no. 1-50
//Branch-EXTC

#include<stdio.h>
int main()
{
    int i,j,flag,rem;
    for(i=1;i<=50;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            rem=i%j;
            if(rem==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}