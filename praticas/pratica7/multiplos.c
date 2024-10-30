#include <stdio.h>
int main(){
int numero =  0;

printf("Insira um numero de um a 100: \n");
scanf("%i", &numero);

for(int i=1; i<101; i++){
printf("%i", i);
if(i % numero == 0){
    printf("%i, ", i);
}
}