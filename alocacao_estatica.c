#include <stdio.h> 
	
static int a = 0;  // vari�vel global, aloca��o est�tica

void incrementa(void)
{
	int b=0; // vari�vel local, aloca��o autom�tica
	static int c=0; // vari�vel local, aloca��o est�tica
	
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	a++;
	b++;
	c++;
}

int main(void){ //esta outra funcao chama a fucao incrementa para cada nova itera��o, mas note que a vari�vel "b" n�o � est�tica, logo a cada nova execuca��o
	int i;      // da fun��o incrementa uma nova vari�vel "b" � criada, diferentemente de "a" e "c" que resistem at� o final do programa!
	for(i=0; i<5; i++)  //Se voc� usar o for sem as chaves, apenas a pr�xima linha depois do for ser� executada, o restante estar� fora do for.
	incrementa(); // A mesma regra � v�lida para o while, do while, if�
	system("pause");
	return(0);
		
}			
