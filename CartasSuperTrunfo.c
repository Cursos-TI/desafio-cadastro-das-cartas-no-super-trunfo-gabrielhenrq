#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50], codigo1[50], cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_pop1, pib_per_capita1;

    // Variáveis da Carta 2
    char estado2[50], codigo2[50], cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_pop2, pib_per_capita2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %49[^\n]", estado1);
    printf("Código: ");
    scanf(" %49s", codigo1);
    printf("Cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos Carta 1
    if (area1 != 0) {
        densidade_pop1 = (float)populacao1 / area1;
    } else {
        densidade_pop1 = 0.0f;
    }
    if (populacao1 != 0) {
        pib_per_capita1 = pib1 / populacao1;
    } else {
        pib_per_capita1 = 0.0f;
    }

    printf("\n");

    // Cadastro Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %49[^\n]", estado2);
    printf("Código: ");
    scanf(" %49s", codigo2);
    printf("Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos Carta 2
    if (area2 != 0) {
        densidade_pop2 = (float)populacao2 / area2;
    } else {
        densidade_pop2 = 0.0f;
    }
    if (populacao2 != 0) {
        pib_per_capita2 = pib2 / populacao2;
    } else {
        pib_per_capita2 = 0.0f;
    }

    printf("\n");

    // Exibir dados das cartas
    printf("Carta 1 - %s (%s): População = %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): População = %d\n\n", cidade2, estado2, populacao2);

    // Comparação da população usando só if e else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        // Se não for maior, Carta 2 vence ou empate
        if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}
