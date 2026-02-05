// Calculate the volume from a sphere by ray
#include <stdio.h>
#include <math.h>

int main(void){
    float ray, result, power;

    printf("Ray value: ");
    scanf("%f", &ray);
    power = pow(ray, 3);
    result = (4*3.14*power)/3;
    printf("Sphere volume: %f", result);
}