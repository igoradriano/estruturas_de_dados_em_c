#include <stdio.h>

#include <stdlib.h>

int main(){
	int *p, i;   // "*" indica que p � um ponteiro que aponta para o tipo inteiro
	
	p = malloc(10*sizeof(int));  //malloc -> aloca espa�o de mem�ria e retorna o ponteiro para o primeiro byte alocado. Se n�o for poss�vel alocar a fun��o retorna
	//"NULL". sizeof() retorna a quantidade de bytes necess�rios para alocar um tipo de vari�vel, neste caso do tipo inteiro. Para o tipo int esse espa�o � de 4 bytes.
	//Multiplica 10 --> quer dizer que aloca 10 vezes o tamanho do tipo int
	if (p == NULL){  //verifica se n�o conseguiu alocar
		printf("Espa�o insuficiente!");
		exit(1);
	}else{ //caso consiga alocar
		printf("Primeiros 10 numeros.\n");
		for (i=0; i<10; i++){  
			p[i] = i+10; //+ 10 s� para identificar esse trecho
			printf("%d-%d\n",i,p[i]); //%d(referencia ao "i")-%d(referencia ao p[i])
		}
		
		p = realloc(p,20*sizeof(int));  //realloc -> redimensiona a �rea previamente alocada, apontado por "p" para um novo tamanho, neste caso 20 vezes o tamanho do tipo int.
		printf("Realocando para mais 10 numeros. \n");
		for (i=10; i<20; i++){ //come�a de onde parou no trecho anterior
			p[i] = i+20;  //+20 para identificar esse outro trecho
			printf("%d-%d\n",i,p[i]);//%d(referencia ao "i")-%d(referencia ao p[i])
		}
		
		printf("Todos os 20 numeros alocados \n");
		for (i=0;i<20;i++){  //neste trecho come�a do come�o e vai at� o final do tamanho do ponteiro
			printf("%d-%d\n",i,p[i]);
		free(p);  //liberando o ponteiro
		}
		system("pause");
		return(0);
	}
	
}

