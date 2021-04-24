#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.txt.");
        return 1;
    }

    int caractere = getc(arquivo);
    while(caractere != EOF){
	
        if(caractere == ' ') {
            /* substitui todo espaço por uma nova linha */
            ungetc('\n', arquivo);
        } else {
            ungetc(caractere, arquivo);
        }

        //putchar(getchar(arquivo));
        //caractere = getc(arquivo);
    }
    fclose(arquivo);

    return 0;
}
