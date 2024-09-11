#include<stdio.h>
int main(){
  int numero = 0; //admitir um valor inicial para limpar a memória
  printf("Entre com um número: ");
  
  int deu_certo = scanf("%i", &numero);
  
  printf("Você digitou: %i\n", numero);
  printf("A leitura deu certo? %i\n", deu_certo);

  int coord_x = 0;
  int coord_y = 0;

  printf("Entre com a coordenadas do ponto: ");
  deu_certo = scanf("%i %i", &coord_x, &coord_y);

  printf("Voce digitou: (%i , %i)\n", coord_x, coord_y);
  printf("A leitura deu certo? %i\n", deu_certo);

  return 0;
}