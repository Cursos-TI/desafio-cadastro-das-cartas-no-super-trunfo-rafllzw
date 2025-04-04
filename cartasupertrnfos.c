#include <stdio.h>
int main()
{
//carta 1
    char estado[20], cdg[4], ndc[20];
    int populacao, pontot;
    float Area, Pib;
    //carta 2
    char estadob[20], cdgb[4], ndcb[20];
    int populacaob, pontob, Areab, Pib2;
    float Areab, Pib2;
    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o código do seu estado:  \n");
    scanf("%s", &cdg);
    
    printf("Digite o numero de habitante: \n");
    scanf("%i", &populacao);

    
    printf("Digite a área do seu estado: \n");
    scanf("%f", &Area);
    
    printf("Digite seu PIB: \n");
    scanf("%i", &Pib);
        printf("Qual o ponto  turístico dela: \n");
scanf("%s", &pontot);

printf("Digite o nome de outro estado B: \n");
scanf("%s", &cdgb);
printf("Digite o numero de habitante: \n");
scanf("%i", &populacaob);

printf("Digite a area do seu estado: \n");
scanf("%f", &Areab);

printf("Digite seu PIB: \n");
scanf("%i", &Pib2);

printf("Qual o ponto  turístico dela: \n");
scanf("%s", &pontob);

    return 0;
}