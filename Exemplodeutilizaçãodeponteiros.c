#include <stdio.h>
#include <conio.h>
int main(void)
{
//v_num � a vari�vel que
//ser� apontada pelo ponteiro
int v_num = 10;

//declara��o de vari�vel ponteiro
int *ptr;


//atribuindo o endere�o da vari�vel v_num ao ponteiro
ptr = &v_num;

printf("Utilizando ponteiros\n\n");
printf("Conte�do da vari�vel v_num: %d\n", v_num);
printf("Endere�o da vari�vel v_num: %x \n", &v_num);
printf("Conte�do da vari�vel ponteiro ptr: %x", ptr);

getch();
return(0);
}
