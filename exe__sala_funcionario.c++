#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Funcionario{
    char nome[50];
    int id;
    char cargo[50];
    char categoria[50];
};

typedef struct Funcionario funcionario;

int main(){
    setlocale(LC_ALL, "Portuguese");
    funcionario f1;

    printf("\n Cadastro de Fincionario\n");
    
    printf("\nDigite o nome do funcionario: ");
    scanf("%s", &f1.nome);
    
    printf("Digite o id do fincionario: ");
    scanf("%d", &f1.id);

    printf("Digite o cargo do funcionario: ");
    scanf("%s", &f1.cargo);

    printf("Digite a categoria do funcionario: ");
    scanf("%s", &f1.categoria);

    printf("\n************************************************\n");
    printf("\nDados do funcionario:\n");
    printf("\nNome: %s\n", f1.nome);
    printf("Id: %d\n", f1.id);
    printf("Cargo: %s\n", f1.cargo);
    printf("Categoria: %s\n", f1.categoria);
    printf("\n************************************************\n");
    
    return 0;
}