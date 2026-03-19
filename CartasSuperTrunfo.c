#include <stdio.h>

int main (){

    char Estado01, Estado02;
    char Código_da_cidade01[5], Código_da_cidade02[5];
    char Nome_da_cidade01[50], Nome_da_cidade02[50];
    int população01, população02, Numero_de_pontos_turisticos01, Numero_de_pontos_turisticos02;
    float Area01, Area02, PIB01, PIB02;
    float Densidade_Popu01, Densidade_Popu02, PIB_per01, PIB_per02;
   
    //Primeira carta do jogo

        printf("DIgite o primeiro Estado: ");
    scanf(" %c", &Estado01);

        printf("Digite o codigo: ");
    scanf("%s", Código_da_cidade01);
    
        printf("Digite o nome da cidade: ");
    scanf("%s", Nome_da_cidade01);

        printf("Digite a população: ");
    scanf("%d", &população01);

        printf("Digite a area: ");
    scanf("%f", &Area01);

        printf("Digite o PIB: ");
    scanf("%f", &PIB01);

        printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Numero_de_pontos_turisticos01);

    //Segunda carta do jogo

        printf("DIgite o segundo Estado: ");
    scanf(" %c", &Estado02);

        printf("Digite o codigo: ");
    scanf("%s", Código_da_cidade02);

        printf("Digite o nome da cidade: ");
    scanf("%s", Nome_da_cidade02);

        printf("Digite a população: ");
    scanf("%d", &população02);

        printf("Digite a area: ");
    scanf("%f", &Area02);

        printf("Digite o PIB: ");
    scanf("%f", &PIB02);

        printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &Numero_de_pontos_turisticos02);

    //Calculando densidade populacional e PIB per capita
    Densidade_Popu01 = (float) população01 / Area01;
    Densidade_Popu02 = (float) população02 / Area02;
    PIB_per01 = (float) PIB01 / população01;
    PIB_per02 = (float) PIB02 / população02;

    //impressão da primeira carta
    printf("\n*** Carta 1: ***\n");
    printf("Estado: %c \n", Estado01);
    printf("Codigo: %s \n", Código_da_cidade01);
    printf("Nome da Cidade: %s \n", Nome_da_cidade01);
    printf("População: %d \n", população01);
    printf("Area: %.2f \n", Area01);
    printf("PIB: %.2f \n", PIB01);
    printf("Numero de pontos turisticos: %d \n", Numero_de_pontos_turisticos01);
    printf("densidade populacional: %f \n", Densidade_Popu01);
    printf("PIB_per_capita: %.2f \n", PIB_per01);

    //impressão da Segunda carta
    printf("\n*** Carta 2: ***\n");
    printf("Estado: %c \n", Estado02);
    printf("Codigo: %s \n", Código_da_cidade02);
    printf("Nome da Cidade: %s \n", Nome_da_cidade02);
    printf("População: %d \n", população02);
    printf("Area: %.2f \n", Area02);
    printf("PIB: %.2f \n", PIB02);
    printf("Numero de pontos turisticos: %d \n", Numero_de_pontos_turisticos02);
    printf("densidade populacional: %.2f \n", Densidade_Popu02);
    printf("PIB_per_capita: %.2f \n", PIB_per02);

    return 0;
}