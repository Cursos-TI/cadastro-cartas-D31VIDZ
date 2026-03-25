#include <stdio.h>

int main (){

    char Estado01 = 'A', Estado02 = 'B';
    char Código_da_cidade01[5] = "A01", Código_da_cidade02[5] = "B02";
    char Nome_da_cidade01[50], Nome_da_cidade02[50];
    signed long int população01, população02;
    int opcao01, opcao02, Numero_de_pontos_turisticos01, 
    Numero_de_pontos_turisticos02, resultado1, resultado2;
    float Area01, Area02, PIB01, PIB02, SuperPoder01, SuperPoder02;
    float Densidade_Popu01, Densidade_Popu02, PIB_per01, PIB_per02;

    //Primeira carta do jogo
    printf("Digite o nome da cidade: ");
        scanf("%s", Nome_da_cidade01);
    printf("Digite a população: ");
        scanf("%ld", &população01);
    printf("Digite a area: ");
        scanf("%f", &Area01);
    printf("Digite o PIB: ");
        scanf("%f", &PIB01);
    printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &Numero_de_pontos_turisticos01);

    //Segunda carta do jogo
    printf("Digite o nome da cidade: ");
        scanf("%s", Nome_da_cidade02);
    printf("Digite a população: ");
        scanf("%ld", &população02);
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

    //Calculo do super poder 
    SuperPoder01 = população01 + Area01 + PIB01 + 
            Numero_de_pontos_turisticos01 + PIB_per01 - Densidade_Popu01;
    SuperPoder02 = população02 + Area02 + PIB02 + 
            Numero_de_pontos_turisticos02 + PIB_per02 - Densidade_Popu02;

    //impressão da primeira carta
    printf("\n*** Carta 1: ***\n");
    printf("Estado: %c \n", Estado01);
    printf("Codigo: %s \n", Código_da_cidade01);
    printf("Nome da Cidade: %s \n", Nome_da_cidade01);
    printf("População: %ld \n", população01);
    printf("Area: %.2f \n", Area01);
    printf("PIB: %.2f \n", PIB01);
    printf("Numero de pontos turisticos: %d \n", Numero_de_pontos_turisticos01);
    printf("densidade populacional: %.2f \n", Densidade_Popu01);
    printf("PIB_per_capita: %.2f \n", PIB_per01);

    //impressão da Segunda carta
    printf("\n*** Carta 2: ***\n");
    printf("Estado: %c \n", Estado02);
    printf("Codigo: %s \n", Código_da_cidade02);
    printf("Nome da Cidade: %s \n", Nome_da_cidade02);
    printf("População: %ld \n", população02);
    printf("Area: %.2f \n", Area02);
    printf("PIB: %.2f \n", PIB02);
    printf("Numero de pontos turisticos: %d \n", Numero_de_pontos_turisticos02);
    printf("densidade populacional: %.2f \n", Densidade_Popu02);
    printf("PIB_per_capita: %.2f \n", PIB_per02);

//Condições com if else
// Implementando uma logica onde o jogador escolhe qual atributo quer que seja comparado.

    printf("\n ** Qual opcao deseja verificar o primeiro atributo? ** \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB_PER_CAPITA \n");
    printf("7. Super Poder \n");
    printf("Digite a opção: ");
    scanf("%d", &opcao01);

    switch (opcao01){
    case 1:
    //População
    printf("\n** População: **\n");

        resultado1 = população01 > população02 ? 1 : 0;
    if(população01 > população02){
        printf("Carta 1 - %s População: %ld \n",Nome_da_cidade01 ,população01);
        printf("Carta 2 - %s População: %ld \n",Nome_da_cidade02 ,população02);
        printf("Carta 1 venceu!");
    }else if(população01 < população02){
        printf("Carta 1 - %s População: %ld \n",Nome_da_cidade01 ,população01);
        printf("Carta 2 - %s População: %ld \n",Nome_da_cidade02 ,população02);
        printf("Carta 2 venceu! \n");
    }else{
        printf("Carta 1 - %s População: %ld \n",Nome_da_cidade01 ,população01);
        printf("Carta 2 - %s População: %ld \n",Nome_da_cidade02 ,população02);
        printf("Empate \n");
    }

        break;
    case 2:
    //area
    printf("\n** Área: **\n"); 

    resultado1 = Area01 > Area02 ? 1 : 0;
    if(Area01 > Area02){
        printf("Carta 1 - %s Área: %.2f \n",Nome_da_cidade01 ,Area01);
        printf("Carta 2 - %s Área: %.2f \n",Nome_da_cidade02 ,Area02);
        printf("Carta 1 venceu! \n");
    }else if(Area01 < Area02){
        printf("Carta 1 - %s Área: %.2f \n",Nome_da_cidade01 ,Area01);
        printf("Carta 2 - %s Área: %.2f \n",Nome_da_cidade02 ,Area02);
        printf("Carta 2 venceu! \n");
    }else {
        printf("Carta 1 - %s Área: %.2f \n",Nome_da_cidade01 ,Area01);
        printf("Carta 2 - %s Área: %.2f \n",Nome_da_cidade02 ,Area02);
        printf("Empate! \n");
    }
        break;
    case 3: 
    //PIB
    printf("\n** PIB: **\n");

        resultado1 = PIB01 > PIB02 ? 1 : 0;
    if (PIB01 > PIB02){
        printf("Carta 1 - %s PIB: %.2f \n",Nome_da_cidade01 ,PIB01);
        printf("Carta 2 - %s PIB: %.2f \n",Nome_da_cidade02 ,PIB02);
        printf("Carta 1 venceu! \n");       
    }else if(PIB01 < PIB02){
        printf("Carta 1 - %s PIB: %.2f \n",Nome_da_cidade01 ,PIB01);
        printf("Carta 2 - %s PIB: %.2f \n",Nome_da_cidade02 ,PIB02);
        printf("Carta 2 venceu! \n");
    }else {
        printf("Carta 1 - %s PIB: %.2f \n",Nome_da_cidade01 ,PIB01);
        printf("Carta 2 - %s PIB: %.2f \n",Nome_da_cidade02 ,PIB02);
        printf("Empate! \n");   
    }
        break;
    case 4:
    //Numero de pontos turisticos
    printf("\n** Pontos Turisticos: **\n");

        resultado1 = Numero_de_pontos_turisticos01 > 
                        Numero_de_pontos_turisticos02 ? 1 : 0;
    if (Numero_de_pontos_turisticos01 > Numero_de_pontos_turisticos02){
        printf("Carta 1 - %s Pontos Turisticos: %d \n",Nome_da_cidade01 ,Numero_de_pontos_turisticos01);
        printf("Carta 2 - %s Pontos Turisticos: %d \n",Nome_da_cidade02 ,Numero_de_pontos_turisticos02);
        printf("Carta 1 venceu! \n"); 
    }else if(Numero_de_pontos_turisticos01 < Numero_de_pontos_turisticos02){
        printf("Carta 1 - %s Pontos Turisticos: %d \n",Nome_da_cidade01 ,Numero_de_pontos_turisticos01);
        printf("Carta 2 - %s Pontos Turisticos: %d \n",Nome_da_cidade02 ,Numero_de_pontos_turisticos02);
        printf("Carta 2 venceu! \n");         
    }else {
        printf("Carta 1 - %s Pontos Turisticos: %d \n",Nome_da_cidade01 ,Numero_de_pontos_turisticos01);
        printf("Carta 2 - %s Pontos Turisticos: %d \n",Nome_da_cidade02 ,Numero_de_pontos_turisticos02);
        printf("Empate! \n"); 
    }
        break;
    case 5:
    //Densidade populacional
    printf("\n** Densidade populacional: **\n");

        resultado1 = Densidade_Popu01 < Densidade_Popu02 ? 1 : 0;
    if (Densidade_Popu01 < Densidade_Popu02){
        printf("Carta 1 - %s Densidade populacional: %f \n",Nome_da_cidade01 ,Densidade_Popu01);
        printf("Carta 2 - %s Densidade populacional: %f \n",Nome_da_cidade02 ,Densidade_Popu02);
        printf("Carta 1 venceu! \n"); 
    }else if(Densidade_Popu01 > Densidade_Popu02){
        printf("Carta 1 - %s Densidade populacional: %f \n",Nome_da_cidade01 ,Densidade_Popu01);
        printf("Carta 2 - %s Densidade populacional: %f \n",Nome_da_cidade02 ,Densidade_Popu02);
        printf("Carta 2 venceu! \n");        
    }else {
        printf("Carta 1 - %s Densidade populacional: %f \n",Nome_da_cidade01 ,Densidade_Popu01);
        printf("Carta 2 - %sDensidade populacional: %f \n",Nome_da_cidade02 ,Densidade_Popu02);
        printf("Empate! \n"); 
    }
        break;
    case 6:
    //PIB_PER_CAPITA
    printf("\n** PIB_PER_CAPITA: **\n");

        resultado1 = PIB_per01 > PIB_per02 ? 1 : 0;
    if (PIB_per01 > PIB_per02){
        printf("Carta 1 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade01 ,PIB_per01);
        printf("Carta 2 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade02 ,PIB_per02);
        printf("Carta 1 venceu! \n"); 
    }else if(PIB_per01 > PIB_per02){
        printf("Carta 1 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade01 ,PIB_per01);
        printf("Carta 2 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade02 ,PIB_per02);
        printf("Carta 2 venceu! \n");        
    }else {
        printf("Carta 1 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade01 ,PIB_per01);
        printf("Carta 2 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade02 ,PIB_per02);
        printf("Empate! \n"); 
    }
        break;
    case 7:
    //Super Poder
    printf("\n** Super Poder: **\n");

        resultado1 = SuperPoder01 > SuperPoder02 ? 1 : 0;
    if (SuperPoder01 > SuperPoder02){
        printf("Carta 1 - %s Super Poder: %f \n",Nome_da_cidade01 ,SuperPoder01);
        printf("Carta 2 - %s Super Poder: %f \n",Nome_da_cidade02 ,SuperPoder02);
        printf("Carta 1 venceu! \n"); 
    }else if(PIB_per01 > PIB_per02){
        printf("Carta 1 - %s Super Poder: %f \n",Nome_da_cidade01 ,SuperPoder01);
        printf("Carta 2 - %s Super Poder: %f \n",Nome_da_cidade02 ,SuperPoder02);
        printf("Carta 2 venceu! \n");        
    }else {
        printf("Carta 1 - %s Super Poder: %f \n",Nome_da_cidade01 ,SuperPoder01);
        printf("Carta 2 - %s Super Poder: %f \n",Nome_da_cidade02 ,SuperPoder02);
        printf("Empate! \n"); 
    }    
        break;
    default:
        printf("Opção invalida!");
        break;
    }

// Implementação comparações avançadas com atributos múltiplos
    printf("\n ** Qual opcao deseja verificar o segundo atributo? ** \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB_PER_CAPITA \n");
    printf("7. Super Poder \n");
    printf("Digite a opção: ");
    scanf("%d", &opcao02);

    if (opcao01 == opcao02){
        printf("Voce escolheu o mesmo atributo de comparação!\n");
    } else {
    switch (opcao02){
    case 1:
    //População
    printf("\n** População: **\n");

        resultado2 = população01 > população02 ? 1 : 0;
    if(população01 > população02){
        printf("Carta 1 - %s População: %ld \n",Nome_da_cidade01 ,população01);
        printf("Carta 2 - %s População: %ld \n",Nome_da_cidade02 ,população02);
        printf("Carta 1 venceu!");
    }else if(população01 < população02){
        printf("Carta 1 - %s População: %ld \n",Nome_da_cidade01 ,população01);
        printf("Carta 2 - %s População: %ld \n",Nome_da_cidade02 ,população02);
        printf("Carta 2 venceu! \n");
    }else{
        printf("Carta 1 - %s População: %ld \n",Nome_da_cidade01 ,população01);
        printf("Carta 2 - %s População: %ld \n",Nome_da_cidade02 ,população02);
        printf("Empate \n");
    }
        break;
    case 2:
    //area
    printf("\n** Área: **\n"); 

    resultado2 = Area01 > Area02 ? 1 : 0;
    if(Area01 > Area02){
        printf("Carta 1 - %s Área: %.2f \n",Nome_da_cidade01 ,Area01);
        printf("Carta 2 - %s Área: %.2f \n",Nome_da_cidade02 ,Area02);
        printf("Carta 1 venceu! \n");
    }else if(Area01 < Area02){
        printf("Carta 1 - %s Área: %.2f \n",Nome_da_cidade01 ,Area01);
        printf("Carta 2 - %s Área: %.2f \n",Nome_da_cidade02 ,Area02);
        printf("Carta 2 venceu! \n");
    }else {
        printf("Carta 1 - %s Área: %.2f \n",Nome_da_cidade01 ,Area01);
        printf("Carta 2 - %s Área: %.2f \n",Nome_da_cidade02 ,Area02);
        printf("Empate! \n");
    }
        break;
    case 3: 
    //PIB
    printf("\n** PIB: **\n");

        resultado2 = PIB01 > PIB02 ? 1 : 0;
    if (PIB01 > PIB02){
        printf("Carta 1 - %s PIB: %.2f \n",Nome_da_cidade01 ,PIB01);
        printf("Carta 2 - %s PIB: %.2f \n",Nome_da_cidade02 ,PIB02);
        printf("Carta 1 venceu! \n");       
    }else if(PIB01 < PIB02){
        printf("Carta 1 - %s PIB: %.2f \n",Nome_da_cidade01 ,PIB01);
        printf("Carta 2 - %s PIB: %.2f \n",Nome_da_cidade02 ,PIB02);
        printf("Carta 2 venceu! \n");
    }else {
        printf("Carta 1 - %s PIB: %.2f \n",Nome_da_cidade01 ,PIB01);
        printf("Carta 2 - %s PIB: %.2f \n",Nome_da_cidade02 ,PIB02);
        printf("Empate! \n");   
    }
        break;
    case 4:
    //Numero de pontos turisticos
    printf("\n** Pontos Turisticos: **\n");

        resultado2 = Numero_de_pontos_turisticos01 > 
                        Numero_de_pontos_turisticos02 ? 1 : 0;
    if (Numero_de_pontos_turisticos01 > Numero_de_pontos_turisticos02){
        printf("Carta 1 - %s Pontos Turisticos: %d \n",Nome_da_cidade01 ,Numero_de_pontos_turisticos01);
        printf("Carta 2 - %s Pontos Turisticos: %d \n",Nome_da_cidade02 ,Numero_de_pontos_turisticos02);
        printf("Carta 1 venceu! \n"); 
    }else if(Numero_de_pontos_turisticos01 < Numero_de_pontos_turisticos02){
        printf("Carta 1 - %s Pontos Turisticos: %d \n",Nome_da_cidade01 ,Numero_de_pontos_turisticos01);
        printf("Carta 2 - %s Pontos Turisticos: %d \n",Nome_da_cidade02 ,Numero_de_pontos_turisticos02);
        printf("Carta 2 venceu! \n");         
    }else {
        printf("Carta 1 - %s Pontos Turisticos: %d \n",Nome_da_cidade01 ,Numero_de_pontos_turisticos01);
        printf("Carta 2 - %s Pontos Turisticos: %d \n",Nome_da_cidade02 ,Numero_de_pontos_turisticos02);
        printf("Empate! \n"); 
    }
        break;
    case 5:
    //Densidade populacional
    printf("\n** Densidade populacional: **\n");

        resultado2 = Densidade_Popu01 < Densidade_Popu02 ? 1 : 0;
    if (Densidade_Popu01 < Densidade_Popu02){
        printf("Carta 1 - %s Densidade populacional: %f \n",Nome_da_cidade01 ,Densidade_Popu01);
        printf("Carta 2 - %s Densidade populacional: %f \n",Nome_da_cidade02 ,Densidade_Popu02);
        printf("Carta 1 venceu! \n"); 
    }else if(Densidade_Popu01 > Densidade_Popu02){
        printf("Carta 1 - %s Densidade populacional: %f \n",Nome_da_cidade01 ,Densidade_Popu01);
        printf("Carta 2 - %s Densidade populacional: %f \n",Nome_da_cidade02 ,Densidade_Popu02);
        printf("Carta 2 venceu! \n");        
    }else {
        printf("Carta 1 - %s Densidade populacional: %f \n",Nome_da_cidade01 ,Densidade_Popu01);
        printf("Carta 2 - %sDensidade populacional: %f \n",Nome_da_cidade02 ,Densidade_Popu02);
        printf("Empate! \n"); 
    }
        break;
    case 6:
    //PIB_PER_CAPITA
    printf("\n** PIB_PER_CAPITA: **\n");

        resultado2 = PIB_per01 > PIB_per02 ? 1 : 0;
    if (PIB_per01 > PIB_per02){
        printf("Carta 1 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade01 ,PIB_per01);
        printf("Carta 2 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade02 ,PIB_per02);
        printf("Carta 1 venceu! \n"); 
    }else if(PIB_per01 > PIB_per02){
        printf("Carta 1 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade01 ,PIB_per01);
        printf("Carta 2 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade02 ,PIB_per02);
        printf("Carta 2 venceu! \n");        
    }else {
        printf("Carta 1 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade01 ,PIB_per01);
        printf("Carta 2 - %s PIB_PER_CAPITA: %f \n",Nome_da_cidade02 ,PIB_per02);
        printf("Empate! \n"); 
    }
        break;
    case 7:
    //Super Poder
    printf("\n** Super Poder: **\n");

        resultado2 = SuperPoder01 > SuperPoder02 ? 1 : 0;
    if (SuperPoder01 > SuperPoder02){
        printf("Carta 1 - %s Super Poder: %f \n",Nome_da_cidade01 ,SuperPoder01);
        printf("Carta 2 - %s Super Poder: %f \n",Nome_da_cidade02 ,SuperPoder02);
        printf("Carta 1 venceu! \n"); 
    }else if(PIB_per01 > PIB_per02){
        printf("Carta 1 - %s Super Poder: %f \n",Nome_da_cidade01 ,SuperPoder01);
        printf("Carta 2 - %s Super Poder: %f \n",Nome_da_cidade02 ,SuperPoder02);
        printf("Carta 2 venceu! \n");        
    }else {
        printf("Carta 1 - %s Super Poder: %f \n",Nome_da_cidade01 ,SuperPoder01);
        printf("Carta 2 - %s Super Poder: %f \n",Nome_da_cidade02 ,SuperPoder02);
        printf("Empate! \n"); 
    }    
        break;
    default:
        printf("Opção invalida!");
        break;
    }        
    }

    if (resultado1 == 0 && resultado2 == 0){
        printf("\n Resultado 1: %d \n", resultado1);
        printf(" Resultado 2: %d \n", resultado2);
        printf(" Carta 2 Ganhou a batalha! \n");
    }else if (resultado1 == 1 && resultado2 == 1) {
        printf("\n Resultado 1: %d \n", resultado1);
        printf(" Resultado 2: %d \n", resultado2);
        printf(" Carta 1 Ganhou a batalha! \n");
    }else {
        printf("\n Resultado 1: %d \n", resultado1);
        printf(" Resultado 2: %d \n", resultado2);
        printf(" Carta 1 ganhou uma rodada e carta 2 ganhou outra.\n Empate! \n");
    }
    return 0;
}