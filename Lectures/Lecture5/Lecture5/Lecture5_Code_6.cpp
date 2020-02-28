/*
#include <iostream> 

// Driver program 
int main()
{
    // Declare an array 
    int v[3] = { 10, 100, 200 };

    // Declare pointer variable 
    int* ptr;

    // Assign the address of v[0] to ptr 
    ptr = v;

    for (int i = 0; i < 3; i++)
    {
        printf("Value of *ptr = %d\n", *ptr);
        printf("Value of ptr = %p\n\n", ptr);

        // Increment pointer ptr by 1 (this will point to the next element)
        ptr++;
    }


    int arr[3][4] = {
                    { 10, 11, 12, 13 },
                    { 20, 21, 22, 23 },
                    { 30, 31, 32, 33 }
    };
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Address of %dth array = %p %p\n",
            i, arr[i], *(arr + i));

        for (j = 0; j < 4; j++)
            printf("%d %d ", arr[i][j], *(*(arr + i) + j));
        printf("\n");
    }
}

*/