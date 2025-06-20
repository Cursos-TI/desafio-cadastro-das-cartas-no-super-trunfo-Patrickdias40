#include <stdio.h>

int main() {
    int Populacao1, Populacao2, PontoTur1, PontoTur2;
    float Area1, Area2, PIB1, PIB2;
    char Estado1, Estado2;
    char CodCarta1[3], CodCarta2[3], Cidade1[20], Cidade2[20];

    //Aviso
    printf("- As cartas serão divididas por estados, cada um com quatro cidades. Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4). A combinação forma o código da carta (ex: A01, B02).\n");

    // Cidade 1
    printf("\n-- Digite os valores para carta numero 1 --\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade1);

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &Estado1);

    printf("Digite o codigo da carta da cidade(Ex:A1): ");
    scanf("%s", CodCarta1);

    printf("Digite a quantidade de populacao da cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a area em metro quadrados da cidade: ");
    scanf("%f", &Area1);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur1);

    // Cidade 2
    printf("\n-- Digite os valores para carta numero 2 --\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &Estado2);

    printf("Digite o codigo da carta da cidade(Ex:A1): ");
    scanf("%s", CodCarta2);

    printf("Digite a quantidade de populacao da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a area em metro quadrados da cidade: ");
    scanf("%f", &Area2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur2);

    //Retorna valores da carta
    printf("\n--Carta 1: \n");
    printf("Nome: %s \n", Cidade1);
    printf("Estado: %c\n", Estado1);
    printf("Código: %s \n", CodCarta1);
    printf("Populacao: %d \n", Populacao1);
    printf("PIB: %.2f \n", PIB1);
    printf("Área: %.2f Km² \n", Area1);
    printf("Pontos turisticos: %d \n", PontoTur1);

    //Retorna valores da carta
    printf("\n-- Carta 2: \n");
    printf("Nome: %s \n", Cidade2);
    printf("Estado: %c\n", Estado2);
    printf("Código: %s \n", CodCarta2);
    printf("Populacao: %d \n", Populacao2);
    printf("PIB: %.2f \n", PIB2);
    printf("Área: %.2f Km² \n", Area2);
    printf("Pontos turisticos: %d \n", PontoTur2);

    return 0;
}
