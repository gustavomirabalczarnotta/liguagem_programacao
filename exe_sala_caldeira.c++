/*
    Nome: Gustavo Mirabal
    RA: 2678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*faça um programa que represente uma cladeira. a caldeira precisa maracar temperatura, pressao  e volume de água. o programa deve pedir os valores para o usuario digitar os valores da caldeira e depois apresentalos*/

typedef struct{
    float temperatura;
    float pressao;
    float volume;
}caldeira;

int main(){
    setlocale(LC_ALL, "Portuguese");
    caldeira c1;
    
    printf("\nInsira os dados da caldeira:\n");
    printf("\nDigite a temperatura da caldeira: ");
    scanf(" %f", &c1.temperatura);
    printf("Digite a pressao da caldeira: ");
    scanf(" %f", &c1.pressao);
    printf("Digite o volume de agua da caldeira: ");
    scanf(" %f", &c1.volume);

    printf("\n************************************************\n");
    printf("\nDados da caldeira:\n");
    printf("\nTemperatura: %.2f\n", c1.temperatura);
    printf("Pressao: %.2f\n", c1.pressao);
    printf("Volume: %.2f\n", c1.volume);
    printf("\n************************************************\n");
    return 0;
}
