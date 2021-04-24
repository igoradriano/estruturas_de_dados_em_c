#include <stdio.h>
int main(){
		/* Declaramos as vari�veis que ser�o utilizadas */
		char arquivo[100];
		char texto[100];
		int caractere;
		int contagem = 0;
		
		/* Declaramos um ponteiro(link para o endere�o da mem�ria) para o arquivo de nome: 'pFile'*/
		FILE * pFile;
		
		/* Escrevemos na tela a pergunta para o arquivo e/ou caminho do arquivo */
		printf("Informe o arquivo(COM CAMINHO) que voc� deseja escrever: \n");
		
		/* Gravamos o que o usu�rio digitar (caminho/arquivo)*/
		scanf("%s", &arquivo);
		
		/* Esta � a fun��o de abertura de arquivos. Com modo 'w'(Abrir um arquivo texto para grava��o. Se o arquivo n�o existir, ele ser� criado. 
			Se j� existir, o conte�do anterior ser� destru�do.) */
		pFile = fopen(arquivo , "w");
		
		/* Se o arquivo for n�o-vazio */
		if(pFile!=NULL){
		
			/* Escrevemos na tela a pergunta para o que deseja ler no arquivo (ESPA�OS EM BRANCO FINALIZAR� o texto) */
			printf("Digite o que voc� deseja p�r no arquivo(SEM ESPA�OS): \n");
			
			/* Gravamos o que o usu�rio digitar e guardamos na vari�vel 'texto' */
			scanf("%s", &texto);
			
			/*Escreve uma string(da vari�vel 'texto') num arquivo. */
			fputs(texto, pFile);
		
			/* Quando acabamos de usar um arquivo que abrimos, devemos fech�-lo. Para tanto usa-se a fun��o fclose() */
			fclose(pFile);		
		} 
		
	// SEGUNDA PARTE ------------------------------------
	
	pFile = fopen( "arquivo2.txt" , "w" );
  
    //Se o arquivo for n�o-vazio 
    if(pFile!=NULL){
  
	    // Escreve uma string(da vari�vel 'texto') num arquivo. 
	    fputs( "fopen exemplo - Neste cado podemos inserir diretamente pelo c�digo o que queremos inserir no arquivo" ,pFile); 
	    
	    fclose(pFile);
    } 
    
	return 0; 
}
