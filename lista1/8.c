//Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
//quadrado.

#include <stdio.h>

int main(void) {
  int x;
  printf("Insira um valo inteiro: ");
  scanf("%d",&x);
  printf("%d elevado ao quadrado é: %d",x,x*x);
  return 0;
}
