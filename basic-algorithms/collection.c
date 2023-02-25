#include "collection.h"
#include <stdio.h>
#include <string.h>

int *sliceArray(int array[], int start, int end, int *target)
{
    for (int i = 0; i < end - start; i++)
    {
        target[i] = array[start + i];
    }
    return target;
}

int *concatenateArrays(int array1[], int size1, int array2[], int size2,
                       int *target)
{
    memcpy(target, array1, size1 * sizeof array1[0]);
    memcpy(target + size1, array2, size2 * sizeof array2[0]); // WOW!

    return target;
}