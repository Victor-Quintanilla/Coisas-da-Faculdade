//Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
//sucessor e antecessor.

#include <stdio.h>

int main(void) {
  int x;
  printf("Insira um valor inteiro: ");
  scanf("%d",&x);
  printf("O sucessor de %d é %d e seu antecessor é %d",x,x+1,x-1);
  return 0;
}
