/*
Modelo:
Carta 01
Estado:
Código da Carta:
Nome da Cidade:
População:
Área em km²:
PIB:
Números de Pontos Turisticos:
 */

#include <stdio.h>

int main(){
  // Declarando as variáveis Cartas
  char estado1, estado2;
  char codigoCarta1[4], codigoCarta2[4];
  char nomeCidade1[20], nomeCidade2[20];
  int pontosTuristicos1, pontosTuristicos2;
  float populacao1, pib1, area1, pib2, area2, populacao2;

  // Dados Carta 01:
    //Estado
    printf("Inserindo dados da Carta 01 \nDigite o Estado: \n");
    scanf(" %c", &estado1);

    //Código Carta
    printf("Insira o código do estado: \n");
    scanf("%s", codigoCarta1);
  
    //Nome Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    //População
    printf("Insira a população: \n");
    scanf("%f", &populacao1);

    // Area em km²
    printf("Insira a area(km²): \n");
    scanf("%f", &area1);

    //PIB
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    // Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Mostrando dados cadastrados

    //Carta 02
      // Estado
      printf("\nInserindo dados da Carta 02 \nDigite o Estado: \n");
      scanf(" %c", &estado2);

      // Código Carta
      printf("Insira o código do estado: \n");
      scanf("%s", codigoCarta2);

      // Nome Cidade
      printf("Insira o nome da cidade: \n");
      scanf("%s", nomeCidade2);

      // População
      printf("Insira a população: \n");
      scanf("%f", &populacao2);

      // Area em km²
      printf("Insira a area(km²): \n");
      scanf("%f", &area2);

      // PIB
      printf("Insira o PIB: \n");
      scanf("%f", &pib2);

      // Pontos Turísticos
      printf("Quantidade de Pontos Turísticos: \n");
      scanf("%d", &pontosTuristicos2);

      // Mostrando dados cadastrados
      //Carta01
      printf("\n********Carta 01********\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigoCarta1);
      printf("Cidade: %s\n", nomeCidade1);
      // %.0lf -> Sem casa decimal
      printf("População: %.0f habitantes\n", populacao1);
      printf("Área: %.0f Km² \n", area1);
      printf("PIB: R$ %.0f milhões \n", pib1);
      printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos1);
      //Carta 02
      printf("\n********Carta 02********\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", codigoCarta2);
      printf("Cidade: %s\n", nomeCidade2);
      // %.0lf -> Sem casa decimal
      printf("População: %.0f habitantes\n", populacao2);
      printf("Área: %.0f Km² \n", area2);
      printf("PIB: R$ %.0f milhões \n", pib2);
      printf("Quantidade de pontos turísticos: %d\n", pontosTuristicos2);
    return 0;
};