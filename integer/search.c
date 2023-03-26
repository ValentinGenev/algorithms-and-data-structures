#include "search.h"

int binarySearch(int stack[], int needle, int left, int right)
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
        binarySearch(stack, needle, center + 1, right) :
        binarySearch(stack, needle, left, center - 1);
}