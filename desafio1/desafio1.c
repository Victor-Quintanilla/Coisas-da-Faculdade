#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    srand(time(NULL));

    unsigned char arm = 0;
    int escolha;

    do{
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Situação dos armários:\n");
        printf("7 6 5 4 3 2 1 0\n");
        printf("~~~~~~~~~~~~~~~~~~\n");

        for(unsigned char _ = 128; _ >= 1; _ = _/2){
            (arm & _) ? printf("1 ") : printf("0 ");
        }

        printf("\n****************************\n");
        printf("Escolha uma das opções abaixo\n");
        printf("1- Ocupar armário.\n");
        printf("2- Liberar armário.\n");
        printf("3- Sair.\n");
        printf("***************************\n");
        
        do{
            printf("Escolha: ");scanf("%d", &escolha);
            getchar();
        }while(escolha < 1 || 3 < escolha);

        switch(escolha){
        case 1:
            if(arm == 255){
                printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
                printf("Armários completamente ocupados\n");
                break;
            }
            do{
                escolha = (char)pow(2, rand() % 8);
                (arm & escolha) ? escolha = 10 : (arm = arm | escolha);
            }while(escolha == 10);
            escolha = 1;
            break;
        case 2:
            printf("<----------------------------->\n");
            printf("Escolha um armário para ocupar: ");scanf("%d", &escolha);
            escolha = (char)pow(2, escolha);
            (arm & escolha) ? (arm = arm & ~escolha) : printf("###########################\nArmário já está liberado!\n");
            escolha = 2;
            break;
        }

    }while(escolha != 3);
    printf("FIM DO PROGRAMA :)\n");

    return 0;
}
