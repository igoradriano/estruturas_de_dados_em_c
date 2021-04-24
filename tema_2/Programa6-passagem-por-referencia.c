//Programa 6
#include <stdio.h>
//Pasagem por Refer�ncia - O original � alterado
void troca(int *x, int *y) {
	int aux;
	if(x != NULL && y != NULL){ //se endere�os forem v�lidos
		aux = *x;  // se usar s x ele coloca o endere�o de x em aux                  //faz a troca
		*x = *y; //se usar so y ele coloca o endere�o no ponteiro x
		*y = aux; // usando *x e *y passamos o conteudo do endere�o apontado
		printf("aux: %d\n", aux);
		printf("aux: %d\n", &aux);
		printf("x: %d\n", x);
		printf("y: %d\n", y);
	} 
}

int main(){
	// Prints de  Passagem por Refer�ncia
	int v1=5, v2=10;
	printf("v1 = %d  e v2 = %d\n", v1, v2);
	printf("end v1: %d - end v2: %d\n", &v1, &v2);
	troca(&v1, &v2);
	printf("end v1: %d - end v2: %d\n", &v1, &v2);
	printf("v1 = %d  e v2 = %d\n", v1, v2);
			
}

