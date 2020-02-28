/*
#include <iostream>
#include <stdio.h>

void passByVal(int val); //pass copy of the integer
void passByRef(int& ref); //pass by reference: pass the actual integer
void passByPtr(int* ptr); //pass the memory address of the value

int main()
{
	int x = 5;
	printf("X = %i \n", x);
	passByVal(x); //pass copy of the X then original is not effected
	printf("(Pass by value)  X = %i \n", x);

	passByRef(x);  //pass the reference of X then X changes
	printf("(Pass by reference) X = %i \n", x);

	int* xptr = &x; //xptr points to variable x (holds the memory adress)
	printf("x = %i \n", x);
	printf("*xptr = %i \n", *xptr); //*xptr access to the variable at the memory adress of xptr

	passByPtr(xptr); 
	printf("x = %i \n", x);
	printf("(Pass by pointer) *xptr = %i \n", *xptr); //*xptr access to the variable at the memory adress of xptr

	


	return 0;

}

void passByVal(int val) { //pass copy of the integer
	val = 10; //change the value
	printf("Val = %i \n", val);
}
void passByRef(int& ref) { //pass by reference: pass the actual integer
	ref = 20; //change the value
	printf("Ref = %i \n", ref);
}
void passByPtr(int* ptr) { //pass the memory address of the value
	*ptr = 30; //change the value
	printf("*ptr = %i \n", *ptr);
}

*/