#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // CARTA 1
 
  char estado1 [25]; 
  char código1 [25];
  char cidade1 [25];
  int população1;
  float área1;
  float pib1;
  int pontos1;

  // CARTA 2
  
  char estado2 [25];
  char código2 [25];
  char cidade2 [25];
  int população2;
  float área2;
  float pib2;
  int pontos2;

  // Área para entrada de dados

  // CARTA 1
  printf("CARTA 1\n");
  printf("Estado: ");
  scanf("%s", estado1);

  printf("Código: ");
  scanf("%s", código1);

  printf("Cidade: ");
  scanf("%s", cidade1);

  printf("População: ");
  scanf("%d", &população1);

  printf("Área: ");
  scanf("%f", &área1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Pontos: ");
  scanf("%d", &pontos1);

  // CARTA 2
  printf("CARTA 2\n");
  printf("Estado: ");
  scanf("%s", estado2);

  printf("Código: ");
  scanf("%s", código2);

  printf("Cidade: ");
  scanf("%s", cidade2);

  printf("População: ");
  scanf("%d", &população2);

  printf("Área: ");
  scanf("%f", &área2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos: ");
  scanf("%d", &pontos2);

return 0;

} 
