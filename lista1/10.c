//Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
//fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main(void) {
  float c,l,a;
  printf("Insira as medidas da caixa (comprimento, largura e altura): ");
  scanf("%f %f %f",&c,&l,&a);
  printf("O volome da caixa é de %.2f",c*l*a);
  return 0;
}
