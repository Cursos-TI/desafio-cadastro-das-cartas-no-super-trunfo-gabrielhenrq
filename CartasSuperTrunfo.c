#include <stdio.h>

int main (){

  // VARIAVEIS DA CARTA 1
    char carta1 [50];
    char codigo1 [50];
    char estado1 [50];
    char cidade1 [50];
    unsigned long int populacao1;
    int ptour1;
    float area1;
    float pib1;
    float pibcap1;
    float densidadep1;
    float superpoder1;

  // VARIAVEIS DA CARTA 2
    char carta2 [50];
    char codigo2 [50];
    char estado2 [50];
    char cidade2 [50];
    unsigned long int populacao2;
    int ptour2;
    float area2;
    float pib2;
    float pibcap2;
    float densidadep2;
    float superpoder2;

  // COLETA DE DADOS CARTA 1
    printf("Carta 1: \n");

    printf("Digite o Estado: ( A - H): ");
    scanf(" %s", estado1);

    printf("Digite o codigo da carta: (ex: A01): ");
    scanf (" %s", codigo1);

    printf ("Digite o nome da cidade: ");
    scanf (" %s", cidade1);

    printf ("Digite a população: ");
    scanf ("%lu", &populacao1);  // unsigned long int

    printf ("Digite a area: ");
    scanf ("%f", &area1);

    printf("Digite seu Pib: ");
    scanf ("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf ("%d", &ptour1);

    densidadep1 = (float)populacao1 / area1;
    pibcap1 = pib1 / populacao1;

  // COLETA DE DADOS CARTA 2
    printf("\nCarta 2: \n");

    printf("Digite o Estado: ( A - H): ");
    scanf(" %s", estado2);

    printf("Digite o codigo da carta: (ex: A01): ");
    scanf (" %s", codigo2);

    printf ("Digite o nome da cidade: ");
    scanf (" %s", cidade2);

    printf ("Digite a população: ");
    scanf ("%lu", &populacao2);

    printf ("Digite a area: ");
    scanf ("%f", &area2);

    printf("Digite seu Pib: ");
    scanf ("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf ("%d", &ptour2);

    densidadep2 = (float)populacao2 / area2;
    pibcap2 = pib2 / populacao2;

  // CÁLCULO DO SUPER PODER
  // Super Poder = populacao + area + pib + pontos turisticos + pib per capita + (1 / densidade populacional)
  // Convertendo populacao para float para somar corretamente
    superpoder1 = (float)populacao1 + area1 + pib1 + ptour1 + pibcap1 + (1.0f / densidadep1);
    superpoder2 = (float)populacao2 + area2 + pib2 + ptour2 + pibcap2 + (1.0f / densidadep2);

  // EXIBIÇÃO DOS DADOS DA CARTA 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", populacao1, area1, pib1, ptour1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("PIB per Capita: %.2f\n", pibcap1);
    printf("Super Poder: %.2f\n", superpoder1);

  // EXIBIÇÃO DOS DADOS DA CARTA 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", populacao2, area2, pib2, ptour2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f\n", pibcap2);
    printf("Super Poder: %.2f\n", superpoder2);

  // COMPARAÇÃO DAS CARTAS
    printf("\nComparação de Cartas:\n");

    // População: maior vence
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Área: maior vence
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // PIB: maior vence
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);

    // Pontos Turísticos: maior vence
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ptour1 > ptour2 ? 1 : 0);

    // Densidade Populacional: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadep1 < densidadep2 ? 1 : 0);

    // PIB per Capita: maior vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcap1 > pibcap2 ? 1 : 0);

    // Super Poder: maior vence
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}
