#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    float media;

    printf("*>* Programa de Cálculo de Notas *<*\n");

    printf("Insira a 1° nota: \n");
    scanf("%f", &nota1);

    printf("Insira a 2° nota: \n");
    scanf("%f", &nota2);

    printf("Insira a 3° nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("Sua média é: %.1f", media);

    return 0;
}