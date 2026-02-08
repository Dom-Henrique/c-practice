/* Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual quadrante este ponto pertence. 
Você pode supor que o ponto digitado pelo usuário pertence a apenas um quadrante.
*/

#include <stdio.h>

int main(void){
    int x, y;

    printf("Insira as coordenadas de x e y para determinar os quadrantes: ");
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0){
        printf("Quadrante 1\n");
    }
    else if (x < 0 && y > 0){
        printf("Quadrante 2\n");
    }
    else if (x < 0 && y < 0){
        printf("Quadrante 3\n");
    }
    else{
        printf("Quadrante 4\n");
    }
}