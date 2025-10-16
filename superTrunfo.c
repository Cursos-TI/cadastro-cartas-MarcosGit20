#include <stdio.h>

int main () {

    //Variaveis da Carta 1
    char Estado1;
    char codigo1[4];
    char nomeCidade1 [50];
    int populaçao1;
    float area1, pib1;
    int pontosTuristicos1;

    //Variaveis da Carta 2
    char Estado2;
    char codigo2[4];
    char nomeCidade2 [50];
    int populaçao2;
    float area2, pib2;
    int pontosTuristicos2;
    


    //Entrada de dados da carta 1

    printf("Entrada de dados Carta 1 \n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta: (01 a 04) \n");
    scanf("%c, &codigo1");

    printf ("Digite o nome da cidade: \n");
    scanf ("%c, &nomeCidade1");

    printf ("Numero de habitantes na cidade: \n");
    scanf ("%d, &populaçao1");

    printf("Area da Cidade em quilometros quadrados: \n");
    scanf("%c, &area1");

    printf("PIB da cidade: \n");
    scanf("%c, &pib1");

    printf ("Quantidade de pontos turisticos da cidade: \n");
    scanf("%d, &pontosTuristicos1");

    //Entrada de dados da carta 2

    printf("Entrada de dados Carta 2 \n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta: (01 a 04) \n");
    scanf("%c, &codigo2");

    printf ("Digite o nome da cidade: \n");
    scanf ("%c, &nomeCidade2");

    printf ("Numero de habitantes na cidade: \n");
    scanf ("%d, &populaçao2");

    printf("Area da Cidade em quilometros quadrados: \n");
    scanf("%c, &area2");

    printf("PIB da cidade: \n");
    scanf("%c, &pib2");

    printf ("Quantidade de pontos turisticos da cidade: \n");
    scanf("%d, &pontosTuristicos2");

    return 0;
}
