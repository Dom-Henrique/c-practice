// Read three numbers and calculate ponderated median
#include <stdio.h>
#include <conio.h>

int main(){
    float n1, n2, n3;
    int w1, w2, w3;

    printf("Insert the 1st number: ");
    scanf("%f", &n1);
    printf("Insert the 2nd number: ");
    scanf("%f", &n2);
    printf("Insert the 3rd number: ");
    scanf("%f", &n3);

    printf("Insert the weigth of 1st number: ");
    scanf("%d", &w1);
    printf("Insert the weigth of 2nd number: ");
    scanf("%d", &w2);
    printf("Insert the weigth of 3rd number: ");
    scanf("%d", &w3);

    float weigthed_median = ((n1*w1) + (n2*w2) + (n3*w3))/(w1+w2+w3);
    
    printf("%f", weigthed_median);
    getch();

    return 0;
}