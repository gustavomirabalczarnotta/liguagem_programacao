#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*Crie uma matriz de 2x3, de números inteiros e a populacione usando laço para. Por fim, calcule e apresente a soma de cada linha. Por exemplo, se o usuário digitar: 

            3 1 4 
            7 8 1 
            Então, o algoritmo deverá apresentar respectivamente: 
            8 e 16
*/

    int matriz[2][3];
    int i, j, soma_linha1 = 0, soma_linha2 = 0;

    // solicita os números para a matriz
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o número [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    // calcula a soma de cada linha
    for (j = 0; j < 3; j++){
        soma_linha1 += matriz[0][j];
        soma_linha2 += matriz[1][j];
    }
    // apresenta a soma de cada linha
    printf("A soma da linha 1 é: %d\n", soma_linha1);
    printf("A soma da linha 2 é: %d\n", soma_linha2);

    printf("Os números digitados foram:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
   
        

    
    return 0;
}