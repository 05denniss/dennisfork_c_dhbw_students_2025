#include <stdio.h>


double z1(int x, int y) {
    double result = (x*x+y*y-(x*y)+2);
    return result;
}

double z2(int x, int y) {
    double result = ((x-y)*(x-y)*(x-y)-3);
    return result;
}

double z3(int x, int y) {
    double result = ((2*(x*x*x)-0.5*(x*x)-x+4)/y);
    return result;
}

int main(void) {
    int x = -2;
    int y = -3;

    double resultz1 = z1(x,y);
    double resultz2 = z2(x,y);    
    double resultz3 = z3(x,y);  

    printf("z1 = %.6f \n", resultz1);
    printf("z2 = %.6f \n", resultz2);
    printf("z3 = %.6f \n", resultz3);
}






















