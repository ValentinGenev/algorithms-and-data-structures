#include "basics/numbers.h"
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

    return 0;
}