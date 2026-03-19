#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char Estado01, Estado02;
    char Código_da_cidade01[5], Código_da_cidade02[5];
    char Nome_da_cidade01[50], Nome_da_cidade02[50];
    int população01, população02, Numero_de_pontos_turisticos01, Numero_de_pontos_turisticos02;
    float Area01, Area02, PIB01, PIB02;
  // Área para entrada de dados

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
  // Área para exibição dos dados da cidade

      //impressão da primeira carta
    printf("Carta 1: \n");
    printf("Estado: %c \n", Estado01);
    printf("Codigo: %s \n", Código_da_cidade01);
    printf("Nome da Cidade: %s \n", Nome_da_cidade01);
    printf("População: %d \n", população01);
    printf("Area: %f \n", Area01);
    printf("PIB: %f \n", PIB01);
    printf("Numero de pontos turisticos: %d \n", Numero_de_pontos_turisticos01);
    
    //impressão da Segunda carta
    printf("Carta 2: \n");
    printf("Estado: %c \n", Estado02);
    printf("Codigo: %s \n", Código_da_cidade02);
    printf("Nome da Cidade: %s \n", Nome_da_cidade02);
    printf("População: %d \n", população02);
    printf("Area: %f \n", Area02);
    printf("PIB: %f \n", PIB02);
    printf("Numero de pontos turisticos: %d \n", Numero_de_pontos_turisticos02);

return 0;
} 
