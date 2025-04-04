#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*Faça um algoritmo que tenha um registro (estrutura) de monstro de bolso (como do exercício anterior) e um registro (estrutura) de treinador. Este último deve ter os campos nome, idade e número de insígnias. O usuário deve digitar os valores para os campos de um monstrinho e os valores dos campos de um treinador. Em seguida, o algoritmo deve apresentar os valores de ambos na tela*/


    typedef struct {
        char nome[20];
        char tipo[20];
        int nivel;
    } Monstro;

    typedef struct{
        char nome[20];
        int idade;
        int insignias;
    }Treinador;

    Monstro monstro;
    Treinador treinador;

    // solicita os dados do monstro
    printf("Digite o nome do monstro: ");
    scanf("%s", monstro.nome);

    printf("Digite o tipo do monsto: ");
    scanf("%s", monstro.tipo);

    printf("Digite o nivel do Monstro: ");
    scanf("%d", &monstro.nivel);

    // solicita os dados do treinador
    printf("Digite o nome do treinador: "); 
    scanf("%s", treinador.nome);

    printf("Digite a idade do treinador: ");
    scanf("%d", &treinador.idade);

    printf("Digite o numero de insignias do treinador: ");
    scanf("%d", &treinador.insignias);

    // apresenta os dados do monstro e do treinador
    printf("os dados dos monstros sao:\n");
    printf("nome: %s\n", monstro.nome);
    printf("tipo: %s\n", monstro.tipo);
    printf("nivel: %d\n", monstro.nivel);

    printf("os dados do treinador sao:\n");
    printf("nome: %s\n", treinador.nome);
    printf("idade: %d\n", treinador.idade);
    printf("insignias: %d\n", treinador.insignias);
    
    return 0;
}