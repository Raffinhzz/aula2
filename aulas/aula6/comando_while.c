#include <stdio.h>

int main(){
    int numero = 0;

    printf("Entre com um numero de 1 a 10: \n");
    scanf("%i", &numero);
    

while (numero < 1 || numero > 10){
    while(getchar() != '\n'); //limpar teclado
    printf("Numero invalido. Tente novamente!\n");
    printf("Entre com um numero de 1 a 10: \n");
    scanf("%i", &numero);
}

int i = 0;

while (i < numero){
    printf("%i", i);
    i++;
}

    return 0;
}