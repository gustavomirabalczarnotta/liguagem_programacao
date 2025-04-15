/*nome: Gustavo Mirabal Czarnotta
RA: 2678098 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto{
    int codigo;
    float preco;
    char descricao[100];
};

typedef struct Produto produto;

int main(){
    produto p[5];
    int i;

    printf("\n Cadastro de produtos\n");

    for(i=0; i<5; i++){
        printf("\nDigite o codigo do produto: ");
        scanf("%d", &p[i].codigo);

        printf("Digite o preco do produto: ");
        scanf("%f", &p[i].preco);

        printf("Digite a descricao do produto: ");
        scanf("  %s", p[i].descricao);

        printf("\n\n");
    }

    printf("\n************************************************\n");
    printf("\nDados dos produtos:\n");
    for(i=0; i<5; i++){
        printf("\nCodigo: %d\n", p[i].codigo);
        printf("Preco: %.2f\n", p[i].preco);
        printf("Descricao: %s\n", p[i].descricao);
    }
    printf("\n************************************************\n");

    return 0;
}