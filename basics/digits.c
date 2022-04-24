#include <stdio.h>
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

void getQuotientAndReminder(int dividend, int divisor, int *result)
{
    result[0] = dividend / divisor;
    result[1] = dividend % divisor;
}

int getDividend(int divisor, int quotient, int reminder)
{
    return divisor * quotient + reminder;
}

int main(void)
{
    // FIXME: rewrite in unit tests
    unsigned digitsCount = countDigitsInRealNumber(4242);
    printf("%u digits in %u\n", digitsCount, 4242);

    int divident = -21;
    int divisor = 4;
    int divisionResult[2] = {};
    getQuotientAndReminder(divident, divisor, divisionResult);
    printf(
        "the quotient is %i and the reminder is %i\n",
        divisionResult[0],
        divisionResult[1]
    );

    int restoredDivident = getDividend(
        divisor, divisionResult[0], divisionResult[1]
    );
    printf("%s\n", restoredDivident == divident ? "true" : "false");

    digitsCount = countDigitsInNaturalNumbers(-12.12345678);
    printf("%u digits in %.10f\n", digitsCount, -12.12345678);

    return 0;
}