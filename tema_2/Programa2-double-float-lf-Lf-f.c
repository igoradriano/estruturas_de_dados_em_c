//Programa 2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  float f;
  double d;
  double e;
  
  printf("Digite um float: ");
  scanf("%f",&f);
  printf("O float digitado foi %.20f\n",f);
  printf("O float digitado foi %.20lf\n",f);	
  printf("O float digitado foi %lf\n",f);

  printf("Digite um double: ");
  scanf("%lf",&d);
  printf("O double digitado foi %.20lf\n",d);	
  printf("O double digitado foi %lf\n",d);	
  printf("O double digitado foi %.20f\n",d);	
  printf("O double digitado foi %f\n",d);
  
  
  e = 3.14;
  printf("O double digitado foi e %f\n",e);	

  return(0);
}

//l: O argumento � interpretado como um int longo ou um int longo sem sinal para especificadores de n�mero inteiro (i, d, o, u, x e X)
// e como um caractere largo ou string de caracteres largos para os especificadores c e s.
//L: O argumento � interpretado como um duplo longo (aplica-se apenas a especificadores de ponto flutuante: e, E, f, ge G).
