#include<stdio.h>
#include<stdlib.h>


int mostrar_numeros(int pass_inicio, int pass_limite);

int main() {

	int inicio, limite;

	inicio = 1;
	limite = 21;

	mostrar_numeros(inicio, limite);


	printf("\n\n");
	system("pause");
	return 0;

}

int mostrar_numeros(int pass_inicio, int pass_limite) {
	if (pass_inicio < pass_limite) {
		printf("%d ", pass_inicio);
		mostrar_numeros(pass_inicio + 1, pass_limite);
		return 0;
	}
}