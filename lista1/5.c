//Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
//pago, considerando que o restaurante cobra 10% de taxa para o gar ̧com.

#include <stdio.h>

int main(void) {
  float x;
  printf("Insira o valor da conta a ser paga:");
  scanf("%f",&x);
  printf("O valor da conta acrescido de 10%% é : %.3f",x*1.1);
  return 0;
}
