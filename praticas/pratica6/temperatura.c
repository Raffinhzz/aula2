#include<stdio.h>

int main(){
float temp = 0.0f;
printf("Insira a temperatura que esta fazendo na sua localizacao: \n");
scanf("%f", &temp);

if(temp < 20.0f){
    printf("Esta frio!\n");
} else if(temp >= 20.0f && temp <= 30.0f){
    printf("Esta agradavel!\n");
} else if(temp >= 30.01f && temp <=40.0f){
    printf("Esta quente!\n");
}else if(temp > 40.0f){
    printf("Esta quente pra cacete!\n");
} else {
    printf("Temperatura invalida");
}
    return 0;
}