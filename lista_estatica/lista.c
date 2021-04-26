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

	printf("\nInsercao no inicio realizada com sucesso !!\n");
	return 1;
}

int inserir_ordenado(Lista *li, Alunos al){
	if(li == NULL) return 0;
	if(lista_cheia(li)) return 0;
	
	int k,i = 0;

	while(i < li->qtd && li->dados[i].matricula < al.matricula)
		i++;

	for (k = li->qtd-1; k > 0; k--){
			li -> dados[k+1] = li -> dados[k];
		}
	
	li -> dados[i] = al;
	li -> qtd++;
	
	return 1;		

}



int rm_final(Lista *li){
	if(li == NULL) return 0;
	if(li->qtd == 0) return 0;

	li->qtd--;
	return 1;
}

int rm_inicio(Lista *li){
	if(li == NULL) return 0;
	if(li->qtd == 0) return 0;

	for (int k = 0; k < li->qtd-1; k++){
		li -> dados[k] = li->dados[k+1];
	}
	li->qtd--;
	return 1;

}


int rm_ordenado(Lista *li, int id){
	if(li == NULL) return 0;
	if(li->qtd == 0) return 0;
	int k,i = 0;

	while(i<li->qtd || li->dados[i].matricula != id){
		i++;
	}

	if( i == li -> qtd ){
		return 0;
	}

	for (int k = 0; k < li->qtd-1; k++){
		li->dados[k] = li->dados[k+1];
	}
	
	li->qtd--;

	return 1;

}
