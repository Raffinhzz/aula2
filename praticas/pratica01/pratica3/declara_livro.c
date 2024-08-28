#include<stdio.h>

int main(){

  int isbn = 0;
  int npag = 0;
  float preco = 0.0f;
  int publicacao = 0;

  printf("ISBN: %013i\n", isbn);
  printf("Num.Paginas: %03i\n", npag);
  printf("Preco: 'R$'%07.2f\n", preco);
  printf("Publicacao: %04i", publicacao);
  
  return 0;
}