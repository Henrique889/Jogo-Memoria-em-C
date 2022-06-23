#include "pilha.h"
#include <string.h>

void create_stack (Pilha *p) {
	p->topo = NULL;
	return p;
}

void push
(Pilha *p, char elem) {
	No *n = (No*)malloc(sizeof(No));
	n->info = elem;
	n->next = p->topo;
	p->topo = n;
}

double pop(){
    Pilha *p;
	if (p->topo == NULL) { exit(1); }
	No *n = p->topo;
	char elem = n->info;
	p->topo = n->next;
	free(n);
	return elem;
}

int empty (Pilha *p) {
	return (p->topo == NULL);
}

int consulta (Pilha* p, char *vetor) {
    int tam, cont=0;
	No *Aux = p->topo;
    tam = strlen(vetor);
    while (Aux != NULL)
    {

        char l = toupper(Aux->info);
        char vet = toupper(vetor[cont]);wh
        if(l != vet){
            return 0;
        }
        cont++;
        Aux = Aux->next;
    }
    return 1;
}

void free_stack (Pilha *p) {
	No *n = p->topo;
	while (n != NULL) {
		No *temp = n->next;
		free(n);
		n = temp;
	}
	free (p);
}
