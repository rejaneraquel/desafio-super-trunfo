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
  double populacao1, pib1, area1, pib2, area2, populacao2;

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
    scanf("%lf", &populacao1);

    // Mostrando dados cadastrados
    printf("**Carta 01**\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    // %.0lf -> Sem casa decimal
    printf("População: %.0lf\n", populacao1);
    
    return 0;
};