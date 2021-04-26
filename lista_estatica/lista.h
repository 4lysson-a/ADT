#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 100

struct aluno{
	int matricula;
	int nome[30];
	float n1,n2,n3;	
};

typedef struct lista Lista; 

typedef struct aluno Alunos;


// Implementação das funções

Lista* criar_lista();

Lista *libera_lista(Lista *li);

int inserir_final(Lista *li, Alunos al);

int inserir_inicio(Lista *li, Alunos al);


int tamanho_lista(Lista *li);

int lista_cheia(Lista *li);

int lista_vazia(Lista *li);

