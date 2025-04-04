#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*4. Faça um programa que peça 5 números reais e os atribua a um vetor. Depois de todos os valores estarem atribuídos, o programa deve verificar e apresentar o número maior.*/

        float numeros[5];
        float maior = 0.0;
        int i;

        for (i = 0; i < 5; i++){
            printf("Digite o %dº número: ", i + 1);
            scanf("%f", &numeros[i]);

            if(numeros[i] > maior){
                maior = numeros[i];
            }else{
                printf("o numero %f não é maior que %f\n", numeros[i], maior);
            }
        }

        printf("o maior numero e: %f\n", maior);
        printf("os numeros digitadso foram:\n");
        for(i = 0; i < 5; i++){
            printf("%f\n", numeros[i]);
        }

    
    return 0;
}