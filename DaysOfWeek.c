//Sarthak Tukaram Shinde
//PRN-24030331372046
//Branch-EXTC

#include<stdio.h>
int main()
{
    int day;
    printf("Enter Days Of Week:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
    }
}