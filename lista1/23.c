//Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
//d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
//entrada de 123, a resposta do programa seria 321.

#include <stdio.h>

int main(void) {
  int num,nc,nd,nu;
  printf("Insira um número com três dígitos: ");scanf("%d",&num);
  nc = num/100;
  nd = (num-nc*100)/10;
  nu = num-(nc*100+nd*10);
  printf("O número %d, que possiu os digitos %d, %d e %d, em sua ordem inversa é: %d%d%d ",num,nc,nd,nu,nu,nd,nc);
  return 0;
}
