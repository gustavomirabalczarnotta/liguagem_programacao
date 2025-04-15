/*nome: Gustavo Mirabal Czarnotta
RA: 2678098 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Aluno{
    int ra;
    char nome[50];
    char endereco[100];
};

typedef struct Aluno aluno;

int main(){
    setlocale(LC_ALL, "Portuguese");
    aluno a1;

    printf("\n Cadastro de Aluno\n");
   
    printf("\nDigite o RA do aluno: ");
    scanf("%d", &a1.ra);

    printf("Digite o nome do aluno: ");
    scanf("%s", a1.nome);

    printf("Digite o endereco do aluno: ");
    scanf("%s", a1.endereco);
    
    printf("\n************************************************\n");
    printf("\nDados do aluno:\n");
    printf("\nRA: %d\n", a1.ra);
    printf("Nome: %s\n", a1.nome);
    printf("Endereco: %s\n", a1.endereco);
    printf("\n************************************************\n");

    return 0;
}
