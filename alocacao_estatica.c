#include <stdio.h> 
	
static int a = 0;  // variável global, alocação estática

void incrementa(void)
{
	int b=0; // variável local, alocação automática
	static int c=0; // variável local, alocação estática
	
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	a++;
	b++;
	c++;
}

int main(void){ //esta outra funcao chama a fucao incrementa para cada nova iteração, mas note que a variável "b" não é estática, logo a cada nova execucação
	int i;      // da função incrementa uma nova variável "b" é criada, diferentemente de "a" e "c" que resistem até o final do programa!
	for(i=0; i<5; i++)  //Se você usar o for sem as chaves, apenas a próxima linha depois do for será executada, o restante estará fora do for.
	incrementa(); // A mesma regra é válida para o while, do while, if…
	system("pause");
	return(0);
		
}			
