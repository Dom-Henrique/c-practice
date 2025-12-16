// Read three numbers and calculate the arithmetic median

#include <stdio.h>

int main(){
    // Declarating variables
    float n1, n2, n3;

    printf("Insert 1st number:\n");
    scanf("%f", &n1);
    printf("Insert 2nd number:\n");
    scanf("%f", &n2);
    printf("Insert 3th number:\n");
    scanf("%f", &n3);

    float result = (n1+n2+n3)/3;

    printf("%f", result);
    return 0;
}