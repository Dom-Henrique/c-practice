/* Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e 
calcule o percentual de mulheres que tem entre 18 e 21 anos */

#include <stdio.h>

int main(void){
    char name[25];
    char gender;
    int age, womans;
    double percentual;
    int count = 1;

    while (count <= 20){
        printf("Name: ");
        // Possível bug de teclado
        fgets(name, 20, stdin);
        printf("----------\n");
        printf("Age and gender: ");
        scanf("%c%d", &gender, &age);
        if ((gender == 'F' || gender == 'f') && (age > 18 || age < 21)){
            womans += 1;
        }
        count++;
    }
    percentual = womans / 100;
    printf("O percentual de mulheres entre 18 e 21 anos eh: %lf", percentual);
}