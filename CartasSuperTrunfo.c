#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    /*Poderia ter colocado variaveis diferente para cada carta, 
    mas como nao e foco por enquanto nao é esse, deixei assim*/
    int Populacao, PontoTur;
    float Area, PIB;
    char Estado;
    char CodCarta[3], Cidade[20];

    // Cidade 1
    printf("-- Digite os valores para carta numero 1 --\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade);

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta da cidade(Ex:A1): ");
    scanf("%s", CodCarta);

    printf("Digite a quantidade de populacao da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a area em metro quadrados da cidade: ");
    scanf("%f", &Area);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur);

    //Retorna valores da carta
    printf("--Carta 1: \n");
    printf("Nome: %s \n", Cidade);
    printf("Estado: %c\n", Estado);
    printf("Código: %s \n", CodCarta);
    printf("Populacao: %d \n", Populacao);
    printf("PIB: %.2f \n", PIB);
    printf("Área: %.2f Km² \n", Area);
    printf("Pontos turisticos: %d \n", PontoTur);

    // Cidade 2
    printf("-- Digite os valores para carta numero 1 --\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade);

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta da cidade(Ex:A1): ");
    scanf("%s", CodCarta);

    printf("Digite a quantidade de populacao da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a area em metro quadrados da cidade: ");
    scanf("%f", &Area);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur);

    //Retorna valores da carta
    printf("-- Carta 2: \n");
    printf("Nome: %s \n", Cidade);
    printf("Estado: %c\n", Estado);
    printf("Código: %s \n", CodCarta);
    printf("Populacao: %d \n", Populacao);
    printf("PIB: %.2f \n", PIB);
    printf("Área: %.2f Km² \n", Area);
    printf("Pontos turisticos: %d \n", PontoTur);

    return 0;
}
