/*nome: Gustavo Mirabal Czarnotta
RA: 2678098 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct exe_aula_pocketdex{
    char nome[20];
    float vida;
    float ataque;
    float defesa;
};
typedef struct exe_aula_pocketdex pocketmon;

int main(){
    pocketmon p[5];
    int i, opcao, index;

    printf("\nCadastro dos pocketmons\n");

    for(i=0; i<5; i++){
        printf("\nDigite o nome do pocketmon: ");
        scanf(" %s", p[i].nome);

        printf("Digite a vida do pocketmon: ");
        scanf(" %f", &p[i].vida);

        printf("Digite o ataque do pocketmon: ");
        scanf(" %f", &p[i].ataque);

        printf("Digite a defesa do pocketmon: ");
        scanf(" %f", &p[i].defesa);
    }

    do{
        printf("\nEscolha uma opcao:\n");
        printf("1 - Alterar dados do pocketmon\n");
        printf("2 - Ver dados do pocketmon\n");
        printf("Outro numero para sair\n");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("\nDigite o index do pocketmon (0-4) que deseja alterar: ");
            scanf("%d", &index);
            if(index >= 0 && index < 5){
                printf("\nDigite o novo nome do pocketmon: ");
                scanf(" %s", p[index].nome);

                printf("Digite a nova vida do pocketmon: ");
                scanf(" %f", &p[index].vida);

                printf("Digite o novo ataque do pocketmon: ");
                scanf(" %f", &p[index].ataque);

                printf("Digite a nova defesa do pocketmon: ");
                scanf(" %f", &p[index].defesa);
            } else {
                printf("\nIndex invalido!\n");
            }
        } else if(opcao == 2){
            printf("\nDigite o index do pocketmon (0-4) que deseja ver: ");
            scanf("%d", &index);
            if(index >= 0 && index < 5){
                printf("\nNome: %s\n", p[index].nome);
                printf("Vida: %.2f\n", p[index].vida);
                printf("Ataque: %.2f\n", p[index].ataque);
                printf("Defesa: %.2f\n", p[index].defesa);
            } else {
                printf("\nIndex invalido!\n");
            }
        }
    } while(opcao == 1 || opcao == 2);{
        printf("\nDeseja continuar? (1 - Sim, 0 - Nao): ");
        scanf("%d", &opcao);
        if(opcao == 0){
            printf("\nSaindo do programa...\n");
        } else if(opcao != 1 && opcao != 2){
            printf("\nOpcao invalida! Saindo do programa...\n");
        }
    }

    

    return 0;
}