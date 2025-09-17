#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state; char city[30]; int population; int points; double area;  double pib;

  // Área para entrada de dados
  printf("Olá, vamos começar a preencher as cartas do Super Trunfo!\n");
  printf("Preencha os campos da sua cidade.\n\n");

  //CADASTRO DA CARTA 1

  printf("CARTA 1\n");
  printf("Estado: ");
  scanf("%s", &state);

  printf("Cidade: ");
  scanf("%s", &city);

  printf("População: ");
  scanf("%d", &population);

  printf("Área (km2): ");
  scanf("%.2f", &area);

  printf("PIB: ");
  scanf("%.2f", &pib);

  printf("Quantidades de pontos turisticos: ");
  scanf("%d", &points);

  //CADASTRO DA CARTA 2

  // Área para exibição dos dados da cidade

  printf("\nCARTA 1\n");
  printf("Estado: %s\n", state);
  printf("Código: A01\n");
  printf("Cidade: %s\n", city);
  printf("População: %d\n", population);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Pontos Turisticos: %d\n", points);

return 0;
} 
