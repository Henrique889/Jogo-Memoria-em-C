#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node {
	char info;
	struct node* next;
} No;

typedef struct pilha {
	No *topo;
} Pilha;

void create_stack (Pilha *p);
void push(Pilha *p, char elem);
double pop();
int empty (Pilha *p);
int consulta (Pilha *p, char *vetor);
void free_stack (Pilha *p);

#endif // PILHA_H_INCLUDED
