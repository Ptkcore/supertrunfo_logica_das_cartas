#include <stdio.h>

    int main(){
        int idade;
        int quantidade = 1;
        float altura = 1.75;
        double peso = 90.3;
        char letra = 'A';
        char nome[20] = "Sergio";

        idade = 25;

        printf("A idade é: %d\n", idade);
        printf("O nome é: %s\n", nome);
        printf("A altura é: %.2f\n", altura);
        printf("O peso é: %.1f\n", peso);
    }  