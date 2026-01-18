#include <stdio.h>

// Call by Reference function

void printMemoryAddressAndValue(float* ptr);

// Call by Value function

float addValue(float a, float b);

int main(void)
{
    float myFloat = 42.42f;

    printMemoryAddressAndValue(&myFloat);

    float userInput = 0.0f;
    printf("Enter a value (float) to add: ");
    scanf("%f",&userInput);

    float newValue = addValue(myFloat, userInput);
    printMemoryAddressAndValue(&newValue);

    return 0;
}

void printMemoryAddressAndValue(float* ptr) {
    printf("%p\n", (void *)ptr);
    printf("%f\n", *ptr);
}

float addValue(float a, float b) {
    return a + b;
}
