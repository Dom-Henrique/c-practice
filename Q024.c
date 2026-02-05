/* Carlos chegou ao aeroporto para fazer o check-in do seu vôo. Ao entrar na fila de
passageiros, ele percebeu que a empresa aérea tinha 5 guichês para fazer o check-in
dos passageiros, e que estes guichês eram numerados de 1 a 5. Considerando que os
guichês iam começar a realização dos check-ins no exato momento em que Carlos
entrou na fila, e que cada check-in é realizado em exatamente 15 minutos, escreva um
programa que leia um número inteiro positivo que corresponde à posição de Carlos na
fila e determine o número do guichê no qual ele será atendido e o tempo que ele vai
ter que esperar para ser atendido. */

// 5 guichês numerados
// 15 minutos de check-in
// Calcular o tempo que ele vai levar para ser atendido

#include <stdio.h>

int main(void){
    int position, guiche, horas, minutos;

    printf("Posicao de Carlos: ");
    scanf("%d", &position);
    // Evitar o uso de condicionais
    guiche = (position % 5) + 1;
    minutos = position * 15;
    horas = minutos / 60;
    printf("Posicao: %d\nTempo: %dh%dmin", guiche, horas, minutos);
}