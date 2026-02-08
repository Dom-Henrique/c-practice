/*

Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi
considerado que N=5.
*
**
***
****
*****

*/

#include <stdio.h>

int main(void){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}