#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint32_t inputNumber = 0;

    printf("Please enter a unsinged integer: ");
    scanf("%u", &inputNumber);

    // sum of digits
    uint32_t numDigits = 0;
    uint32_t tempDig = inputNumber;
    if (tempDig == 0) {
        numDigits = 1;
    }
    else {
        while (tempDig>0) {
            numDigits++;
            tempDig = tempDig/10;
        }
    }

    printf("sum of digits: %u\n", numDigits);

    // cross sum
    uint32_t crossSum = 0;
    uint32_t tempCross = inputNumber;

    if (tempCross == 0) {
        crossSum = tempCross;
    }
    else {
        while (tempCross>0)
        {
            crossSum += (tempCross % 10);
            tempCross = tempCross / 10;
        }
    }

    printf("crossSum: %u\n", crossSum);

    return 0;
}
