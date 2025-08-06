#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "Sao Paulo"; 
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; 

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km quadrados\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Densidade Populacional: %.2f habitantes por km quadrado\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km quadrados\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Densidade Populacional: %.2f habitantes por km quadrado\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}



