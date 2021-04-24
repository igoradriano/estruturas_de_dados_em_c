#include <stdio.h>
//Pasagem por Valor - Nada acontece com o Original
void trocaPassagemPorValor(int x, int y) {
	int aux;
	aux = x;
	x = y;
	y = aux;
	printf("aux: %d\n", aux);
		printf("aux: %d\n", &aux);
		printf("x: %d\n", x);
		printf("y: %d\n", y);
}

int main(){

	// Prints de Passagem por valor
	int v3=5, v4=10;
	printf("Antes da troca: v3=%d e v4=%d\n", v3, v4);
	printf("end v3: %d - end v4: %d\n", &v3, &v4);
	trocaPassagemPorValor(v3,v4);
	printf("end v3: %d - end v4: %d\n", &v3, &v4);
	printf("Depois da troca: v3=%d e v4=%d\n", v3, v4);
	
}


