/*

//Pointers

#include <iostream>

int main()
{
	//void pointer, completely typeless and no adress
	//simplest pointer you can write
	void* ptr1 = 0; 
	void* ptr2 = NULL; 
	void* ptr3 = nullptr;

	int var1 = 8; //variable created and assingned 8 to it
	ptr1 = &var1; // this means that ptr1 gets the memory addres of var

	//when we want to write to or read from data we need type for pointer
	int* ptr4 = &var1; // ptr2 has the memory address of var

	//access to the value in the memory location using dereferencing
	*ptr4 = 10; //dereference: writes 10 to the memory address

	//pointers to pointer
	int** ptr5 = &ptr4;

	return 0;

	// providing type means that pointer points to the type
}

*/