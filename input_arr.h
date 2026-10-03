// #include <iostream>
// using namespace std;
#define SIZE 100
void input(int[], int);
void display(int[], int);
void input(int arr[SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at %d index:", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[SIZE], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
