// Escreva um programa que leia as coordenadas x e y de um ponto e verifique a quantidade de quadrantes a que este ponto pertence.

#include <stdio.h>

int main(void){
    int x, y;

    printf("Insira as coordenadas de x e y para determinar os quadrantes: ");
    scanf("%d%d", &x, &y);
    if (x > 0 || y > 0){
        printf("Quadrantes positivos\n");
    }
    else{
        printf("Quadrantes negativos\n");
    }
}