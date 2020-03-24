#include<stdio.h>
#include<stdlib.h>

#define comparacao(x,y) x>y?x:y

int main() {
	int a = 12;
	int b = 5;
	int maior = comparacao(a, b);
	printf("O maior numero eh: %d\n", maior);

	system("pause");
	return 0;
}