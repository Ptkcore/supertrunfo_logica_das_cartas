#include <stdio.h>

int main(){

    char produtoA[30] = "ProdutoA";
    char produtoB[30] = "ProdutoB";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    float valorA = 10.50;
    float valorB = 20.40;

    int resultadoA, resultadoB;
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    double valorTotalA;
    double valorTotalB;

    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    printf("O valor total de A(R$ %.2f) é maior que o valor total de B(R$ %.2f)?: %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}