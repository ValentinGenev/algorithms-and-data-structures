#include "./collection.h"
#include <stdio.h>

int *quickSort(int array[], int length, int pivot, int *target[])
{
    int leftSide[length];
    int lsIndex = 0;
    int rightSide[length];
    int rsIndex = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] < array[pivot])
        {
            leftSide[lsIndex] = array[i];
            lsIndex++;
        }
        else
        {
            rightSide[rsIndex] = array[i];
            rsIndex++;
        }
    }

    concatenateArrays(leftSide, lsIndex, rightSide, rsIndex, target);

    // FIXME: not printing the same array as in the concatenateArrays method
    for (int i = 0; i < length; i++)
    {
    printf("%d, ", target[i]);
    }
    printf("\n----------\n");

    // TODO: right the base check

    return target;
}