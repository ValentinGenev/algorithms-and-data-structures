#include "sort.h"
#include <string.h>

int* quickSort(int array[], size_t length, int pivot, int* target)
{
    if (length < 2) {
        return target;
    }

    int pivotArr[1] = {array[pivot]};
    int leftSide[length - 1];
    int rightSide[length - 1];
    int lsIndex = 0;
    int rsIndex = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] < array[pivot])
        {
            leftSide[lsIndex] = array[i];
            lsIndex++;
        }
        else if (array[i] > array[pivot])
        {
            rightSide[rsIndex] = array[i];
            rsIndex++;
        }
    }

    quickSort(leftSide, lsIndex, lsIndex / 2, leftSide);
    quickSort(rightSide, rsIndex, rsIndex / 2, rightSide);

    memcpy(target, leftSide, lsIndex * sizeof leftSide[0]);
    memcpy(target + lsIndex, pivotArr, sizeof pivotArr[0]);
    memcpy(target + lsIndex + 1, rightSide, rsIndex * sizeof rightSide[0]);
    return target;
}