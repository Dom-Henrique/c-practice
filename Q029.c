// Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se o número lido é ou não um palíndromo

#include <stdio.h>

int main(void){
    int n = 0;
    int un, dez, cen, mil;

    do{
        printf("Insira um numero entre 1000 e 9999: ");
        scanf("%d", &n);
    } while (n < 1000 || n > 9999);
    // Posso separar as casas e verificar se são iguais
    mil = n / 1000; // Como é um inteiro, ele converte normalmente
    cen = (n % 1000) / 100;
    dez = ((n % 1000) % 100) / 10;
    un = ((n % 1000) % 100) % 10;
    printf("%d\n%d\n%d\n%d\n", mil, cen, dez, un);
    if (mil == un && dez == cen){
        printf("Palindromo.\n");
    }
    else {
        printf("Nao eh um palindromo.\n");
    }
}