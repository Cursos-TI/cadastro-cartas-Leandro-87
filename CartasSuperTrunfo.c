#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state[5], city[30], stateB[5], cityB[30];
  int population, points, populationB, pointsB;
  double area, pib, areaB, pibB;

  // Área para entrada de dados
  printf("Olá, vamos começar a preencher as cartas do Super Trunfo!\n");
  printf("Preencha os campos da sua cidade.\n\n");

  //CADASTRO DA CARTA 1

  printf("CARTA 1\n");
  printf("Estado: ");
  scanf("%s", state);

  printf("Cidade: ");
  scanf("%s", city);

  printf("População: ");
  scanf("%d", &population);

  printf("Área (km2): ");
  scanf("%lf", &area);

  printf("PIB: ");
  scanf("%lf", &pib);

  printf("Quantidades de pontos turisticos: ");
  scanf("%d", &points);

  //CADASTRO DA CARTA 2

  printf("CARTA 2\n");
  printf("Estado: ");
  scanf("%s", stateB);

  printf("Cidade: ");
  scanf("%s", cityB);

  printf("População: ");
  scanf("%d", &populationB);

  printf("Área (km2): ");
  scanf("%lf", &areaB);

  printf("PIB: ");
  scanf("%lf", &pibB);

  printf("Quantidades de pontos turisticos: ");
  scanf("%d", &pointsB);

  // Área para exibição dos dados da cidade

  // EXIBI CARTA 1
  printf("\nCARTA 1\n");
  printf("Estado: %s\n", state);
  printf("Código: A01\n");
  printf("Cidade: %s\n", city);
  printf("População: %d\n", population);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turisticos: %d\n", points);

  // EXIBI CARTA 2
  printf("\n\nCARTA 2\n");
  printf("Estado: %s\n", stateB);
  printf("Código: B01\n");
  printf("Cidade: %s\n", cityB);
  printf("População: %d\n", populationB);
  printf("Área: %.2f\n", areaB);
  printf("PIB: %.2f\n", pibB);
  printf("Pontos Turisticos: %d\n", pointsB);

return 0;
} 
