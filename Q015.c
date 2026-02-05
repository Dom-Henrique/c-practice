// Read a house area and calculate the amount charget of each square metter
#include <stdio.h>

int main(void){
	float houseArea, amount;

	printf("Input the house area and square meter value: ");
	scanf("%f\n%f", &houseArea, &amount);
	float value = houseArea * amount;
	printf("Charget: %.2f\n", value);
}