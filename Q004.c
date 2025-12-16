// Read a integer number and show your square and square root
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int number;
    printf("Insert a number: ");
    scanf("%d", &number);

    double square = pow(number, 2);
    double square_root = sqrt(number);
    printf("%2.lf\n", square);
    printf("%lf\n", square_root);

    return 0;
}