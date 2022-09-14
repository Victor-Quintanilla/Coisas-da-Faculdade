//Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
//dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
//trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
//tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
//Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.

#include <stdio.h>

int main(void) {
  int dias;
  float valor = 50.25;
  printf("Insira quantos dias o vendedor trabalhou: "); scanf("%d",&dias);
   if(dias <= 10){
    printf("O vendedor faturou R$%.2f pelos %d dias trabalhados",(valor*dias)*0.9,dias);
  }
  else if(dias > 10 && dias <= 20){
    printf("O vendedor faturou R$%.2f pelos %d dias trabalhados",((valor*dias)*1.2)*0.9,dias);
  }
  else{
    printf("O vendedor faturou R$%.2f pelos %d dias trabalhados",((valor*dias)*1.3)*0.9,dias);
  }
  return 0;
}
