// Read a number and print the 10 first products
#include <stdio.h>

int main(void){
    int number, product;

    printf("Number: ");
    scanf("%d", &number);
    for (int i = 0; i <= 10; i++){
        product = number * i;
        printf("%d\n", product);
    }
}