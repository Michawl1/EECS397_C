#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

void generate_images(int* imgs_in);
void diag(int* img, int value);
double imgavg(int* _imgIn);
int* brightestOf(int* _imgSet);
void sortBrightness(
    int* imgSet,
    int** output
);
void printImg(int* img);
void sortArr(double arr[], int index[]);
void sortBrightnessInternal(int* _imgSet);

const int xSize = 10;
const int ySize = 10;
const int imageAmount = 5;

int main(const int argc, const char** argv) {
    srand(time(NULL));

    int imgs[imageAmount][xSize][ySize];

    generate_images((int*)imgs);
    diag((int*)imgs[3], -5);

    cout << "Generated Images: " << endl;
    for (int i = 0; i < imageAmount; i++)
    {
        printImg((int*)imgs[i]);
    }

    //part 1
    cout << endl;
    cout << "Average brightness: " << endl;
    for (int i = 0; i < imageAmount; i++)
    {
        cout << imgavg((int*)imgs[i]) << endl;
    }

    //part 2
    cout << endl;
    cout << "Brightest image: " << endl;
    printImg(brightestOf((int*)imgs));

    //part 3
    int* output[imageAmount];
    sortBrightness((int*)imgs, output);

    cout << endl;
    cout << "Sorted Images: " << endl;
    for (int i = 0; i < imageAmount; i++)
    {
        printImg(output[i]);
    }

    //part 4
    sortBrightnessInternal((int*)imgs);

    cout << endl;
    cout << "Sorted internal" << endl;
    for (int i = 0; i < imageAmount; i++)
    {
        printImg((int*)imgs[i]);
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

// Part 1
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

// Part 2
int* brightestOf(int* _imgSet)
{
    double brightestVal = 0;
    int brightestIndex = 0;

    for (int i = 0; i < imageAmount; i++)
    {
        double temp = imgavg(&_imgSet[i * xSize * ySize]);

        if (temp > brightestVal)
        {
            brightestIndex = i;
            brightestVal = temp;
        }
    }

    return &_imgSet[brightestIndex * xSize * ySize];
}

// Part 3
void sortBrightness(
    int* imgSet,
    int** output
)
{
    double allBrightness[imageAmount];
    int allBrightnessIndex[imageAmount];

    for (int i = 0; i < imageAmount; i++)
    {
        allBrightness[i] = imgavg(&imgSet[i * xSize * ySize]);
        allBrightnessIndex[i] = i;
    }

    sortArr(allBrightness, allBrightnessIndex);

    for (int i = 0; i < imageAmount; i++)
    {
        output[i] = &imgSet[allBrightnessIndex[i] * xSize * ySize];
    }
}

// Part 4
void sortBrightnessInternal(int* _imgSet)
{
    double allBrightness[imageAmount];
    int allBrightnessIndex[imageAmount];

    for (int i = 0; i < imageAmount; i++)
    {
        for (int k = i; k < imageAmount; k++)
        {
            allBrightness[k] = imgavg(&_imgSet[k * xSize * ySize]);
            allBrightnessIndex[k] = k;
        }
        sortArr(allBrightness, allBrightnessIndex);

        for (int j = 0; j < xSize * ySize; j++)
        {
            int seqIndex = (i * xSize * ySize) + j;
            int swapIndex = (allBrightnessIndex[i] * xSize * ySize) + j;

            int temp = _imgSet[seqIndex];
            _imgSet[seqIndex] = _imgSet[swapIndex];
            _imgSet[swapIndex] = temp;
        }
    }
}

// crappy 0(n^2) to sort array
void sortArr(double arr[], int index[])
{
    for (int i = 0; i < imageAmount; i++)
    {
        for (int j = i + 1; j < imageAmount; j++)
        {
            if (arr[i] < arr[j])
            {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                int temp2 = index[i];
                index[i] = index[j];
                index[j] = temp2;
            }
        }
    }
}

// prints the given image
void printImg(int* img)
{
    cout << "Print img: " << endl;
    for (int i = 0; i < xSize * ySize; i++)
    {
        cout << img[i] << " ";
        if (i % xSize == (xSize - 1))
        {
            cout << endl;
        }
    }
}