/*nome: Gustavo Mirabal Czarnotta
RA: 2678098 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct DVD{
    char titulo[50];
    char genero[50];
    int duracao;
    char prateleira[50];
};

typedef struct DVD dvd;

int main(){
    setlocale(LC_ALL, "Portuguese");
    dvd d1;

    printf("\n Cadastro de DVD\n");
    printf("\nDigite o titulo do DVD: ");
    scanf("%s", d1.titulo);

    printf("Digite o genero do DVD: ");
    scanf("%s", d1.genero);

    printf("Digite a duracao do DVD (em minutos): ");
    scanf("%d", &d1.duracao);

    printf("Digite a prateleira do DVD: ");
    scanf("%s", d1.prateleira);

    printf("\n************************************************\n");
    printf("\nDados do DVD:\n");
    printf("\nTitulo: %s\n", d1.titulo);
    printf("Genero: %s\n", d1.genero);
    printf("Duracao: %d minutos\n", d1.duracao);
    printf("Prateleira: %s\n", d1.prateleira);
    printf("\n************************************************\n");

    
    return 0;
}