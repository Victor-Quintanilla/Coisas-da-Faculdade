//Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuario, e sua media.
#include <stdio.h>

struct aluno{
  float n1;
  float n2;
  float m;
} aluno;

int main(void) {
  printf("Insira a primeira nota: ");scanf("%f", &aluno.n1);
  printf("Insira a segunda nota: "); scanf("%f",&aluno.n2);
  printf("==========CALCULANDO=========\n");
  printf("A média do aluno é: %0.1f",(aluno.n1 + aluno.n2)/2);
  return 0;
}
