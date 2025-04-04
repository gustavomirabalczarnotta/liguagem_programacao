#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*. Faça um algoritmo de pocketdex. O pocketdex deve poder armazenar 5 pocketmon. Cada pocketmon possui um campo nome, vida, ataque e defesa. O algoritmo, primeiramente deve apresentar o seguinte menu:
MENU:
1. Cadastrar um pocketmon no pocketdex.
2. Apresentar pocketmon.
0. Sair
Se o usuário escolher a opção 1, o algoritmo deverá pedir o nome, vida, ataque e defesa do pocketmon a ser cadastrado. Para isso, crie um registro pocketmon com os respectivos campos. Os valores digitados devem ser armazenados sempre em sequência no pocketdex (primeiramente no espaço 0, depois 1, 2, 3 e finalmente 4). Mas se o usuário tentar cadastrar um sexto pocketmon, o algoritmo não deve permitir.
Se o usuário escolher a opção 2, o algoritmo deverá pedir o número do pocketmon (um valor entre 0 e 4) e apresentar os dados do pocketmon já cadastrados. O valor precisa ser válido (entre 0 e 4). Do contrário, o algoritmo deve alertar que o pocketdex permite apenas valores entre 0 e 4.
Por fim, se o usuário não digitar 0, o algoritmo deve voltar a apresentar o menu e tudo se repete. Use funções para cada tarefa.
*/

    typedef struct{
        char nome[20];
        int vida;
        int ataque;
        int defesa;
    }Pocketmon;

    Pocketmon pocketdex[5];
    int opcao, i = 0, numPocketmon;
    char nome[20];
    int vida, ataque, defesa;

    do{
        printf("MENU:\n");
        printf("1. Cadastrar um pocketmon no pocketdex.\n");
        printf("2. Apresentar pocketmon.\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){ 
            case 1:
                if(i < 5){
                    printf("Digite o nome do pocketmon: ");
                    scanf("%s", pocketdex[i].nome);
                    printf("Digite a vida do pocketmon: ");
                    scanf("%d", &pocketdex[i].vida);
                    printf("Digite o ataque do pocketmon: ");
                    scanf("%d", &pocketdex[i].ataques);
                    printf("Digite a defesa do pocketmon: ");
                    scanf("%d", &pocketdex[i].defesa);
                    i++;
                }else{
                    printf("Nao e possivel cadastrar mais pocketmon. O pocketdex ja esta cheio.\n");
                }
                break;
            case 2: 
                printf("Digite o numero do pocketmon (0 a 4): ");
        }
     
    }

    
    return 0;
}