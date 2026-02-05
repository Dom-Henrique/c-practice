// Read the length and width from a cistern and L storage goal. Calculate how many meters he need to encher todinha.
#include <stdio.h>

int main(void){
    float length, width, height, liters, area;

    printf("Length, with and heigth: ");
    scanf("%f\n%f\n%f", &length, &width, &height);
    printf("Liters: ");
    scanf("%f", &liters);
    area = width*length*height;
    printf("Cistern area: %.2fm3\n", area);
    printf("Liters restant: %.2f\n", liters-(area/1000));
}