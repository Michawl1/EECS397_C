/*

#include <iostream> 
using namespace std;

// Note that arr[] for fun is just a pointer even if square 
// brackets are used 
void fun(int arr[])  // SAME AS void fun(int *arr) 
{   
    //find the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nArray size inside fun() is %d", n);
}

void fun2(int arr[], int n)
{
    int i;
    cout<<"\nFunction call" << endl;
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
}

void fun3(int* arr, int n)
{
    int i;
    cout<<"\nFunction call" << endl;
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
}

// Driver program 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array size inside main() is %d", n);
    fun(arr);

    int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n2 = sizeof(arr) / sizeof(arr[0]); //size of the array
    fun2(arr2, n2);

    int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int n3 = sizeof(arr) / sizeof(arr[0]); //size of the array
    fun3(arr3, n3);

   

    return 0;
}

*/