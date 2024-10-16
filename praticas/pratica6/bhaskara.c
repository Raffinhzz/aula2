#include <stdio.h>
#include <math.h>

int main(){
    int a, b ,c;
    
printf("insira as variaveis da funcao: \n");
scanf("%i",&a);
printf("insira as variaveis da funcao: \n");
scanf("%i",&b);
printf("insira as variaveis da funcao: \n");
scanf("%i",&c);

int delta = (b * b) -(4 * (a * c));
int x1 = (-b + sqrt(delta)) / (2*a);
int x2 = (-b - sqrt(delta)) / (2*a);


if (delta >=0){
     x1 = (-b + sqrt(delta)) / (2*a);
     x2 = (-b - sqrt(delta)) / (2*a);

} else if (delta < 0){
    printf("A funcao nao possui raizes reais!");
} printf("As raizes da equacao sao %i e %i", x1, x2);
    
    
    return 0;
}