#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>


void DecToBinary (int n) {

    int binary[10000];
    
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main(void)
{
    int numIterations = 0;
    printf("How many iterations? ");
    scanf("%d", &numIterations);
    printf("\n");
    int n = numIterations;
    double result = 0;
    double piCalculated = 0;
    double piDecimalPlaces20 = 3.14159265358979311600;

    for (int i = 0; i < n; i++) {
        result += (1.0 / (4.0 * i + 1.0 )) - ( 1.0 / ( 4.0 * i + 3.0 ));
    }

    piCalculated = result * 4.0;

    // TODO: Part 1 - Calculate Pi

    printf("number of iterations: %d\n", numIterations);
    printf("pi (calculated with approximation):\t%.20lf\n", piCalculated);
    printf("pi (correct on 20 decimal places):\t%.20lf\n\n", piDecimalPlaces20);

    // TODO: Part 2 - Decimal to Binary

    int decimal = 0;
    printf("What decimal do you want to convert into binary? ");
    scanf("%d", &decimal);
    printf("\n");

    DecToBinary(decimal);


    return 0;
}
