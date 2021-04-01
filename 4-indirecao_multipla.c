#include <stdlib.h>
#include <conio.h>
int main(void)
{
int **pt2; /*ponteiro para ponteiro do tipo inteiro*/
int *pt1; /*ponteiro para o tipo inteiro*/
int x = 10;

pt2 = &pt1; //armazena endere�o de pt1
pt1 = &x;  // armazena endere�o de x


*pt1 = 30;  //altera conte�do de x
**pt2 = 50; //altera conte�do de x indiretamente

printf("O valor de x e: %d ou %d ou %d\n",x,*pt1, **pt2);
printf("O endereco de x e: %d ou %d ou %d\n",*pt2, pt1, &x);
printf("O valor de pt1 e: %d ou %d ou %d\n",*pt2, pt1,&x);
printf("O endereco de pt1 e: %d ou %d\n",pt2, &pt1);
printf("O valor de pt2 e: %d ou %d \n",pt2,&pt1);
printf("O endereco de pt2 e: %d \n",&pt2);


getch();
return(0);
}



/* Sendo:
&pt2: Endere�o do ponteiro �pt2�;
&pt1: Endere�o do ponteiro �pt1�;
pt2: Conte�do de �pt2�, ou seja, o endere�o de �pt1�, que foi recebido atrav�s do comando pt2 = &pt1;

pt1: Conte�do de �pt1�, ou seja, o endere�o de �x�, que foi recebido atrav�s do comando pt1 = &x;

*pt2: Conte�do do endere�o apontado, ou seja, o conte�do de �pt1�.
*pt1: Conte�do do endere�o apontado, ou seja, o conte�do de �x�.
**pt2: Acessa o conte�do do endere�o armazenado no ponteiro que � referenciado por �pt2�, ou seja, acessa �x� indiretamente. */

