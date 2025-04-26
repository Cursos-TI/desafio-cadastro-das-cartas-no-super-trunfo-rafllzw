#include <stdio.h>

int main() {
    // carta 1
    char estado[50], cdg[10], ndc[50], pontot[100];
    int populacao;
    float Area, Pib, densidadepopu, pibporcpt;

    // carta 2
    char estadob[50], cdgb[10], ndcb[50], pontob[100];
    int populacaob;
    float Areab, Pib2, densidadepopu2, pibporcpt2;

    printf("Digite seu estado: \n");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o codigo do seu estado:  \n");
    fgets(cdg, sizeof(cdg), stdin);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao);

    printf("Digite a area do seu estado: \n");
    scanf("%f", &Area);
    getchar(); // consome \n que sobra

    printf("Qual o ponto turistico dela: \n");
    fgets(pontot, sizeof(pontot), stdin);

    printf("Digite seu PIB: \n");
    scanf("%f", &Pib);
    getchar(); // consome \n

    printf("Digite o nome de outro estado B: \n");
    fgets(estadob, sizeof(estadob), stdin);

    printf("Digite o codigo do estado B: \n");
    fgets(cdgb, sizeof(cdgb), stdin);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacaob);

    printf("Digite a area do estado B: \n");
    scanf("%f", &Areab);
    getchar(); // consome \n

    printf("Qual o ponto turistico da cidade B: \n");
    fgets(pontob, sizeof(pontob), stdin);

    printf("Digite o PIB da cidade B: \n");
    scanf("%f", &Pib2);

    // parte 2 — cálculos ANTES das impressões
    densidadepopu = populacao / Area;
    densidadepopu2 = populacaob / Areab;
    pibporcpt = Pib / populacao;
    pibporcpt2 = Pib2 / populacaob;

    printf("Resultados:\n");
    printf("Densidade populacional: %.2f\n", densidadepopu);
    printf("PIB por capita: %.2f\n", pibporcpt);
    printf("PIB por capita da cidade B: %.2f\n", pibporcpt2);
    printf("Densidade populacional da cidade B: %.2f\n", densidadepopu2);

    return 0;
}
