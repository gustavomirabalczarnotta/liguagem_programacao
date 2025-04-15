/*nome: Gustavo Mirabal Czarnotta
RA: 2678098 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario{
    int codigo;
    char nome[100];
    char endereco[100];
    float salario;
};

typedef struct Funcionario funcionario;

int main(){
    funcionario f[4];
    int i; 

    printf("\n Cadastro de funcionarios\n");
    
    for(i=0; i<4; i++){
        printf("\nDigite o codigo do funcionario: ");
        scanf("%d", &f[i].codigo);

        printf("Digite o nome do funcionario: ");
        scanf("  %s", f[i].nome);

        printf("Digite o endereco do funcionario: ");
        scanf("  %s",f[i].endereco);

        printf("Digite o salario do funcionario: ");
        scanf("  %f", &f[i].salario);

        printf("\n\n");
    }

    printf("\n************************************************\n");
    printf("\nDados dos funcionarios: \n");
    for(i=0; i<4; i++){
        printf("\nCodigo: %d\n", f[i].codigo);
        printf("Nome: %s\n", f[i].nome);
        printf("Endereco: %s\n", f[i].endereco);
        printf("Salario: %.2f\n", f[i].salario);
    }
    printf("\n************************************************\n");

    return 0;
}