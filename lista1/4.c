//Sabendo que os argumentos da fun ̧c ̃ao ”printf”podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente
//argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
//seu meio.

#include <stdio.h>

int main(void) {
  float x;
  printf("Insira um número inteiro:");
  scanf("%f",&x);
  printf("Para o número %0.1f, temos que seu triplo é %0.1f,seu quadrado é %0.1f, se sua metade é %0.1f",x,x*3,x*x,x/2);
  return 0;
}
