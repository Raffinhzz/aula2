#include <stdio.h>
int main(){
// int numero1;
// int numero2;
// int numero3;


int numeros[10]; //array ou vetor

numeros[0] = 10;
numeros[1] = -45; // segunda posicao
numeros[2] = 5;
numeros[3] = -4;
numeros[4] = 0;
numeros[5] = 32;
numeros[6] = 11;
numeros[7] = 55;
numeros[8] = 99;
numeros[9] = -100;
// numeros[10] = 0; naum pode

for(int i=0;i<10;i++){
    printf("%i, ", numeros[i]);
}

float notas[10][2]; //matriz bidimensional

notas[0][0] = 2.0f;
notas[0][1] = 3.0f;
notas[1][0] = 4.5f;
notas[1][1] = 4.9f;
notas[2][0] = 5.9f;
notas[2][1] = 3.5f;
notas[3][0] = 2.9f;
notas[3][1] = 2.6f;
notas[4][0] = 2.9f;
notas[4][1] = 2.6f;
notas[5][0] = 2.9f;
notas[5][1] = 2.6f;
notas[6][0] = 2.9f;
notas[6][1] = 2.6f;
notas[7][0] = 2.9f;
notas[7][1] = 2.6f;
notas[8][0] = 2.9f;
notas[8][1] = 2.6f;
notas[9][0] = 2.9f;
notas[9][1] = 2.6f;

for(int i=0; i<10; i++){
    for(int j=0; j<2; j++){
        printf("%.1f, ", notas[i][j]);
    }
printf("\n");
}
return 0;
}