/* Escreva um programa que leia um único número entre 10000 e 99999 referente ao
número de um deputado estadual e identifique o partido pelo qual ele está
concorrendo. O número do partido pode ser identificado pelos dois primeiros
algarismos do número do candidato. Por exemplo, um candidato com número 13457
concorre pelo PT, que é o partido de número 13, enquanto que um candidato com
número 45879 concorre pelo PSDB, que é o partido de número 45. Neste programa,
considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 (PMDB), 25 (DEM), 45
(PSDB) e 65 (PCdoB). */

#include <stdio.h>

int main(void){
    int numCandidate, partido;

    do{
        printf("Insira o numero do candidato: ");
        scanf("%d", &numCandidate);
    } while (numCandidate < 10000);
    partido = numCandidate / 1000;
    if (partido == 13){
        printf("13 - PT.\n");
    }
    else if (partido == 14){
        printf("14 - PTB.\n");
    }
    else if (partido == 15){
        printf("15 - PMDB.\n");
    }
    else if (partido == 25){
        printf("25 - DEM.\n");
    }
    else if (partido == 45){
        printf("45 - PSDB.\n");
    }
    else if (partido == 65){
        printf("65 - PCdoB.\n");
    }
    else{
        printf("Nao corresponde ao banco de dados.\n");
    }
}