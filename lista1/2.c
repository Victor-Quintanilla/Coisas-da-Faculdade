//Fa ̧ca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
//hexadecimal e octal.

#include <stdio.h>

int main(void) {
  int num;
  printf("Insira um número decimal: ");
  scanf("%d",&num);
  printf("%d em hexadecimal é %X\n",num,num);
  printf("%d em octal é %o\n",num,num);
  return 0;
}
