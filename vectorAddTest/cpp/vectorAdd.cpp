//
// Created by patrick on 23. 3. 28.
//
#include <iostream>
#include <cstdlib>
#include <ctime>


int main(void)
{
    clock_t total_t;
    int numElements = 500000;
    size_t size = numElements * sizeof(float);

    float *a = (float *)malloc(size);
    float *b = (float *)malloc(size);
    float *out = (float *)malloc(size);

    // Initialize the host input vectors
    for (int i = 0; i < numElements; ++i)
    {
        a[i] = rand()/(float)RAND_MAX;
        b[i] = rand()/(float)RAND_MAX;
    }

    total_t = clock();
    // Add two arrays into output
    for (int i = 0; i < numElements; i++)
    {
        out[i] = a[i] + b[i];
    }

    total_t = clock() - total_t;

    printf("Added %d elements", numElements);
    printf("vectorAddTest.cpp total time (ms): %f \n", (float)total_t / CLOCKS_PER_SEC * 1000);

}