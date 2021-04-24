// C program to illustate fgetc() function
#include <stdio.h>
 
int main ()
{
    // Abrindo o Arquivo
    FILE *fp = fopen("test.txt","r");
 
    // Retorna se n�o puder abrir o arquivo
    if (fp == NULL)
      return 0;
 
    do
    {
        // Lendoo arquivo, para cada caractere lido, ele avan�a o cursor para o pr�ximo caractere.
        char c = fgetc(fp);
 
        // Verificando pelo final do arquivo
        if (feof(fp))
            break ; //crit�rio de Parada do loop infinito
 
        printf("%c", c);
    }  while(1); //0 = False ; qualquer outra coia = True;
 
    fclose(fp);
    return(0);
}
