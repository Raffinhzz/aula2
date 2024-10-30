#include <stdio.h>
int main(){
    int nota = 0;
    do{

        printf("Escolha um numero de 1 a 10: \n");
        scanf("%i", &nota);
        while (getchar() != '\n');
    
    } while(nota < 1 || nota > 10);
    
    return 0;
}