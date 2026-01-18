#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int n = 0;
    int sum = 0;

    //Fills the array with user-provided values.
    //Accepts the number of elements (n) from the user. Ensure n is validated to be a positive integer.

    printf("Hoy many values do you want? \n");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("ERROR: Only a positive amount of values possible.");
        return 1;
    }

    //Dynamically allocates memory for n integers using malloc. 

    int* values = malloc(n * sizeof(int)) ;

    //The program should check if malloc returns NULL to handle allocation failures and provide an appropriate error message.

    if (values == NULL) {
        printf("ERROR: Allocation failure.");
        return 1;
    }

    for (int i=0; i<n; i++) {
        printf("Enter value #%d: ", i+1);
        scanf(" %d", &values[i]);
    }

    //Calculates and prints the sum of all elements in the array.

    for (int i=0; i<n ; i++) {
        sum += values[i];
    }
    
    printf("\nThe sum of all the values is: %d", sum);

    //Frees the allocated memory to prevent memory leaks.
    free(values);
    values = NULL;

    return 0;
}
