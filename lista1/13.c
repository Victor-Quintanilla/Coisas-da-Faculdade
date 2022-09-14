//Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores. O objetivo  ́e que a
//vari ́avel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valores
//ap ́os a efetiva ̧c ̃ao do processamento da troca.

#include <stdio.h>

int main(void) {
  int a,b;
  printf("Insira duas variáveis separadas por espaço: "); scanf("%d %d",&a,&b);
  printf("As variáveis são a -> %d e b -> %d\n",a,b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("---------TROCANDO AS VARIÁVEIS---------\n");
  printf("Agora as variáveis são a -> %d e b -> %d",a,b);
  return 0;
}
