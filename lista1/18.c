//Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia
//e sua  ́area. Use o valor de 3,14159 para ”pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
//instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.

#include <stdio.h>

int main(void) {
  float raio,pi = 3.14159;
  printf("Escreva o raio da circunferencia: "); scanf("%f",&raio);
  printf("----------CALCULANDO---------\n");
  printf("Seu diametro é %.3f sua circunferencia é %.3f e sua área é %.3f",raio*2,2*pi*raio,raio*raio*pi);
  return 0;
}
