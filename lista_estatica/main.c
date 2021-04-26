#include "lista.h"

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	printf("O número máximo de elementos foi pré-definido e é 100\n");


	Alunos dados_alunos;

		dados_alunos.matricula = 1;
		dados_alunos.n1 = 6.7;
		dados_alunos.n2 = 8.1;
		dados_alunos.n2 = 9.3;
	

	Lista *li;

	li = criar_lista();

	int x = inserir_final(li, dados_alunos);
	

	printf("\n%d",lista_vazia(li));


	libera_lista(li);

}