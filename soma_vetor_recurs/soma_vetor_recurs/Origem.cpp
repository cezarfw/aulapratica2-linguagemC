#include<stdio.h>
#include<stdlib.h>

#define NVETOR 5

int somaVetor(int vetor[], int tamanho);

int main() {

	int vetor[NVETOR] = { 22, 5, 11, 3, 6 };
	int i, soma = 0;
	int resultado = somaVetor(vetor, NVETOR);

	printf("IMPRESSAO COM A FUNCAO RECURSIVA\n");
	printf("Soma = %d\n", resultado);

	printf("\n");

	system("pause");
	return 0;

}

int somaVetor(int vetor[], int tamanho) {
	if (tamanho == 1) 
		return vetor[0];
	else	
		return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);
}
