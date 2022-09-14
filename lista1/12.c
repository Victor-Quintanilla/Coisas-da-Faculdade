//Escreva um programa que peça ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
//a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.

#include <stdio.h>

int main(void) {
  int a,b,res;
  printf("Insira dois numeros (separados por espaço): ");
  scanf("%d %d",&a,&b);
  res = a%b;
  printf("A soma dos numeros inseridos é %d seu produto é %d sua diferença é %d seu quociente é %.2f e o resto da sua divisão é %d",a+b,a*b,a-b,(float)a/(float)b,res);
  return 0;
}
