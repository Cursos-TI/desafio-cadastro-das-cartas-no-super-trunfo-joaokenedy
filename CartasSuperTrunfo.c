#include <stdio.h>
int main()
{
    //declarando as variaveis
    char estado1, estado2 ;
    char carta1[10], carta2[10], cidade1[30], cidade2[30];
    int populacao1, populacao2, pturistico1, pturistico2;
    float pib1, pib2, area1, area2;
    //coletando os dados da primeira carta
    printf("Bem vido ao jogo Super trunfo!!\n Vamos Começar inserindo os dados da primeira carta!! \n");
    printf(" Digite uma letra entre 'A' a 'H' que identifica o Estado! \n");
    scanf(" %c", &estado1);
    // codigo da carta
    printf("Digite o codigo da carta: \n");
    scanf("%s", carta1);
    // nome da cidade 
    printf("Digite o nome dade Cidade 'sem espaço!'\n");
    scanf("%s", cidade1);
    // populacao
    printf("Digite a quatidade populacional!\n");
    scanf("%d", &populacao1);
    // pib
    printf("Digite o PIB!\n");
    scanf("%f", &pib1);
    // area
    printf("Digite a area territorial!\n");
    scanf("%f", &area1);
    //pontos turisticos
    printf("Digite a quantidade de pontos turisticos!\n");
    scanf("%d", &pturistico1);
    
    // exibindo a carta 1
    printf("Dados das cartas: \n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1 );
    printf("Codigo: %s \n", carta1 );
    printf("Cidade: %s \n", cidade1 );
    printf("Populacao: %d Habitantes \n", populacao1 );
    printf("PIB: R$ %.2f  Reais \n", pib1 );
    printf("Area: %.2f Km² \n", area1 );
    printf("Numeros de Pontos Turisticos: %d \n", pturistico1 );

    //coletando os dados da Segunda carta
    printf("Agora vamos inserir os dados da segunda carta!! \n");
    printf(" Digite uma letra entre 'A' a 'H' que identifica o Estado! \n");
    scanf(" %c", &estado2);
    // codigo da carta
    printf("Digite o codigo da carta: \n");
    scanf("%s", carta2);
    // nome da cidade 
    printf("Digite o nome dade Cidade 'sem espaço!'\n");
    scanf("%s", cidade2);
    // populacao
    printf("Digite a quatidade populacional!\n");
    scanf("%d", &populacao2);
    // pib
    printf("Digite o PIB!\n");
    scanf("%f", &pib2);
    // area
    printf("Digite a area territorial!\n");
    scanf("%f", &area2);
    //pontos turisticos
    printf("Digite a quantidade de pontos turisticos!\n");
    scanf("%d", &pturistico2);
    
    // exibindo a carta
    printf("Dados das cartas: \n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2 );
    printf("Codigo: %s \n", carta2 );
    printf("Cidade: %s \n", cidade2 );
    printf("Populacao: %d Habitantes \n", populacao2 );
    printf("PIB: R$ %.2f  Reais \n", pib2 );
    printf("Area: %.2f Km² \n", area2 );
    printf("Numeros de Pontos Turisticos: %d \n", pturistico2 );

    

    
    return 0;
}