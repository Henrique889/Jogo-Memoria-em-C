#ifndef MEMORIA_H_INCLUDED
#define MEMORIA_H_INCLUDED
#include <stdio.h>
#include <locale.h>

struct MEMORIA {
    char nome[30];
    char vetor[1];
    char letras[26];
};


void usuario (struct MEMORIA *pessoa);
void armazenaUser (struct MEMORIA *game);

#endif // MEMORIA_H_INCLUDED
