#include <iostream>
using namespace std;
#include "input_arr.h" // to declare & define input and display array --> in C language
#define SIZE 100
int main()
{
    int arr[SIZE];
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    input(arr, n);
    printf("Array is:");
    display(arr, n);
    return 0;
}