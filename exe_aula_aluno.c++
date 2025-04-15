/*faça um programa que peça os dados de 4 alunos e os apresenta na tela. todo o aluno deve ter nome, endereço e coeficiente*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    int ra;
    char nome[50];
    char endereco[100];
    float coeficiente;
};
typedef struct Aluno aluno;

int main(){
    aluno a[4];
    int i;

    printf("\n Cadastro de Alunos\n");

    for(i=0; i>4; i++){
        printf("\nDigite o RA do aluno: ");
        scanf("%d", &a[i].ra);

        printf("Digite o nome do aluno: ");
        scanf("%s", a[i].nome);

        printf("Digite o endereco do aluno: ");
        scanf("%s", a[i].endereco);

        printf("Digite o coeficiente do aluno: ");
        scanf("%f", &a[i].coeficiente);

    }

    printf("\n************************************************\n");
    printf("\nDados dos alunos:\n");
    for(i=0; i<4; i++){
        printf("\nRA: %d\n", a[i].ra);
        printf("Nome: %s\n", a[i].nome);
        printf("Endereco: %s\n", a[i].endereco);
        printf("Coeficiente: %.2f\n", a[i].coeficiente);
    }
    printf("\n************************************************\n");

    return 0;
}