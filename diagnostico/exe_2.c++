#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*2. Faça um algoritmo que peça um número inicial e um número final. Em seguida, deve ser apresentada a contagem do número inicial ao número final. Suponha que o número inicial é sempre menor que o final.*/

    int inicial, final, i;

    // solicita o número inicial
    printf("digite um numero inicial: ");
    scanf("%d",&inicial);

    // solicita o número final
    printf("digite um numero final: ");
    scanf("%d", &final);

    // verifica se o número inicial é menor que o final
    if(inicial < final){
        // apresenta a contagem do múmero inicial oa número final
        for(i = inicial; i <= final; i++){
            printf("%d ", i);
        }

    }else{
        printf("o numero inicial deve ser menor que o numero final\n");
    }

    return 0;
}