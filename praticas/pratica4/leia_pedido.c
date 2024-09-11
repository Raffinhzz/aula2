#include<stdio.h>

int main(){

  char produto[10];
  float valor = 0.0f;

  printf("Digite o nome do produto que você gostaria de comprar: \n");
  scanf("%[^\n]c", &produto); //Ele vai ler até o \n final texto
  getchar();

  printf("Digite o valor desse produto: \n");
  scanf("%f", &valor);
  getchar();

  printf("===========================\n");
  printf("\t\tPedido\n");
  printf("===========================\n");
  printf("%s\t\t%s %s %s\n", "Produto", "Qtd","Valor","Unit");
  printf("%s\t%02i  R$ %7.2f\n", produto, 1, valor);
  printf("=====================");
  

  return 0;
}