//Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main(void) {
  int h,m,s;

  printf("Insira a quantidade de tempo em horas minutos e segundos respectivamente (separados por um espaço): ");
  scanf("%i %i %i",&h,&m,&s);
  printf("A quantidade de segundos total é de: %i", h*3600+m*60+s);
  
  return 0;
}
