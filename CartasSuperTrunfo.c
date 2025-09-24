#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Novato: cadastro e exibição de uma carta

int main() {
    // 1️ Definição das variáveis
    char estado;            // A-H
    char codigo[4];         // ex: A01
    char nomeCidade[50];    // Nome da cidade
    int populacao;          // Número de habitantes
    float area;             // Área em km²
    float pib;              // PIB em bilhões
    int pontosTuristicos;   // Número de pontos turísticos

    // 2️ Entrada de dados
    printf("Digite os dados da Carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado);
    printf("Codigo da Carta: ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade); // lê a linha inteira com espaços
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area (km²): ");
    scanf("%f", &area);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // 3️ Exibição dos dados
    printf("\nCarta cadastrada:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Intermediário: cadastro de duas cartas com densidade populacional e PIB per capita

int main() {
    // 1️ Definição das variáveis

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    // 2️ Entrada de dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // 3️ Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // 4️ Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

    // Leitura da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Super Poder
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das Cartas
    printf("\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);

    printf("\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);

    // Comparação de atributos
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}