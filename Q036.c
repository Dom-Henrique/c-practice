// Calculando Delta e Bhaskara da equação do segundo grau

#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c, delta, x1, x2;

    printf("Insira os valores de a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = pow(b, 2) - (4 * a * c);
    if (delta > 0 || delta == 0){
        x1 = (-b + (sqrt(delta))) / 2 * a;
        x2 = (-b - (sqrt(delta))) / 2 * a;
        printf("Raizes: %lf, %lf.\n");
    }
    else{
        printf("Nao existe raizes reais.\n");
    }
}