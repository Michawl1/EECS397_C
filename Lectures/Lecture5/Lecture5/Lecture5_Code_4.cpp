/*

#include<iostream>
using namespace std;

int main()
{

	//Array declaration by specifying size
	int arr1[10];

	// Array declaration by initializing elements 
	int arr3[] = { 10, 20, 30, 40 };
	// above is same as 
	int arr4[4] = { 10, 20, 30, 40 };

	//Array declaration by specifying size and initializing elements
	int arr5[6] = { 10, 20, 30, 40 };   //this will create array of 10, 20, 30, 40, 0, 0

	
	int arr[5] = { 21,4,2,56,-3 };
	//divide the total memory size of the array by one element 
	//find the size of the array (element)
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}

	cout<<"Two dimentional array \n" << endl;
	//two dimentional array
	int x1[3][4] = { 0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 };

	//better method
	int x[3][4] = { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} };

	//accesing elements
	int a = x[2][1];

	// an array with 3 rows and 2 columns. 
	int A[3][2] = { {0,1}, {2,3}, {4,5} };
	// output each array element's value 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Element at A[" << i
				<< "][" << j << "]: ";
			cout << A[i][j] << endl;
		}
	}

	//3-dimentional array, same logic applies
	// initializing the 3-dimensional array 
	cout << "Three dimentional array"<<endl;
	int B[2][3][2] =
	{
		{ {0,1}, {2,3}, {4,5} },
		{ {6,7}, {8,9}, {10,11} }
	};

	// output each element's value 
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cout << "Element at B[" << i << "][" << j
					<< "][" << k << "] = " << B[i][j][k]
					<< endl;
			}
		}
	}




	return 0;

}

*/