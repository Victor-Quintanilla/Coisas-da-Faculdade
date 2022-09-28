//Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
//geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).

#include <stdio.h>
#include <math.h>

int main(void) {
  float n1,n2,n3;
  printf("Insira um número: "); scanf("%f",&n1);
  printf("Insira um outro número: "); scanf("%f",&n2);
  printf("Insira mais um número: "); scanf("%f",&n3);
  printf("A média aritmética desses números é %.3f e a média geométrica é %.3f",(n1+n2+n3)/3,pow(n1*n2*n3, (float)1/3));
  return 0;
}
