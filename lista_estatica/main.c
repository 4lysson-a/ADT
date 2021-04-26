#include "lista.h"

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	printf("O número máximo de elementos foi pré-definido e é 100\n");

	Alunos dados_alunos[10];{
		dados_alunos[0].matricula = 1;
		dados_alunos[0].n1 = 6.7;
		dados_alunos[0].n2 = 8.1;
		dados_alunos[0].n2 = 9.3;
		strcpy(dados_alunos[0].nome, "Alysson");
	}


	Lista *li;

	li = criar_lista();

	int x = inserir_final(li, dados_alunos[0]);
	
	printf("\n%d",lista_vazia(li));

	libera_lista(li);

}