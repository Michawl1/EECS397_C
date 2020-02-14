#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>




void TopDownMergeSort(std::vector<int>& A) {

}

// Sort the given run of array A[] using array B[] as a source.
// iBegin is inclusive; iEnd is exclusive (A[iEnd] is not in the set).
void TopDownSplitMerge(std::vector<int>& B, int iBegin, int iEnd, std::vector<int>& A) {
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > B[])
        {

        }
    }
}

//  Left source half is A[ iBegin:iMiddle-1].
// Right source half is A[iMiddle:iEnd-1   ].
// Result is            B[ iBegin:iEnd-1   ].
void TopDownMerge(std::vector<int>& A, int iBegin, int iMiddle, int iEnd, std::vector<int>& B) {

}


int main(const int argc, const char** argv) {

    srand(time(NULL));

    std::vector<int> to_be_sorted;
    for (int i = 0; i < 15; i++) {
        to_be_sorted.push_back(rand() % 200);
    }

    //print the array
    for (int i = 0; i < 15; i++) {
        std::cout << to_be_sorted[i] << ",";
    }

    TopDownMergeSort(to_be_sorted);

    //print the array after
    std::cout << std::endl;
    for (int i = 0; i < 15; i++) {
        std::cout << to_be_sorted[i] << ",";
    }

    return 0;
}