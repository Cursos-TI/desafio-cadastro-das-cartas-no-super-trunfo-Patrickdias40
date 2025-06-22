#include <stdio.h>

int main() {
    int PontoTur1, PontoTur2, CompPop, CompPIB, CompArea, CompTur, CompPercap, CompDensi, SuperPoderF;
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2, PIB1, PIB2, PIBPerCapt1, PIBPerCapt2, DensiPop1, DensiPop2;
    double SuperPoder1, SuperPoder2;
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

    printf("Digite a area da cidade(Km²): ");
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

    printf("Digite a area da cidade(Km²): ");
    scanf("%f", &Area2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &PontoTur2);

    //execucao 
    //PIB per capita 
    PIBPerCapt1 = (float) PIB1 / Populacao1;
    PIBPerCapt2 = (float) PIB2 / Populacao2;
    //Densidade populacional
    DensiPop1 = (float) Populacao1 / Area1;
    DensiPop2 = (float) Populacao2 / Area2;

    //Comparacao
    CompPop = Populacao1 > Populacao2;
    CompPIB = PIB1 > PIB2;
    CompArea = Area1 > Area2;
    CompTur = PontoTur1 > PontoTur2;
    CompPercap = PIBPerCapt1 > PIBPerCapt2;
    CompDensi = DensiPop1 < DensiPop2;
    SuperPoder1 = (long double) (Populacao1 + PIB1 + Area1 + PontoTur1 + PIBPerCapt1 + (1 / DensiPop1));
    SuperPoder2 =  (long double) (Populacao2 + PIB2 + Area2 + PontoTur2 + PIBPerCapt2 + (1 / DensiPop2));
    SuperPoderF = SuperPoder1 > SuperPoder2;
    
    //Retorna valores da carta 1
    printf("\n--Carta 1: \n");
    printf("Nome: %s \n", Cidade1);
    printf("Estado: %c\n", Estado1);
    printf("Código: %s \n", CodCarta1);
    printf("Populacao: %d \n", Populacao1);
    printf("PIB: %.2f \n", PIB1);
    printf("Área: %.2f Km² \n", Area1);
    printf("Pontos turisticos: %d \n", PontoTur1);
    printf("PIB per capita: %.2f reias \n", PIBPerCapt1);
    printf("Desidade populacional %.2f hab/km² \n", DensiPop1);

    //Retorna valores da carta 2
    printf("\n-- Carta 2: \n");
    printf("Nome: %s \n", Cidade2);
    printf("Estado: %c\n", Estado2);
    printf("Código: %s \n", CodCarta2);
    printf("Populacao: %d \n", Populacao2);
    printf("PIB: %.2f \n", PIB2);
    printf("Área: %.2f Km² \n", Area2);
    printf("Pontos turisticos: %d \n", PontoTur2);
    printf("PIB per capita: %.2f reias \n", PIBPerCapt2);
    printf("Densidade populacional %.2f hab/km² \n", DensiPop2);

    //Retorna a comparacao das cartas
    printf("\n-- Comparacao entre as cartas:\n");
    printf("\nPopulacao: A carta %d venceu (%d) .\n", CompPop ? 1 : 2, CompPop);
    printf("PIB: A carta %d venceu (%d) .\n", CompPIB ? 1 : 2, CompPIB);
    printf("Área: A carta %d venceu (%d) .\n", CompArea ? 1 : 2, CompArea);
    printf("Pontos turisticos: A carta %d venceu (%d) .\n", CompTur ? 1 : 2, CompTur);
    printf("PIB per capita: A carta %d venceu (%d) .\n", CompPercap ? 1 : 2, CompPercap);
    printf("Densidade populacional: A carta %d venceu (%d) .\n", CompDensi ? 1 : 2, CompDensi);
    printf("Super Poder: A carta %d venceu.\n", SuperPoderF ? 1 : 2, SuperPoderF);

    return 0;
}
