#include <stdio.h>

int main() {
    int carta1 = 1;
    char estado[] = "Ceará";
    char codigo_da_carta[] = "A01";
    char nome_da_cidade[] = "Fortaleza";
    int populacao = 2578708;
    float area_km2 = 312.353;
    float pib = 86900000000;
    int numero_de_pontos_turisticos = 30;
    float densidade_populacional = (float) populacao / area_km2;
    float pib_per_capita = (float) pib / populacao;

    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area_km2);
    printf("PIB: %.2f reais\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita: %.2freais\n", pib_per_capita);

    int carta2 = 2;
    char estado_2[] = "Bahia";
    char codigo_da_carta_2[] = "A02";
    char nome_da_cidade_2[] = "Salvador";
    int populacao_2 = 25568928;
    float area_km2_2 = 62.954;
    float pib_2 = 62954000000;
    int numero_de_pontos_turisticos_2 = 20;
    float densidade_populacional_2 = (float) populacao_2 / area_km2_2;
    float pib_per_capita_2 = (float) pib_2 / populacao_2;

    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado_2);
    printf("Código da carta: %s\n", codigo_da_carta_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_km2_2);
    printf("PIB: %.3f reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos_2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}