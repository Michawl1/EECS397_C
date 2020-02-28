#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

void generate_images(int* imgs_in);
void diag(int* img, int value);
double imgavg(int* _imgIn);
int* brightesOf(int* _imgSet);
void sortBrightness(
    int* imgSet,
    int** output
);
void printImg(int* img);

const int xSize = 10;
const int ySize = 10;
const int imageAmount = 5;

int main(const int argc, const char** argv) {
    srand(time(NULL));

    int imgs[imageAmount][xSize][ySize];

    generate_images((int*)imgs);
    diag((int*)imgs[3], -5);

    for (int i = 0; i < imageAmount; i++)
    {
        cout << imgavg((int*)imgs[i]) << endl;
    }

    brightesOf((int*)imgs);

    for (int i = 0; i < imageAmount; i++) {
        std::cout << "Image #" << i+1 << ":\n";//Label starting from zero to match array indexing.
        for (int v = 0; v < xSize; v++) {
            for (int h = 0; h < ySize; h++) {
                std::cout << imgs[i][v][h] << " ";
            }
            std::cout << "\n";
        }
    }
}

void generate_images(int* imgs_in) {
    for (int i = 0; i < imageAmount * xSize * ySize; i++) {
        imgs_in[i] = rand() % 255;
    }
}

void diag(int* img, int value) {
    for (int i = 0; i < xSize; i++) {
        img[i * xSize + i] = value;
    }
}

double imgavg(int* _imgIn)
{
    int imgSize = xSize * ySize;
    int imgTotal = 0;

    for (int i = 0; i < xSize * ySize; i++)
    {
        imgTotal += _imgIn[i];
    }

    return (double)imgTotal / (double)imgSize;
}

int* brightesOf(int* _imgSet)
{
    double brightestVal = 0;
    int brightestIndex = 0;

    cout << endl;

    for (int i = 0; i < imageAmount; i++)
    {
        int img[xSize][ySize];
        for (int j = 0; j < xSize * ySize; j++)
        {
            for (int k = 0; k < xSize; k++)
            {
                for (int f = 0; f < ySize; f++)
                {
                    img[k][f] = _imgSet[(i * imageAmount) + j];
                    j++;
                }
            }
        }
        printImg((int*)img);
        cout << endl;
        
        if (brightestVal < imgavg((int*)img))
        {
            brightestVal = imgavg((int*)img);
            //cout << brightestVal << endl;
            brightestIndex = i;
        }

    }

    cout << brightestIndex << endl;

    return (int*)_imgSet[brightestIndex];
}

void sortBrightness(
    int* imgSet,
    int** output
)
{

}

void printImg(int* img)
{
    for (int i = 0; i < xSize; i++)
    {
        for (int j = 0; j < ySize; j++)
        {
            cout << img[i * j] << " ";
        }
        cout << endl;
    }
}