#include "search.h"
#include <stdio.h>

int binarySearchInNumbers(int stack[], int needle, int left, int right)
{
    if (left > right)
    {
        return -1;
    }

    int center = (left + right) / 2;
    if (stack[center] == needle)
    {
        return center;
    }

    return stack[center] < needle ?
        binarySearchInNumbers(stack, needle, center + 1, right) :
        binarySearchInNumbers(stack, needle, left, center - 1);
}