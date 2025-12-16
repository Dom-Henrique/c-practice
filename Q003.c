// Read a radius of circunference and calculate the area and length

#include <stdio.h>

int main(){
    float radius;

    printf("Insert the radius:\n");
    scanf("%f", &radius);

    float area = 3.14*(radius*radius);
    float length = 3.14*radius*2;

    printf("%f\n", area);
    printf("%f", length);

    return 0;
}