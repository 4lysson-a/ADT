#include "lista.h"

struct lista{
	int qtd;
	struct aluno dados[MAX];
};

Lista* create_list(){
	Lista *li;
	li = (Lista*) malloc(sizeof(struct lista));
	if(li != NULL){
		li -> qtd = 0;
	}
	return li;
}

Lista *free_list(Lista* li){
	free(li);
}



int size_list(Lista *li){
	if (li == NULL){
			return -1;
			// -1 pois se fosse 0, a lista não teria nenhum ou mais de um
			// o objetivo aqui é gerar um código de erro no programa
	}
	else{
		return li->qtd;
	}
}


int list_full(Lista *li){
	if (li == NULL){
		return -1;
	}
	else{
		return (li -> qtd == MAX);
	}
}


int list_empty(Lista *li){
	if (li == NULL){
		return -1;
	}
	else{
		return (li -> qtd == 0);
	}
}

