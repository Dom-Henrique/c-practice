// Read a positive integer number and calculate your double, square, cube and square root
#include <stdio.h>
#include <math.h>

int main(){
    int number;

    printf("Insert the number: ");
    scanf("%d", &number);
    int doublee = number*2;
    int triple = number*3;
    int square = pow(number, 2);
    int cube = pow(number, 3);
    float squareRoot = sqrt(number);
    
    printf("%d\n", doublee);
    printf("%d\n", triple);
    printf("%d\n", square);
    printf("%d\n", cube);
    printf("%f\n", squareRoot);
    return 0;
}