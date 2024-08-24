#include<stdio.h>

int main() {
  printf("=============================\n");
  printf("\t%s\t\t%s\n", "N O T A", "L E G A L");
  printf("=============================\n");
  printf("\n%s\t\t%s %s\n", "Produto", "Qtd", "Valor Unit");
  printf("\n%s\t%03i\t\t%.2f\n", "Camiseta", 2, 39.99);
  printf("%s\t\t%03i\t\t%.2f\n", "Calça", 1, 89.90);
  printf("%s\t%03i\t\t%.2f\n", "Meia Social", 3, 19.99);
  printf("=============================\n");
  printf("%s %20s\n","Total:", "R$ 229.85");


  return 0;
}