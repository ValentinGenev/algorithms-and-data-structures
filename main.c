#include "basic-algorithms/number.h"
#include "basic-algorithms/search.h"
#include <stdio.h>

int main(void)
{
    printf("countDigitsInRealNumber: %s\n",
        countDigitsInRealNumber(4242) == 4 ? "works" : "doesn't work"
    );

    printf("countDigitsInNaturalNumbers: %s\n",
        countDigitsInNaturalNumbers(-12.12345678) == 10 ?
            "works" : "doesn't work"
    );

    int divisionResult[2] = {};
    calculateQuotientAndReminder(-21, 4, divisionResult);
    printf(
        "calculateQuotientAndReminder: %s\n",
        divisionResult[0] == -5 && divisionResult[1] == -1 ?
            "works" : "doesn't work"
    );

    printf("calculateDividend: %s\n",
        calculateDividend(4, divisionResult[0], divisionResult[1]) == -21 ?
            "works" : "doesn't work"
    );

    int sortedNumbers[] = {1, 4, 5, 6, 7, 8, 12, 13, 16, 17, 18, 19, 20, 21, 22, 25, 27, 29, 31, 33, 34, 35, 36, 37, 38, 39, 40, 42, 43, 44, 45, 47, 48, 49, 50, 52, 54, 55, 56, 57, 58, 60, 61, 62, 65, 66, 67, 69, 70, 71, 74, 76, 77, 78, 83, 86, 87, 88, 89, 90, 91, 92, 93, 94, 97, 98, 101, 102, 103, 104, 106, 108, 109, 110, 113, 114, 116, 117, 118, 122, 124, 125, 126, 128, 129, 130, 131, 132, 136, 137, 138, 139, 140, 141, 143, 144, 146, 147, 149, 150};
    int numbersCount = sizeof sortedNumbers / sizeof sortedNumbers[0];
    printf("binarySearchInNumbers: %s\n",
        binarySearchInNumbers(sortedNumbers, 100, 0, numbersCount) == -1 ?
            "works" : "doesn't work"
    );
    printf("binarySearchInNumbers: %s\n",
        binarySearchInNumbers(sortedNumbers, 12, 0, numbersCount) == 6 ?
            "works" : "doesn't work"
    );

    return 0;
}