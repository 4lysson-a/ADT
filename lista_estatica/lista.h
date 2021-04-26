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

Lista* create_list();

Lista *free_list(Lista *li);

int insert_final(Lista *li, Alunos al);

int size_list(Lista *li);

int list_full(Lista *li);

int list_empty(Lista *li);

