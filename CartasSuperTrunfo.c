#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3];
    char codigo1[10];
    char nomeCidade1[50];
    long long populacao1;
    double area1, pib1;
    int pontosTuristicos1;
    double densidade1, pibPerCapita1;

    // Declaração de variáveis para a Carta 2
    char estado2[3];
    char codigo2[10];
    char nomeCidade2[50];
    long long populacao2;
    double area2, pib2;
    int pontosTuristicos2;
    double densidade2, pibPerCapita2;

    // --- Entrada da Carta 1 ---
    printf("Digite o estado da Carta 1: ");
    scanf("%2s", estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%lld", &populacao1);

    printf("Digite a área da cidade da Carta 1 (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / populacao1; 

    // --- Entrada da Carta 2 ---
    printf("\nDigite o estado da Carta 2: ");
    scanf("%2s", estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%lld", &populacao2);

    printf("Digite a área da cidade da Carta 2 (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // --- Saída ---
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lld\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lld\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);

    return 0;
}
