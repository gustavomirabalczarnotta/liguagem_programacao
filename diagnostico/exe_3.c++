#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*. Faça um algoritmo que simule um Monstrodex! Ele deve apresentar o seguinte menu: 
Monstrodex: 
1-Zikachu 
2-Zulbassauro 
3-Zharmander 
0-Sair do Monstrodex
• Caso o usuário escolha a opção 1, o algoritmo deve apresentar a mensagem “Monstro elétrico da categoria rato”. 
• Caso o usuário escolha a opção 2, o algoritmo deve apresentar a  mensagem “Monstro de grama da categoria semente”. 
• Caso o usuário escolha a opção 3, o algoritmo deve apresentar a mensagem “Monstro de fogo da categoria lagarto”. 
• Caso o usuário escolha outra opção, o algoritmo deve apresentar a mensagem “Monstro não cadastrado. Há 8900 monstros! Temos que pegar!” 
• Após apresentar o resultado, o algoritmo deve retornar ao menu inicial, enquanto a opção for diferente de 0
*/

   int opcao;
    do {
         printf("Monstrodex:\n");
         printf("1-Zikachu\n");
         printf("2-Zulbassauro\n");
         printf("3-Zharmander\n");
         printf("0-Sair do Monstrodex\n");
         printf("Digite a opção desejada: ");
         scanf("%d", &opcao);
         switch (opcao) {
              case 1:
                printf("Monstro elétrico da categoria rato\n");
                break;
              case 2:
                printf("Monstro de grama da categoria semente\n");
                break;
              case 3:
                printf("Monstro de fogo da categoria lagarto\n");
                break;
              default:
                printf("Monstro não cadastrado. Há 8900 monstros! Temos que pegar!\n");
                break;
         }
    } while (opcao != 0);{
        printf("Saindo do Monstrodex\n");
        scanf("%d", &opcao);
    }
    return 0;
}