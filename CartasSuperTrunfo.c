#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Novato: cadastro e exibição de uma carta

int main() {
    // 1️⃣ Definição das variáveis
    char estado;            // A-H
    char codigo[4];         // ex: A01
    char nomeCidade[50];    // Nome da cidade
    int populacao;          // Número de habitantes
    float area;             // Área em km²
    float pib;              // PIB em bilhões
    int pontosTuristicos;   // Número de pontos turísticos

    // 2️⃣ Entrada de dados
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

    // 3️⃣ Exibição dos dados
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
