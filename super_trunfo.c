#include <stdio.h>

int main() {
    int carta1 = 1;
    char estado[] = "Ceará";
    char codigo_da_carta[] = "A01";
    char nome_da_cidade[] = "Fortaleza";
    int populacao = 2578708;
    float area_km2 = 312.353;
    double pib = 86900000000.0;
    int numero_de_pontos_turisticos = 30;
    float densidade_populacional = populacao / area_km2;
    double pib_per_capita = pib / populacao;

    printf("\n===== CARTA 1 =====\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f reais\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

    int carta2 = 2;
    char estado_2[] = "Bahia";
    char codigo_da_carta_2[] = "A02";
    char nome_da_cidade_2[] = "Salvador";
    int populacao_2 = 2900000;
    float area_km2_2 = 693.8;
    double pib_2 = 62954000000.0;
    int numero_de_pontos_turisticos_2 = 20;
    float densidade_populacional_2 = populacao_2 / area_km2_2;
    double pib_per_capita_2 = pib_2 / populacao_2;

    printf("\n===== CARTA 2 =====\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado_2);
    printf("Código da carta: %s\n", codigo_da_carta_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_km2_2);
    printf("PIB: %.2f reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}