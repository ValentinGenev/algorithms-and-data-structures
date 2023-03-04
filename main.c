#include "basic-algorithms/search.h"
#include "basic-algorithms/sort.h"
#include <stdio.h>

int main(void)
{
    printf("---------- Starting main\n");

    int unsortedNumbers[] = {45, 126, 38, 114, 101, 50, 47, 7, 69, 22,
                             118, 98, 29, 43, 131, 27, 33, 54, 88, 139, 130, 42, 89, 21, 1, 91, 52,
                             58, 97, 138, 36, 65, 66, 17, 62, 60, 150, 109, 18, 57, 71, 90, 61, 74,
                             125, 149, 113, 56, 124, 49, 146, 86, 44, 12, 129, 20, 19, 128, 39, 55,
                             93, 143, 116, 37, 31, 70, 106, 87, 102, 132, 25, 6, 117, 140, 108, 122,
                             103, 104, 16, 78, 40, 110, 136, 83, 92, 144, 94, 8, 76, 137, 77, 5, 13,
                             141, 67, 48, 34, 147, 4, 35};
    int numbersCount = sizeof unsortedNumbers / sizeof unsortedNumbers[0];

    int sortedNumbers[numbersCount];
    quickSort(unsortedNumbers, numbersCount, numbersCount / 2, sortedNumbers);

    printf("---------- quickSort: ");
    for (int i = 0; i < numbersCount; i++)
    {
        printf("%d, ", sortedNumbers[i]);
    }
    printf("\n");

    int needle = 16;
    printf("---------- binarySearchInNumbers: %d at position %d\n", needle,
           binarySearchInNumbers(sortedNumbers, needle, 0, numbersCount));

    return 0;
}