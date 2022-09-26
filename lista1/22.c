//Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras
//min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto
//seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.

#include <stdio.h>

int main(void) {
  printf("Números inteiros equivalentes aos caracteres a seguir: \n A = %d\n B = %d\n C = %d\n a = %d\n b = %d\n c = %d\n 0 = %d\n 1 = %d\n 2 = %d\n $ = %d\n * = %d\n + = %d\n / = %d\n Espaço = %d\n",'A','B','C','a','b','c','0','1','2','$','*','+','/',' ');
  return 0;
}
