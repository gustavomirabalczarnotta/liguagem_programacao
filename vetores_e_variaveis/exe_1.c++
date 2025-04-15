/*nome: Gustavo Mirabal Czarnotta
RA: 2678098 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Caldeira{
    int codigo;
    float volume;
    float pressao;
    float temperatura;
};

typedef struct Caldeira caldeira;

int main(){
    caldeira c[3];
    int i;

    printf("\n Cadasro da caldeira\n");

    for(i=0; i<3; i++){
        printf("\nDigite o codigo da caldeira: ");
        scanf("%d", &c[i].codigo);

        printf("Digite o volume da caldeira: ");
        scanf("%f", &c[i].volume);

        printf("Digite a pressao da caldeira: ");
        scanf("%f", &c[i].pressao);

        printf("Digite a temperatura da caldeira: ");
        scanf("%f", &c[i].temperatura);
    }

    printf("\n************************************************\n");
    printf("\nDados das caldeiras:\n");
    for(i=0; i<3; i++){
        printf("\nCodigo: %d\n", c[i].codigo);
        printf("Volume: %.2f\n", c[i].volume);
        printf("Pressao: %.2f\n", c[i].pressao);
        printf("Temperatura: %.2f\n", c[i].temperatura);
    }
    printf("\n************************************************\n");

    return 0;
}