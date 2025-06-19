//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-to print array using function
//Branch-EXTC

#include<stdio.h>

void print_array(int arr[], int size)  
{
    for(int i = 0; i < size; i++)  
    {
        printf("%d ", arr[i]);  
    }
}

int main()
{
    int a[5] = {9, 8, 3, 2, 5};
    int b[10] = {9, 8, 6, 5, 7, 1, 3, 2, 4, 0};
    print_array(a, 5);  
    printf("\n");
    print_array(b, 10); 
    return 0;
}