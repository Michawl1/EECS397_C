#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>



int main(const int argc, const char** argv) {
    srand(time(NULL));

    //create empty 5 images each 10x10 (empty)
    int imgs[5][10][10];

    //call generate image function to create images
    generate_images(*imgs);

    //Prints all of the images to the screen
    for (int i = 0; i < 5; i++) {
        std::cout << "Image #" << i + 1 << ":\n";//Label starting from zero to match array indexing.
        for (int v = 0; v < 10; v++) {
            for (int h = 0; h < 10; h++) {
                std::cout << imgs[i][v][h] << " ";
            }
            std::cout << "\n";
        }
    }

    //pass one image to the diag function
    //this function should change diagonals to -5

    //Prints the image that diagonilized
   
   std::cout << "Diaged Image #" << 3 << ":\n";//Label starting from zero to match array indexing.
   for (int v = 0; v < 10; v++) {
       for (int h = 0; h < 10; h++) {
           std::cout << imgs[3][v][h] << " ";
       }
       std::cout << "\n";
   }
   
}

//this fucntion generated images
//image values randomly generated from 0-255
void generate_images(int* imgs_in) {

    //to generate random number use:
    //rand()%255
    
}

//this fucntion takes an image pointer
//converts all of the diagonal elements to the value
void diag(int* img, int value) {
    
}