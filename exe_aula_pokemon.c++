#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct pokemon{
    char nome[50];
    char tipo[50];
    int vida;
    int ataque;
};
typedef struct pokemon pokemon;

int main(){
    pokemon p[5];
    int i;

    for(i=0; i<5; i++){
        printf("Digite o nome do Pokemon: ");
        scanf("%s", p[i].nome);
        printf("Digite o tipo do Pokemon: ");
        scanf("%s", p[i].tipo);
        printf("Digite a vida do Pokemon: ");
        scanf("%d", &p[i].vida);
        printf("Digite o ataque do Pokemon: ");
        scanf("%d", &p[i].ataque);
        printf("\n");
    }

    
    return 0;
}