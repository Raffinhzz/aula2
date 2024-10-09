#include<stdio.h>
int main(){
float valor = 0.0f;
float valor_desconto = 0.0f;
printf("Entre com um valor: \n");
scanf("%f", &valor);

if (valor <= 100.0f ){
    float valor_desconto = valor * 0.01f;
} else if(valor <= 500.0f ){
    float valor_desconto = valor * 0.05f;
}else { float valor_desconto = valor * 0.01f;

}
printf("o valor final eh %f \n", valor_desconto);


    return 0;
}