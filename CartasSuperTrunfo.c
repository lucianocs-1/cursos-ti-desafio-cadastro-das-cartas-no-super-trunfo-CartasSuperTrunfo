#include <stdio.h>
#include <string.h> // Para strcspn

struct Carta {
    char estado, codigo[4], nomeCidade[100];                     
    int populacao, pontosTuristicos;             
    float area, pib;
    float densidadePopulacional1, pibPercapita1;
    float densidadePopulacional2, pibPercapita2;       
    double superpoder ;
    double resultado;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // Carta 01
    printf("******** Cadastro da Carta 01: *********\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &carta1.estado);

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", carta1.codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf(" ");  // limpa o buffer
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = '\0';

    printf("Digite o Número de Habitantes:  \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da Cidade (em bilhões de reais): \n ");
    scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos:  \n");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n\n");

    // Carta 02
    printf("******* Cadastro da Carta 02: *******\n");

    printf("Digite o Estado (letra de A a H):  \n");
    scanf(" %c", &carta2.estado);

    printf("Digite o Código da Carta (ex: B02):  \n");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: \n ");
    scanf(" "); // limpa o buffer
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = '\0';

    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da Cidade (em bilhões de reais): \n ");
    scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos:  \n");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n\n");

    
    carta1.densidadePopulacional1 = carta1.populacao / carta1.area;
    carta1.pibPercapita1 = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional2 = carta2.populacao / carta2.area;
    carta2.pibPercapita2 = carta2.pib / carta2.populacao;


    carta1.superpoder = carta1.populacao + carta1.pontosTuristicos + carta1.area + carta1.pib;
    carta1.resultado = carta1.superpoder;

    carta2.superpoder = carta2.populacao + carta2.pontosTuristicos + carta2.area + carta2.pib;
    carta2.resultado = carta2.superpoder;

    // Exibição das Cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade demográfica: %.2f hab/km²\n", carta1.densidadePopulacional1);
    printf("PIB per capita: %.2f bilhões de reais\n", carta1.pibPercapita1);
    printf("O super poder da carta A é: (%.2f) \n", carta1.resultado);
    printf("O super poder da carta A é maior que a carta B? %d \n ", carta1.superpoder > carta2.superpoder);
    printf("A população da carta 1 é maior que a população da carta 2? %d \n", carta1.populacao > carta2.populacao);
    printf("A area da carta 1 é maior que a area da carta 2?  %d \n", carta1.area > carta2.area);
    printf("O pib da  carta 1 é maior que o  pib da carta 2?  %d \n", carta1.pib > carta2.pib);
    printf("O número de pontos turisticos da   carta 1 é maior que o  da carta 2?  %d \n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("A densidade demografica da carta 1 é maior que a carta 2? %d \n", carta1.densidadePopulacional1 > carta2.densidadePopulacional2);
    printf("O pib percapito  da  carta 1 é maior que o da carta 2?  %d \n", carta1.pibPercapita1 > carta2.pibPercapita2);

    
    printf(" \n \n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade demográfica: %.2f hab/km²\n", carta2.densidadePopulacional2);
    printf("PIB per capita: %.2f bilhões de reais\n", carta2.pibPercapita2);
    printf("O super poder da carta B é: (%.2f) \n", carta2.resultado);
    printf("O super poder da carta B é maior que a carta A? %d \n ", carta1.superpoder >  carta2.superpoder);
    printf("O super poder da carta A é maior que a carta B? %d \n ", carta2.superpoder > carta1.superpoder);
    printf("A população da carta 1 é maior que a população da carta 2? %d \n", carta2.populacao > carta1.populacao);
    printf("A area da carta 1 é maior que a area da carta 2?  %d \n", carta2.area > carta1.area);
    printf("O pib da  carta 1 é maior que o  pib da carta 2?  %d \n", carta2.pib > carta1.pib);
    printf("O número de pontos turisticos da   carta 1 é maior que o  da carta 2?  %d \n", carta2.pontosTuristicos > carta1.pontosTuristicos);
    printf("A densidade demografica da carta 1 é maior que a carta 2? %d \n", carta2.densidadePopulacional2 > carta1.densidadePopulacional1);
    printf("O pib percapito  da  carta 1 é maior que o da carta 2?  %d \n", carta2.pibPercapita2 > carta1.pibPercapita1);

    
    return 0;
}
