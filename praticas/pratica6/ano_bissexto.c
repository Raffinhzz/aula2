#include<stdio.h>

int main(){

    int ano = 0;
    printf("Insira uma ano: \n");
    scanf("%i", &ano);
    int ano_bissexto = ano % 4 == 0;
    if(ano_bissexto){
        printf("Este ano eh bissexto!\n");
    }else {
        printf("Este ano naum eh bissexto!\n:");
    }
    return 0;
}