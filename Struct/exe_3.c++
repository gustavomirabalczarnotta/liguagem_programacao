/*nome: Gustavo Mirabal Czarnotta
RA: 2678098
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Monstro{
    char nome[50];
    int vida;
    int ataque;
    int defesa;
};

typedef struct Monstro monstro;

int main(){
    setlocale(LC_ALL, "Portuguese");
    monstro m1;

    printf("\n Cadastro de Monstro de Bolso");

    printf("\nDigite o nome do monstro: ");
    scanf("%s", m1.nome);

    printf("Digite a vida do monstro: ");
    scanf("%d", &m1.vida);

    printf("Digite o ataque do monstro: ");
    scanf("%d", &m1.ataque);

    printf("Digite a defesa do monstro: "); 
    scanf("%d", &m1.defesa);

    printf("\n************************************************\n");
    printf("\nDados do monstro:\n");
    printf("\nNome: %s\n", m1.nome);
    printf("Vida: %d\n", m1.vida);
    printf("Ataque: %d\n", m1.ataque);
    printf("Defesa: %d\n", m1.defesa);
    printf("\n************************************************\n");

    return 0;
}