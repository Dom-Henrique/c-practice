// Read the initial term from arithmetical progression and print the first 5 numbers.
#include <stdio.h>

int main(void){
    int initial, commonDifference, result;

    printf("Initial therm and common diference: ");
    scanf("%d\n%d", &initial, &commonDifference);
    for (int i=0; i<5; i++){
        result = initial * 4 * commonDifference;
        initial += commonDifference;
        printf("%d\n", result);
    }
}