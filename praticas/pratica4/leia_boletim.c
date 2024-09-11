#include<stdio.h>

int main(){
  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Insira sua matrícula: \n");
  scanf("%li", &matricula);
  getchar();

  printf("Insira sua nota 1: \n");
  scanf("%f", &a1);
  getchar();

  printf("Insira sua nota 2: \n");
  scanf("%f", &a2);
  getchar();

  media = (a1 + a2) / 2;

  printf("====================================\n");
  printf("%s\t\t%s\t%s\t\t%s\n", "Matricula", "a1", "a2", "Média");
  printf("%li\t\t%.1f\t%.1f\t\t%.1f", matricula, a1, a2, media);
  

  
  return 0;
}