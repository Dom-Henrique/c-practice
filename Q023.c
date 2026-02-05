// Read X and Y positions and P & Q points. Calculate the distance
#include <stdio.h>
#include <math.h>

int main(void){
    int x1, x2, y1, y2;
    float distance;

    printf("P coordenates (X, Y): ");
    scanf("%d\n%d", &x1, &y1);
    printf("Q coordenates (X, Y): ");
    scanf("%d\n%d", &x2, &y2);
    distance = pow((x2-x1)/(y1-y2), 2);
    printf("%f", distance);
}