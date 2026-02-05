/* Escreva um programa que leia 4 numeros inteiros positivos e verifique se eles formam, na ordem em que foram informmados,
uma PA, PG, duas ao mesmo tempo ou nenhum tipo de progressão.*/

#include <stdio.h>

int PA(int n1, int n2, int n3, int n4){
    if (n2-n1 == n3-n2 == n4-n3){
        printf("Eh uma PA\n");
    }
    else{
        printf("Nao eh uma PA\n");
    }
}

int PG (int n1, int n2, int n3, int n4){
    if (n1/n2 == n2/n3 == n3/n4){
        printf("Eh uma PG\n");
    }
    else{
        printf("Nao eh uma PG\n");
    }
}

int ambosDois(int n1, int n2, int n3, int n4){
    if ((n2-n1 == n3-n2 == n4-n3) && n1/n2 == n2/n3 == n3/n4){
        printf("Eh uma PA e uma PG\n");
    }
    else{
        printf("Ou um ou outro.\n");
    }
}

int main(void){
    int n1, n2, n3, n4;
    
    printf("Insira quatro numeros inteiros: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    PA(n1,n2,n3,n4);
    PG(n1,n2,n3,n4);
    ambosDois(n1,n2,n3,n4);
}