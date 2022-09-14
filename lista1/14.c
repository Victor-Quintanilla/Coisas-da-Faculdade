//Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
//Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
//temperatura em Celsius.

#include <stdio.h>

int main(void) {
  float f,c;
  printf("Insira uma temperatura em graus Celsius: "); scanf("%f",&c);
  f = (9*c+160)/5;
  printf("-----------CONVERTENDO-----------\n");
  printf("%.2f graus celcius em farenheit é de %.2f graus",c,f);
  return 0;
}
