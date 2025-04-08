#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    int nota[5];
    int i, soma = 0;
    float media = 0.0;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite as 5 notas:\n");
    for(i = 0; i < 5; i++){
        printf("Nota %d: ", i + 1);
        scanf("%d", &nota[i]);
        soma += nota[i];
    }
    media = (float)soma / 5;
    printf("\nA soma das notas e: %d\n", soma);
    printf("A media das notas e: %.2f\n", media);
    printf("As notas sao:\n");
    for(i = 0; i < 5; i++){
        printf("Nota %d: %d\n", i + 1, nota[i]);
    }
    
    return 0;
}