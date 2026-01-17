#include <stdio.h>

int main(void)
{

    int aValue = 42;
    int *myPointer = NULL;
    myPointer = &aValue;

    printf("%d\n", aValue);
    printf("%d\n", *myPointer);

//    *myPointer = 20;

    printf("%d\n", *myPointer);

    int **yourPointer = NULL;
    yourPointer = &myPointer;
//    **yourPointer = 10;

    printf("%d\n", **yourPointer);
    printf("\n");
    printf("%p\n", (void *)&aValue);
    printf("%p\n", (void *)myPointer);
    printf("%p\n", (void *)&myPointer);
    printf("%p\n", (void *)yourPointer);  
    printf("%p\n", (void *)&yourPointer);    

    return 0;
}
