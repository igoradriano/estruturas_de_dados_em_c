// C program to illustate fgetc() function
#include <stdio.h>
 
int main ()
{
    // Abrindo o Arquivo
    FILE *fp = fopen("test.txt","r");
 
    // Retorna se não puder abrir o arquivo
    if (fp == NULL)
      return 0;
 
    do
    {
        // Lendoo arquivo, para cada caractere lido, ele avança o cursor para o próximo caractere.
        char c = fgetc(fp);
 
        // Verificando pelo final do arquivo
        if (feof(fp))
            break ; //critério de Parada do loop infinito
 
        printf("%c", c);
    }  while(1); //0 = False ; qualquer outra coia = True;
 
    fclose(fp);
    return(0);
}
