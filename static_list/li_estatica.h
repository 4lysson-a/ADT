#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct aluno{
	int matricula;
	char nome[30];
	float n1,n2,n3;	
}Aluno;

typedef struct lista Lista;

// funções disponiveis ao usuário

Lista* cria_lista();

int lista_cheia(Lista* li);

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);

int insere_lista_final(Lista* li, Aluno al);

int insere_lista_inicio(Lista* li, Aluno al);

int insere_lista_ordenada(Lista* li, Aluno al);
