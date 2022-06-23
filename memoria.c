#include "memoria.h"
#include <stdio.h>
#include <stdlib.h> // to use rand()

void usuario (struct MEMORIA *pessoa){


    printf("Digite seu Nome: " );
    fflush(stdin);
    gets(pessoa->nome);
}

void armazenaUser (struct MEMORIA *game){
    setlocale(LC_ALL, "Portuguese");
    printf("Informe uma letra entre A e Z: " );
    fflush(stdin);
    //char Ch = getch();
    //*game->letras = Ch;
    gets(game->letras);

	/* desaloco o vetor */
	free(game->letras);
}


}

