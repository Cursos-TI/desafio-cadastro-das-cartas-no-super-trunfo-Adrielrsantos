#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cod_cidade[4], cod_cidade2[4], cod_cidade3[4], cod_cidade4[4];
    char cidade[50], cidade2[50], cidade3[50], cidade4[50];
    int populacao, populacao2, populacao3, populacao4; 
    int pontos_turisticos, pontos_turisticos2, pontos_turisticos3, pontos_turisticos4;
    float area, area2, area3, area4; 
    float pib, pib2, pib3, pib4;

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

    printf("\nCarta 01 cadastrada com sucesso! Por favor, cadastre a seguir a carta 02.\n");

    printf("\nCarta 02:");

    printf("\nInforme o código da cidade: ");
    scanf("%s", cod_cidade2);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &populacao2);

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Informe a área da cidade: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("\nCarta 02 cadastrada com sucesso!\n");

    printf("\nCarta 01:\n");
    printf("Código da Cidade: %s\n", cod_cidade);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Área: %.3f\n", area);
    printf("PIB: %.3f\n", pib);

    printf("\nCarta 02:\n");
    printf("Código da Cidade: %s\n", cod_cidade2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Área: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);

    return 0;
}




   // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.