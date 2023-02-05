#include "collection.h"

int *sliceIntArray(int array[], int start, int end, int *target)
{
    for (int i = start; i < end; i++)
    {
        target[i] = array[i];
    }
    return target;
}