#include <stdlib.h>
#include <conio.h>
int main(void)
{
int **pt2; /*ponteiro para ponteiro do tipo inteiro*/
int *pt1; /*ponteiro para o tipo inteiro*/
int x = 10;

pt2 = &pt1; //armazena endereço de pt1
pt1 = &x;  // armazena endereço de x


*pt1 = 30;  //altera conteúdo de x
**pt2 = 50; //altera conteúdo de x indiretamente

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
&pt2: Endereço do ponteiro ‘pt2’;
&pt1: Endereço do ponteiro ‘pt1’;
pt2: Conteúdo de ‘pt2’, ou seja, o endereço de ‘pt1’, que foi recebido através do comando pt2 = &pt1;

pt1: Conteúdo de ‘pt1’, ou seja, o endereço de ‘x’, que foi recebido através do comando pt1 = &x;

*pt2: Conteúdo do endereço apontado, ou seja, o conteúdo de ‘pt1’.
*pt1: Conteúdo do endereço apontado, ou seja, o conteúdo de ‘x’.
**pt2: Acessa o conteúdo do endereço armazenado no ponteiro que é referenciado por ‘pt2’, ou seja, acessa ‘x’ indiretamente. */

