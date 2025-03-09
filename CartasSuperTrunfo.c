#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cod_cidade[4];
    char cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;

    printf("\nCadastro de Cartas:\n");
    printf("\n  As cartas serão divididas por estados, cada um com quatro cidades. Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4). A combinação forma o código da Cidade (ex: A01, B02).\n");
    printf("\nCarta 01:");

    printf("\nInforme o código da cidade: ");
    scanf("%s", cod_cidade);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade);

    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &populacao);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Informe a área da cidade: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("\nCarta cadastrada com sucesso!\n");

    printf("\nCarta 01:\n");
    printf("Código da Cidade: %s\n", cod_cidade);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Área: %.3f\n", area);
    printf("PIB: %.3f\n", pib);

    return 0;
}




   // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.