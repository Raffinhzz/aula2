#include<stdio.h>
int main(){
  long int matricula = 2422130043;
  int idade = 19;
  float altura = 1.90f;
  int peso = 60;
  char sexo = 'M';
  printf("Matricula: %li\n", matricula);
  printf("Idade: %i anos\n", idade);
  printf("Altura: %.2fm\n", altura);
  printf("Peso: %ikg\n", peso);
  printf("Sexo: %c\n", sexo);

  return 0;
}