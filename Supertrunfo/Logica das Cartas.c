#include <stdio.h>

int main(){

    //Implementação das variáveis
    char estado1[3], codigo1[10], nome1[100], estado2[3], codigo2[10], nome2[100]; 
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2; 
    float area1, pib1, densidade1, capita1, superPoder1, area2, pib2, densidade2, capita2, superPoder2; 

    //Coleta de dados 1° carta
    printf("*** Registro da 1° Carta ***\n\n");
    printf("Digite o estado: \n");
    scanf("%1s", estado1);

    printf("Digite o código: \n");
    scanf("%3s", codigo1);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + capita1 + (1.0f / densidade2);

    //Coleta de dados 2° carta
    printf("\n*** Registro da 2° Carta ***\n\n");
    printf("Digite o estado: \n");
    scanf("%1s", estado2);

    printf("Digite o código: \n");
    scanf("%3s", codigo2);
    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + capita2 + (1.0f / densidade2);

    //Imprimir informações da 1° carta
    printf("\nCarta 1:\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f\n", superPoder1);

    //Imprimir informações da 2° carta
    printf("\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    //Comparação das cartas
    printf("\n***Comparação das Cartas***\n\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (capita1 > capita2) ? 1 : 2, (capita1 > capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2));

    return 0;
}