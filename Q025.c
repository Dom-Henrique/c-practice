/*Um provedor de internet oferece um plano promocional para os seus clientes. Neste
plano, ele paga uma mensalidade de R$ 80,00 e pode acessar até 100 GB de dados.
Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma
taxa adicional de R$ 5,00 por cada GB extra acessado. Com base nestas informações,
escreva um programa que leia a quantidade de dados acessados pelo cliente durante
um mês (em GB) e calcule o valor da sua conta, considerando que esta quantidade
nunca é inferior a 100 GB.*/

#include <stdio.h>

int main(void){
    int dataSize = 0;
    int mensalidade, totalGB, taxaAdicional;

    do{
        printf("GBs acessados pelo cliente: ");
        scanf("%d", &dataSize);
    } while (dataSize < 100);
    mensalidade = 80;
    totalGB = dataSize - 100;
    taxaAdicional = totalGB * 5;
    printf("Total de GBs: %d\nMensalidade: %d\n", dataSize, mensalidade + taxaAdicional);
}