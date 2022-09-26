//Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
//segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.

#include <stdio.h>

int main(void) {
  int a,b;
  printf("Insira um número inteiro: "); scanf("%d",&a);
  printf("Insira outro número inteiro: "); scanf("%d",&b);
  a % b == 0 ? printf("%d é um multiplo de %d",a,b) : printf("%d não é um multiplo de %d",a,b);
  return 0;
}
