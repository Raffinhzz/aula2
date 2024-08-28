#include<stdio.h>
#include <limits.h>
#include <float.h>

int main(){

printf("o tipo 'int' aceita valores entre %i ate %i\n", INT_MIN, INT_MAX);
printf("O tipo 'float' aceita valores entre %E e %E\n", FLT_MIN, FLT_MAX);
printf("O tipo 'double' aceita valores entre %E e %E\n.\n", DBL_MIN, DBL_MAX);
  
  return 0;
}
