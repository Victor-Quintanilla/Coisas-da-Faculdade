//Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
//h ́a neste tempo.

#include <stdio.h>

int main(void) {
  int tempo,h,m,s;
  printf("Insira uma quantidade de segundos que queria transformar em horas, minutos e segundos: ");scanf("%d",&tempo);
  h = tempo / 3600;
  m = (tempo-h*3600) / 60;
  s = tempo - (h*3600+m*60);
  printf("=========CALCULANDO========\n");
  printf("%d segundos equivale a %d horas, %d minutos e %d segundos",tempo,h,m,s);
  return 0;
}
