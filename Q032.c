/* Escreva um programa que leia um caractere correspondente ao estado civil de uma pessoa e imprima o estado civil informado por extenso. 
As opções para o estado civil são: S (solteiro), C (casado), D (divorciado) e V (viúvo). */

#include <stdio.h>

int main(void){
    char maritalStatus;
    printf("Estado Civil: ");
    scanf("%c", &maritalStatus);

    /*
    if (maritalStatus == 'C' || maritalStatus == 'c'){
        printf("Casado\n");
    }
    else if (maritalStatus == 'S' || maritalStatus == 's'){
        printf("Solteiro\n");
    }
    else if (maritalStatus == 'V' || maritalStatus == 'v'){
        printf("Viúvo\n");
    }
    */
   // Essa opção costuma consumir menos memória.
   switch(maritalStatus){
        case 'c':
        case 'C': printf("Casado.\n"); break;
        case 's':
        case 'S': printf("Solteiro.\n"); break;
        case 'v':
        case 'V': printf("Viuvo.\n"); break;
   }
}