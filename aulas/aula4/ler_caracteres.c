#include<stdio.h>

int main(){
  char tecla = '\0'; //caractere nulo

  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); // usado para pegar o proximo caractere dentro do buffer
  printf("Voce digitou: %c\n", tecla);

  printf("Digite outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Voce digitou: %c\n", tecla);


  char nome[31];
  printf("Entre com um nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Voce digitou: %s\n", nome); // string não usa &
  

  
  return 0;
}