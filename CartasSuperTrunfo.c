#include <stdio.h>

int main (){

  // VARIAVEIS DA CARTA 1
    char carta1 [50];
    char codigo1 [50];
    char estado1 [50];
    char cidade1 [50];
    int populacao1, ptour1;
    float area1;
    float pib1;


  // VARIAVEIS DA CARTA 2
    char carta2 [50];
    char codigo2 [50];
    char estado2 [50];
    char cidade2 [50];
    int populacao2,ptour2;
    float area2;
    float pib2;


// COLETA DE DADOS CARTA 1
    printf("Carta 1: \n");

    printf("Digite o Estado: ( A - H):");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: (ex: A01)");
    scanf (" %s", &codigo1);
    printf ("Digite o nome da cidade: ");
    scanf (" %s", &cidade1);
    printf ("Digite a população: ");
    scanf ("%d", &populacao1);
    printf ("Digite a area:");
    scanf ("%f", &area1);
    printf("Digite seu Pib:");
    scanf ("%f", &pib1);
    printf("Digite o numero de pontos turisticos:");
    scanf ("%d", &ptour1);


    // COLETA DE DADOS CARTA 2
    printf("Carta 2: \n");

    printf("Digite o Estado: ( A - H):");
    scanf(" %s", &estado2);

    printf("Digite o codigo da carta: (ex: A01)");
    scanf (" %s", &codigo2);
    printf ("Digite o nome da cidade: ");
    scanf (" %s", &cidade2);
    printf ("Digite a população: ");
    scanf ("%d", &populacao2);
    printf ("Digite a area:");
    scanf ("%f", &area2);
    printf("Digite seu Pib:");
    scanf ("%f", &pib2);
    printf("Digite o numero de pontos turisticos:");
    scanf ("%d", &ptour2);

// EXIBIÇÃO DOS DADOS DA CARTA 1
 printf("\nDados da Carta 1:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPonto Turístico: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, ptour1);

// EXIBIÇÃO DOS DADOS DA CARTA 2
 printf("\nDados da Carta 2:\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPonto Turístico: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, ptour2);



           


    return 0;


}
