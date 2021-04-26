#include "lista.h"

struct lista{
	int qtd;
	struct aluno dados[MAX];
};

Lista* criar_lista(){
	Lista *li;
	li = (Lista*) malloc(sizeof(struct lista));
	if(li != NULL){
		li -> qtd = 0;
	}
	return li;
}

Lista *libera_lista(Lista* li){
	free(li);
}


int tamanho_lista(Lista *li){
	if (li == NULL){
			return -1;
			// -1 pois se fosse 0, a lista não teria nenhum ou mais de um
			// o objetivo aqui é gerar um código de erro no programa
	}
	else{
		return li->qtd;
	}
}


int lista_cheia(Lista *li){
	if (li == NULL){
		return -1;
	}
	else{
		return (li -> qtd == MAX);
	}
}


int lista_vazia(Lista *li){
	if (li == NULL){
		return -1;
	}
	else{
		return (li -> qtd == 0);
	}
}


int inserir_final(Lista *li, Alunos al){
	if(li == NULL){
		printf("\nFalha na insercao, lista invalida\n");
		return 0;
	}
	
	if(lista_cheia(li)){
		printf("\nFalha insercao, a lista esta cheia\n");
		return 0;
	}

	li -> dados[li->qtd] = al;
	li -> qtd++;
	
	printf("\nInsercao no final realizada com sucesso !!\n");
	return 1;
}


int inserir_inicio(Lista *li, Alunos al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	for (int i = li->qtd-1; i >= 0; i--){
		li -> dados[i+1] = li -> dados[i];
	}

	li -> dados[0] = al;
	li -> qtd++;

	printf("\nInsercao no inicio realizada com sucesso !!\n")
	return 1;
}