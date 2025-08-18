#include <stdio.h>

// Estrutura para armazenar os dados
struct Carta {
    char estado, codigo[4], nomeCidade[100]  ;                     
    int populacao, pontosTuristicos;             
    float area, pib;                                   
};

int main() {
    //  Cartas
    struct Carta carta1;
    struct Carta carta2;

    // Carta 01
    printf("Cadastro da Carta 1:\n");

    printf("Digite o Estado letra entre A e H:");
    scanf(" %c", &carta1.estado);

    printf("Digite o Código da Carta ex: A01:");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite o Número de Habitantes:");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área da Cidade:");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n\n");

    // Carta 02
    printf("Cadastro da Carta 2:\n");

    printf("Digite o Estado letra entre A e H: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Código da Carta ex: B02: ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    scanf(" \n", carta2.nomeCidade);

    printf("Digite o Número de Habitantes:");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área da Cidade em km²:");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da Cidade:");
    scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n\n");

    // Exibição das Cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %f km²\n", carta1.area);
    printf("PIB: %f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %f km²\n", carta2.area);
    printf("PIB: %f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
