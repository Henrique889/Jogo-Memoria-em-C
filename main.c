#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha.h"

char gerarLetra();
void apresenta(char vetor[]);

int main()
{
  char letra1, letra2;
    struct pilha *topo = NULL;
    int x, fimJogo=1, cont=0;
    char user,cpu;
    Pilha *p1 = (Pilha *) malloc(sizeof(Pilha));

    do{
        printf("Digite uma letra de A a Z: ");
        scanf("%s",&letra1);

        letra2 = gerarLetra();
        printf("\nLetra selecionada pelo programa: %c", letra2 );


        printf("\nVocê tem 3 segundos para memorizar!");
        sleep(4);

        create_stack(p1);
        push(p1, letra1);
        push(p1, letra2);
        system("cls");

        char vetorDigitado[100];
        printf("\nInforme a sequencia de letras até o momento iniciando pela ultima letra informada até a primeira: \n");
        scanf("%s",&vetorDigitado);

        fimJogo = consulta(p1,vetorDigitado);
        cont++;
    }while(fimJogo != 0);

    printf("\nVocê errou a sequencia!! A sua pontuação foi de %d\n",(cont-1)*10);
    return 0;
}

char gerarLetra(){
    srand(time(NULL));
    char g[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    return g[rand()%26];

}

