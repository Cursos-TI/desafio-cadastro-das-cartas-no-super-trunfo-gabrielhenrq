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
    float pibcap1;
    float densidadep1;


  // VARIAVEIS DA CARTA 2
    char carta2 [50];
    char codigo2 [50];
    char estado2 [50];
    char cidade2 [50];
    int populacao2,ptour2;
    float area2;
    float pib2;
    float pibcap2;
    float densidadep2;


// COLETA DE DADOS CARTA 1
    printf("Carta 1: \n");

    printf("Digite o Estado: ( A - H):");
    scanf(" %s", &estado1);

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

densidadep1 = populacao1 / area1;
pibcap1 = pib1 / populacao1;



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

    densidadep2 = populacao2 / area2;
pibcap2 = pib2 / populacao2;


 // EXIBIÇÃO DOS DADOS DA CARTA 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", populacao1, area1, pib1, ptour1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1);
    printf("PIB per Capita: %.2f\n", pibcap1);
    

// EXIBIÇÃO DOS DADOS DA CARTA 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", populacao2, area2, pib2, ptour2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2);
    printf("PIB per Capita: %.2f\n", pibcap2);

           // CALCULAR A DENSIDADE POPULACIONAL - DIVIDIR A POPULACAO DA CIDADE PELA SUA AREA. O RESULTADO SERÁ  " DENSIDADE POPULACIONAL" = FLOAT
           // CALCULAR O PIB PER CAPITA - DIVIDA O PIB DA CIDADE PELA SUA POPULACAO. O RESULTADO SERA O PIB PER CAPITA = FLOAT
           // EXIBIR OS RESULTADOS - ALEM DE EXIBIR AS INFOS LIDAS DO USUARIO, O PROGRAMA TAMBEM DEVE EXIBIR A DENSIDADE POPULACIONAL E O PIB PER CAPITA CALCULADOS PARA CADA CIDADE.



           


    return 0;


}
