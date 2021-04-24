#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
 
typedef struct {
    int codigo;
    char nome[200];
    Data datNasc;
} Aluno;
 
Aluno aluno[5];
int i=0;

 
int main() {
    setlocale(LC_ALL,"portuguese");
    for(i=0; i<5; i++) {
        aluno[i].codigo = 0;
        strcpy(aluno[i].nome, "NULL");
        aluno[i].datNasc.dia = 0;
        aluno[i].datNasc.mes = 0;
        aluno[i].datNasc.ano = 0;
    }
 
    for(i=0; i<5; i++) {
        printf(" \n ======================================================================");
        printf(" \n O código do aluno é: %d ", aluno[i].codigo);
        printf(" \n O nome do aluno é: %s ", aluno[i].nome);
        printf(" \n A data de nascimento do aluno é: %d / %d / %d ", 
             aluno[i].datNasc.dia, aluno[i].datNasc.mes, 
             aluno[i].datNasc.ano);
        printf(" \n ");
    }
 
    for(i=0; i<5; i++) {
        printf(" \n ======================================================================");
        printf(" \n ======================================================================");
        printf(" \n Digite o código do aluno: ");
        scanf("%d%*c", &aluno[i].codigo);
        printf(" \n Digite o nome do aluno: ");
        //fflush(stdin);
        //fgets(aluno[i].nome, 50, stdin);
        scanf("%s%*c", &aluno[i].nome);
        printf(" \n Digite o dia do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.dia);
        printf(" \n Digite o mês do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.mes);
        printf(" \n Digite o ano do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.ano);
    }
 
    for(i=0; i<5; i++) {
        printf(" \n ======================================================================");
        printf(" \n O código do aluno é: %d ", aluno[i].codigo);
        printf(" \n O nome do aluno é: %s ", aluno[i].nome);
        printf(" \n A data de nascimento do aluno é: %d / %d / %d ",
            aluno[i].datNasc.dia, aluno[i].datNasc.mes,
            aluno[i].datNasc.ano);
        printf(" \n ");
    }
    
    
    
    //TESTE PARA MOSTRAR QUE MESMO INSERINDO A DATA COMPLETA NO PRIMEIRO ELEMENTO ELE PEGA TODAS AS DEMAIS INFORMACOES DOS OUTROS CAMPOS DA DATA
    printf(" \n O dia do nascimento do primeiro aluno é: %d ", aluno[0].datNasc.dia);
    printf(" \n ");
    system("pause");
    return(0);
    
}

//OBS: da forma que este programa foi escrito, os 2 primeiros dados a serem inseridos sao do tipo char, E com a utilização do %*c conseguimos inserir os dados da
//seguinte forma:    codigo/nome e os 2 campos de char serao preenchidos
//Ja os 3 ultimos campos do de data do tipo inteiro, se utilizarmos 05/10/1994 para o primeiro campo referente ao dia, ele ja pegada o restante dos dados para
//o demais campos 
