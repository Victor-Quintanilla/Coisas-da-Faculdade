//Fa ̧ca um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.

#include <stdio.h>

int main(void) {
  float num;
  printf("Insira um numero decimal:");
  scanf("%f",&num);
  printf("%f com apenas uma casa decimal é: %.1f",num,num);
  return 0;
}
