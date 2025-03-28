#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int i, j, tam;
    printf("Digite um nome: ");
    gets(nome);
    tam = strlen(nome);
    for (i = 0; i < tam; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", nome[j]);
        }
        printf("\n");
    }
    return 0;
}