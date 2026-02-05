// Ask the price of an product prodution and profit and calculate the sale price
#include <stdio.h>

int main(void){
    float productPrice, profit, salePrice;
    do{
        printf("Product price and your goal profit: ");
        scanf("%f\n%f", &productPrice, &profit);
    } while (profit>100);

    salePrice = productPrice*profit;
    printf("Price sale: %.2f\n", salePrice);
}