// Read the distance and time to calculate speed
#include <stdio.h>
#include <math.h>

int main(void){
    float distance;
    float time;

    printf("Distance (km): ");
    scanf("%f", &distance);
    printf("Time (h): ");
    scanf("%f", &time);
    float speed = distance/time;
    printf("Speed: %f km/h", speed);

    getch();
    return 0;
}