// Escreva um programa que leia três números inteiros distintos e identifique o maior número lido.

#include <stdio.h>
#include <math.h>

int main(void){
    int n1,n2,n3;

    printf("Insira tres numeros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if (n1 > n2 && n1 > n3){
        printf("Maior numero: %d\n", n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("Maior numero: %d\n", n2);
    }
    else{
        printf("Maior numero: %d\n", n3);
    }
}