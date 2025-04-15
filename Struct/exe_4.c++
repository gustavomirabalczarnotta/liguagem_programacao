/*nome: Gustavo Mirabal Czarnotta
RA: 2678098*/

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

struct Treinador{
    char nome[50];
    int idade;
    int insigias;
};

typedef struct Monstro Monstro;
typedef struct Treinador Treinador;

int main(){
    setlocale(LC_ALL, "Portugeuse");
    Monstro m1;
    Treinador t1;

    printf("\n Cadastro de Monstro de Bolso\n");
    printf("\nDigite o nome do monstro: ");
    scanf("%s", m1.nome);

    printf("Digite a vida do monstro: ");
    scanf("%d", &m1.vida);

    printf("Digite o ataque do monstro: ");
    scanf("%d", &m1.ataque);

    printf("Digite a defesa do monstro: ");
    scanf("%d", &m1.defesa);

    printf("\ncadastro de Treinador\n");
    printf("\nDigite o nome do treinador: ");
    scanf("%s", t1.nome);

    printf("Digite a idade do treinador: ");
    scanf("%d", &t1.idade);

    printf("Digite o numero de insigias do treinador: ");
    scanf("%d", &t1.insigias);

    printf("\n************************************************\n");
    printf("\nDados do monstro:\n");
    printf("\nNome: %s\n", m1.nome);
    printf("Vida: %d\n", m1.vida);
    printf("Ataque: %d\n", m1.ataque);
    printf("Defesa: %d\n", m1.defesa);
    printf("\n************************************************\n");

    printf("\n************************************************\n");
    printf("\nDados do Treinador\n");
    printf("\nNome: %s\n", t1.nome);
    printf("Idade: %d\n", t1.idade);
    printf("Insigias: %d\n", t1.insigias);
    printf("\n************************************************\n");

}