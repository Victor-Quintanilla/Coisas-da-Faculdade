//Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
//programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
//deseja converter.

#include <stdio.h>

int main(void) {
  float c,r;
  printf("Insira a cotação atual do dólar: ");
  scanf("%f",&c);
  printf("Insira a quantidade de reais que você quer converter em dólares: ");
  scanf("%f",&r);
  printf("%.2f reais convertidos em dólares é: %.2f",r,r/c);
  return 0;
}
