//Sarthak Tukaram Shinde
//PRN-24030331372046
//Code-Linear search Algorithum
//Branch-EXTC

#include<stdio.h>

int linearsearch(int arr[], int size, int value);

int main() {
    int a[10] = {9, 8, 7, 5, 6, 3, 4, 2, 1}; 
    int result, key;
    printf("Enter number to find: ");
    scanf("%d", &key);
    result = linearsearch(a, 10, key); 
    if (result == -1) {
        printf("Not found");
    } else {
        printf("The number %d is found at index %d", key, result);
    }
    return 0;
}
int linearsearch(int arr[], int size, int value) 
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}