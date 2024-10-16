#include<stdio.h>
int main(){
float valor = 0.0f; 
float valor_desconto = 0.0f;

printf("Entre com um valor: \n");
scanf("%f", &valor);

if (valor <= 100.0f ){
     valor_desconto = valor * 0.01f;
} else if(valor >= 100.01f && valor <= 500.00f ){
     valor_desconto = valor * 0.05f;
} else if( valor >= 500.01f){
     valor_desconto = valor * 0.1f; 
}else {
    printf("Digitos invalidos!\n");
} printf("O seu valor final eh: %.2f\n", valor_desconto);



    return 0;
}