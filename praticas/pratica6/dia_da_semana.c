#include<stdio.h>

int main(){
int dia = 0; 

printf("Insira o dia da semana com um digito de 1 a 7: \n");
scanf("%i", &dia);

switch (dia){
case 1: printf("Este dia eh Domingo!"); break;
case 2: printf("Este dia eh Segunda!"); break;
case 3: printf("Este dia eh Terca!"); break;
case 4: printf("Este dia eh Quarta!"); break;
case 5: printf("Este dia eh Quinta!"); break;
case 6: printf("Este dia eh Sexta!"); break;
case 7: printf("Este dia eh Sabado!"); break;
default: printf("Digito invalido!");
}
    return 0;
}