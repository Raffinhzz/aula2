#include <stdio.h> 
int main() { //funcao principal
  printf("\nAula apc 3\n"); //imprime na tela
  //imprime um numero inteiro
  printf("\n%i numero inteiro\n", 10); 
  printf("\n%i numero inteiro\n", 23,24);
  printf("\n%10i numero inteiro\n",6723);
  printf("\n%10i numero inteiro\n",0001);

  //imprime um numero decimal
  printf("\n%f nuemro decimal\n",45.9000);
  printf("\n%10.2f numero decimal\n",45.3489);
  printf("\n%.5f numero decimal\n",675.90876449);

  //impriome um caratere aspas simples
  int a;  
  printf("insira sua inicial à frente: ");
  scanf("%c", &a);
  printf("\n A incial escolhida foi %c\n",a);
  
  
  return 0; //retorna o inteiro
} 