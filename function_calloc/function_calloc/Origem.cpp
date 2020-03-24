#include<stdio.h>
#include<stdlib.h>

#define QTD 4
#define SAIR exit(1)

int main() {

	int *px;
	
	px = (int*)calloc(QTD, sizeof(int));
	if (px == NULL) {
		printf("ERRO! Não tem memória suficiente.");
		SAIR;
	}

	int i;
	printf("DIGITE OS DADOS PARA O VETOR DE 4 POSICOES\n\n");
	for (i = 0; i < QTD; i++) {
		printf("Digite o valor de px[%d]: ", i);
		scanf_s("%d", &px[i]);
	}

	printf("\nMOSTRAR OS DADOS DO VETOR\n\n");
	for (i = 0; i < QTD; i++) {
		printf("O valor de px na posicao px[%d] eh: %d\n", i, px[i]);
	}

	printf("\n");
	free(px);

	system("pause");
	return 0;
}

