#include "lista.h"

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("O número máximo de elementos foi pré-definido e é 100\n");
	
	Lista *li;

	li = cria_lista();

	lista_cheia(li);

	lista_vazia(li);

	libera_lista(li);

}