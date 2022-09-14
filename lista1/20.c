//Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
//Obs.: N ̃ao utilizar estrutura de decis ̃ao if.

#include <stdio.h>

int main(void) {
  int n;
  printf("Insira um número inteiro: "); scanf("%d",&n);
  n % 2 == 0 ? printf("O número %d é par",n) : printf("O número %d é ímpar",n);
  return 0;
}
