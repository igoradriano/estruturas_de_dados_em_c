//Programa 1
#include <stdio.h>  //Fun��es e E/S padr�o nos dispositivos stdin, stdout e files.
#include <stdlib.h> //Fun��es de E/S padr�o nos ispositivos stdin, stdout e files. Fun��es para convers�o de n�meros em cadeias.
#include <ctype.h> //Fun��es para tratamento de caracteres
#include <time.h>  //Fun��es de Manipula��o de hor�rios e datas
#include <dos.h> //Fun��o de acesso as INT's da BIOS e DOS do MS-DOS
#include <string.h>  //Fun��es de manipula��o de strings (TC)
#include <math.h> // Fun��es matem�tica em geral

int main(int argc, char *argv[]){  //argumentos de linha de comando, argc -> conta o total de caracteres digitados no terminal; argv -> guarda em array todos os carateres digitados
  // INT - INT - INT -INT - INT - INT - INT - INT -INT - INT - INT - INT - INT -INT - INT - INT - INT - INT -INT - INT - INT - INT - INT -INT - INT
  // Caratere d - Numero decimal
  int salario;
  printf("d -> :");
  scanf("%d", &salario);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", salario);
  printf("\n i = %i Imprime Numero decimal", salario); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", salario); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", salario); 
  printf("\n u = %u Numero decimal sem sinal.", salario); 
  printf("\n c = %c unico caractere.", salario); 
  //printf("s -> %s\n Imprime caracteres da string at� um �\ o� ou o n�mero de caracteres dado pela precis�o.", salario); 
  printf("\n f -> %f [-] m.dddddd, onde o n�mero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", salario); 
  printf("\n p -> %p Ponteiro.", salario); 
  
  
    // Caratere i - Numero decimal
  printf("\n");	
  printf("\n i -> :");
  scanf("%i", &salario);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", salario);
  printf("\n i = %i Imprime Numero decimal", salario); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", salario); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", salario); 
  printf("\n u = %u Numero decimal sem sinal.", salario); 
  printf("\n c = %c unico caractere.", salario); 
  printf("\n f -> %f [-] m.dddddd, onde o n�mero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", salario); 
  printf("\n p -> %p Ponteiro.", salario); 

  
      // Caratere o - Numero octal sem sinal (sem zero a esquerda)
  printf("\n");	
  printf("\n o -> :");
  scanf("%o", &salario);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", salario);
  printf("\n i = %i Imprime Numero decimal", salario); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", salario); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", salario); 
  printf("\n u = %u Numero decimal sem sinal.", salario); 
  printf("\n c = %c unico caractere.", salario); 
  printf("\n f -> %f [-] m.dddddd, onde o n�mero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", salario); 
  printf("\n p -> %p Ponteiro.", salario);
  
  // Caratere x,X - Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.
  printf("\n");	
  printf("\n x -> :");
  scanf("%x", &salario);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", salario);
  printf("\n i = %i Imprime Numero decimal", salario); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", salario); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", salario); 
  printf("\n u = %u Numero decimal sem sinal.", salario); 
  printf("\n c = %c unico caractere.", salario); 
  printf("\n f -> %f [-] m.dddddd, onde o n�mero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", salario); 
  printf("\n p -> %p Ponteiro.", salario);
  
   // Caratere u - N�mero decimal sem sinal
  printf("\n");	
  printf("\n u -> :");
  scanf("%u", &salario);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", salario);
  printf("\n i = %i Imprime Numero decimal", salario); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", salario); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", salario); 
  printf("\n u = %u Numero decimal sem sinal.", salario); 
  printf("\n c = %c unico caractere.", salario); 
  printf("\n f -> %f [-] m.dddddd, onde o n�mero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", salario); 
  printf("\n p -> %p Ponteiro.", salario);
  
  
   // Caratere c - �nico caractere
  printf("\n");	
  printf("\n c -> :");
  scanf("%c", &salario);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", salario);
  printf("\n i = %i Imprime Numero decimal", salario); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", salario); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", salario); 
  printf("\n u = %u Numero decimal sem sinal.", salario); 
  printf("\n c = %c unico caractere.", salario); 
  printf("\n f -> %f [-] m.dddddd, onde o n�mero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", salario); 
  printf("\n p -> %p Ponteiro.", salario);
  
  //-------------------------------------------------------------------------------------------------------------------------------------------------
  // DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE - DOUBLE -DOUBLE - DOUBLE 
  // Caratere f - [-] m.dddddd, onde o n�mero de d's � dado pela precis�o (padr�o 6)
  double nota;
  printf("\n");	
  printf("\n f -> :");
  scanf("%f", &nota);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", nota);
  printf("\n i = %i Imprime Numero decimal", nota); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", nota); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", nota); 
  printf("\n u = %u Numero decimal sem sinal.", nota); 
  printf("\n c = %c unico caractere.", nota); 
  printf("\n f -> %f [-] m.dddddd, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", nota); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", nota); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", nota); 
  printf("\n p -> %p Ponteiro.", nota);
  
   // Caratere e - [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o n�mero de d's � dado pela precis�o (padr�o 6)
  printf("\n");	
  printf("\n e -> :");
  scanf("%e", &nota);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", nota);
  printf("\n i = %i Imprime Numero decimal", nota); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", nota); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", nota); 
  printf("\n u = %u Numero decimal sem sinal.", nota); 
  printf("\n c = %c unico caractere.", nota); 
  printf("\n f -> %f [-] m.dddddd, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", nota); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", nota); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", nota); 
  printf("\n p -> %p Ponteiro.", nota);
  
   // Caratere g - Use % e ou % E se o expoente for menor que = 4 ou maior ou igual � precis�o; caso contr�rio, use %f.
  printf("\n");	
  printf("\n g -> :");
  scanf("%g", &nota);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", nota);
  printf("\n i = %i Imprime Numero decimal", nota); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", nota); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", nota); 
  printf("\n u = %u Numero decimal sem sinal.", nota); 
  printf("\n c = %c unico caractere.", nota); 
  printf("\n f -> %f [-] m.dddddd, onde o numero de d's eh dado pela precisao (padrao 6).", salario); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", nota); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", nota); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", nota); 
  printf("\n p -> %p Ponteiro.", nota);
   //-------------------------------------------------------------------------------------------------------------------------------------------------
  // VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * - VOID * 
  // Caratere p - Ponteiro
  void *memoria;
  printf("\n");	
  printf("\n p -> :");
  scanf("%p", &memoria);
  fflush(stdin);
  printf("\n d = %d Imprime Numero decimal", memoria);
  printf("\n i = %i Imprime Numero decimal", memoria); 
  printf("\n o = %o Imprime o numero octal sem sinal (sem zero a esquerda).", memoria); 
  printf("\n x = %x Numero hexadecimal sem sinal (sem um 0x ou 0X � esquerda), usando abcdef ou ABCDEF para 10,�, 15.", memoria); 
  printf("\n u = %u Numero decimal sem sinal.", memoria); 
  printf("\n c = %c unico caractere.", memoria); 
  printf("\n f -> %f [-] m.dddddd, onde o numero de d's eh dado pela precisao (padrao 6).", memoria); 
  printf("\n e -> %e [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", memoria); 
  printf("\n g -> %g [-] m.dddddde+/-xx or [-] m.ddddddE+/-xx, onde o numero de d's eh dado pela precisao (padrao 6).", memoria); 
  printf("\n G -> %G Use % e ou % E se o expoente for menor que = 4 ou maior ou igual a precisao; caso contrario, use %f.", memoria); 
  printf("\n p -> %p Ponteiro.", memoria);
  //------------------------------------------------------------------------------------------------------------------------------------------
  
  // GETS() -> equivale a fun��o puts() no sentido inverso. Para entrada de valores
  char alguma[200];
  printf("\nDigite para o gets: ");
  fflush(stdin);
  gets(alguma);
  // PUTS() -> equivalente ao comando printf("%s\n", string). A String ser� adicionada com um caractere '\n'.
  puts(alguma);
  printf("%s",alguma);
  // GETCHAR() -> equivale a fun��o putchar() no sentido inverso. Para entrada de valores
  int c;
  printf("\nDigite para o getchar: ");
  fflush(stdin);
  c = getchar();
   // PUTCHAR() -> equivalente ao comando printf("%c", caractere). Envia um �nico caractere pela sa�da padr�o
  putchar(c);
  printf("\n%c",c);
  
  
  // CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR- CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR - CHAR
  // Caratere s - Imprime caracteres da string at� um �\ o� ou o n�mero de caracteres dado pela precis�o
  char nome[200];
  printf("\n");	
  printf("\n s -> :");
  fflush(stdin);
  //fgets(nome, 50, stdin);
  scanf("%s%*c", &nome);
  printf("\n s -> %s Imprime caracteres da string ate um �\ o� ou o numero de caracteres dado pela precisao.", nome); 
  

  return(0);
}

