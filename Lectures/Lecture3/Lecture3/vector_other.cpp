/*
// Lecture3_Codes.cpp :

#include <iostream>
#include <vector>

int main()
{
    // ------------- Create Vector -------------------
    std::cout<<"Create a vector" <<std::endl;
    // Create a vector without size (just a memory address)
    std::vector <int> my_vector;

    // Create a vector with fix size of 10 elements
    //assigns 0 for all of the elements
    std::vector <double> classSize(10);

    // Create a vector of size n = 6 with
    // all values as 5.
    std::vector<int> filled_vct(6, 5);
    for (int x : filled_vct)
        std::cout << x << " ";

    // Initialize with predefined values
    std::vector<int> vect1{ 10, 20, 30, 40 };
    std::cout << std::endl;

    for (int x : vect1)
        std::cout << x << " ";

    // ------------- Element Access -------------------
    std::cout << std::endl << std::endl;
    std::cout << "Element Access" << std::endl;

    //create a vector with values
    std::vector<int> vect{10,20,30,40,50,60,70,80,90,100};

    //Access to an element at given index
    std::cout << "at : vect.at(4) = " << vect.at(4);

    //access to the beginning of the vector
    std::cout << "\nfront() : vect.front() = " << vect.front();

    //access to the end of the vector
    std::cout << "\nback() : vect.back() = " << vect.back();



    // ------------- Vector Modifiers -------------------
    std::cout << std::endl << std::endl;
    std::cout << "Vector Modifiers" << std::endl;

    // create a vector size 5 with 10s
    std::vector<int> my_vect(5, 10);

    std::cout << "The vector elements are: ";
    for (int i = 0; i < 5; i++)
        std::cout << my_vect[i] << " ";

    // inserts an element to the last position
    my_vect.push_back(18);
    std::cout << "\nThe vector elements after bush_back are: ";
    for (int i = 0; i < 6; i++)
        std::cout << my_vect[i] << " ";

    // removes last element
    my_vect.pop_back();

    std::cout << "\nThe vector elements after pop_back are: ";
    for (int i = 0; i < 5; i++)
        std::cout << my_vect[i] << " ";

    // inserts 5 at the beginning
    my_vect.insert(my_vect.begin(), 5);
    std::cout << "\nThe vector after insert 5 at the beginning: ";
    for (int x : my_vect)
        std::cout << x << " ";


    // inserts -5 after the second position
    my_vect.insert(my_vect.begin()+2, -5);

    std::cout << "\nThe vector after insert -5 after the second: ";
    for (int x : my_vect)
        std::cout << x << " ";

    // removes the first element
    my_vect.erase(my_vect.begin());
    std::cout << "\nThe vector after erasing the first: ";
    for (int x : my_vect)
        std::cout << x << " ";

    // removes the second element
    my_vect.erase(my_vect.begin()+1);
    std::cout << "\nThe vector after erasing the second: ";
    for (int x : my_vect)
        std::cout << x << " ";

    // swatps the elements of two vectors
    std::vector<int> myvector1 = { 1, 2, 3, 4 };
    std::vector<int> myvector2 = { 3, 5};
    myvector1.swap(myvector2);

    std::cout << "\nThe vector after swapping: ";
    for (int x : myvector1)
        std::cout << x << " ";

    // ------------- Vector Capacity -------------------
    std::cout << std::endl << std::endl;
    std::cout << "Vector Capacity" << std::endl;


    std::vector<int> vt1;

    for (int i = 1; i <= 5; i++)
        vt1.push_back(i*10);

    std::cout << "Size of vector: " << vt1.size();
    std::cout << "\nCapacity of vector : " << vt1.capacity();
    std::cout << "\nMax_Size : " << vt1.max_size();

    // resizes the vector size to 3
    vt1.resize(3);

    std::cout << "\nThe vector after resizing: ";
    for (int i=0; i< vt1.size(); i++)
        std::cout << vt1.at(i) << " ";

    // checks if the vector is empty or not
    if (vt1.empty() == false)
        std::cout << "\nVector is not empty";
    else
        std::cout << "\nVector is empty\n\n";

}

*/