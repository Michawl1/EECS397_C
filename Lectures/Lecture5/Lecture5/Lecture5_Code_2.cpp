/*
//References

#include <iostream>
#define print(x) std::cout<<x<<std::endl

void increment(int num)
{
	num++;
}

void increment2(int& num)
{
	num++;
}

int main()
{
	//Reference: create a reference to an existing variable
	// Has to reference to an exiting variable
	// Themself new variable do not occupy memory

	int a = 5; //create a variable

	increment(a); //function increments a by 1 
	print(a);

	int& ref = a; //ref reference to a (created alliace)
	//you can use reference as if it is the variable
	ref = 2; //this changes the variable a from 5 to 2
	print(ref);

	increment2(ref); //increment a using the reference
	print(a);

	increment2(a); // increment a using pass by reference
	print(a);


	int x = 6;
	int y = 9;
	int& r = x;
	r = y;
	print(x);
	

}


*/