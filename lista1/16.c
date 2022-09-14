//Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
//necess ́ario possuir alguns dados, tais como o valor da hora aula, n ́umero de horas trabalhadas no mˆes e
//percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
//o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
//liquido do professor.

#include <stdio.h>

int main(){
  int horas;
  float ha,inss;
  printf("Insira o valor da hora aula: "); scanf("%f",&ha);
  printf("Insira a quantidade de horas trabalhadas: "); scanf("%d",&horas);
  printf("Insira o percentual de desconto do INSS: "); scanf("%f",&inss);
  inss = inss/100;
  printf("O salário bruto do professor é de R$%.2f e seu salário liquido é de R$%.2f",ha*horas,(ha*horas)*(1-inss)); 
 
    return 0;
}
