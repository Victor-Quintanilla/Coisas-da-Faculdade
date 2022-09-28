//Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
//pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).

#include <stdio.h>
#include <math.h>

int main(void) {
  float x1,x2,y1,y2,d;
  printf("Insira as coordenadas do primeiro ponto (separe-as com espaço): "); scanf("%f %f",&x1,&y1);
  printf("Insira as coordenadas do segundo ponto (separe-as com espaço): "); scanf("%f %f",&x2,&y2);
  d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  printf("A distância entre esses dois pontos é de: %.3f",d);
  return 0;
}
