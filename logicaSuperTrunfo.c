#include <stdio.h>

int main() {
    char estado1[2];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float percapita1;
    float poder1;
    float inverso1;
    float pibreal1;

    char estado2[2];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float percapita2;
    float poder2;
    float inverso2;
    float pibreal2;

    // ENTRADA CARTA 1
   printf("Cadastro da Carta 1\n");
    printf("Digite a letra do Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): \n");
    scanf(" %3s", codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a População: \n");
    scanf("%lu", &populacao1);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // ENTRADA CARTA 2
   printf("\nCadastro da Carta 2\n");
    printf("Digite a letra do Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): \n");
    scanf(" %3s", codigo2);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a População: \n");
    scanf("%lu", &populacao2);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    // CALCULOS
    pibreal1 = pib1 * 1e9; // Transformar o PIB em Reais
    pibreal2 = pib2 * 1e9; // Transformar o PIB em Reais
    densidade1 = populacao1 / area1;
    percapita1 = pibreal1 / populacao1;
    densidade2 = populacao2 / area2;
    percapita2 = pibreal2 / populacao2;
    inverso1 = 1 / densidade1;
    inverso2 = 1 / densidade2;
    poder1 = populacao1 + area1 + pibreal1 + pontosTuristicos1 + percapita1 + inverso1;
    poder2 = populacao2 + area2 + pibreal2 + pontosTuristicos2 + percapita2 + inverso2;

    // SAÍDA CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", percapita1);
    printf("Super Poder: %.2f\n", poder1);


    // SAÍDA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", percapita2);
    printf("Super Poder: %.2f\n", poder2);

    // COMPARAÇÃO DAS CARTAS
    printf("\nCOMPARAÇÃO DAS CARTAS\n");
    
    printf("\nPopulação:\n");
    printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
    if (populacao1 > populacao2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

    printf("\nArea:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
    if (area1 > area2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

     printf("\nPIB:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibreal1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibreal2);
    if (pibreal1 > pibreal2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

    printf("\nNúmero de Pontos Turísticos:\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

     printf("\nDensidade Populacional:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidade1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidade2);
    if (densidade1 < densidade2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

    printf("\nPIB Per Capita:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, percapita1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, percapita2);
    if (percapita1 > percapita2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

    printf("\nSuper Poder:\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, poder1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, poder2);
    if (poder1 > poder2){
    printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

    return 0;
}
