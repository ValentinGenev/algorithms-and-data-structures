#include "number.h"
#include <math.h>

unsigned countDigitsInRealNumber(int number)
{
    unsigned digitsCount = 0;
    unsigned i = 0;

    for (i = number; i > 0; i /= 10)
    {
        digitsCount++;
    }

    return digitsCount;
}

unsigned countDigitsInNaturalNumbers(double number)
{
    double absNum = fabs(number);
    unsigned i = 0;
    unsigned decimals = 0;

    do
    {
        i++;
        decimals = absNum * pow(10, i) - floor(absNum * pow(10, i)) > 0;
    } while (decimals > 0);

    return countDigitsInRealNumber(floor(absNum)) + i;
}

void calculateQuotientAndReminder(int dividend, int divisor, int *result)
{
    result[0] = dividend / divisor;
    result[1] = dividend % divisor;
}

int calculateDividend(int divisor, int quotient, int reminder)
{
    return divisor * quotient + reminder;
}