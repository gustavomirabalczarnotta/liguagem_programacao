#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
        /*1-Imagine um parque infantil. Faça um algoritmo que peça a altura do usuário e a idade.
            a. Se tiver altura menor que 1,6m, pode entrar no parque. Neste caso:
                i. Se tiver menos de 5 anos, escreva a mensagem: “Pode brincar no 
                    pula-pula e Casinha”;
                ii. Se tiver entre 5 e 8 anos, escreva a mensagem: “Pode brincar na 
                    prancha do pirata e piscina de bolinhas”.
                iii. Se tiver mais de 8 anos, escreva a mensagem: “Pode brincar de 
                    pebolim, ping-pong e basquete”. 
            b. Se tiver altura maior ou igual a 1,6m, escreva a mensagem: “Você é muito 
                grande para entrar no parque”
*/

    float altura;
    int idade;

    // solicita a altura do usuário 
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // solicira a idade do usuário
    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);

    // verifica se a altura é menor que 1,6m
    if(altura < 1.6){
        // verificando idade 
        if(idade < 5){
            printf("pode brincar no pula-pula e casinha\n");
        }else if(idade >= 5 && idade <= 8){
            printf("pode brincar na prancha do pirata e piscina de bolinhas\n");
        }else if(idade >8){
            printf("pode brincar de pebolim, ping-pong e basquete\n");
        }
    }else{
        printf("voce e muito grande para entrar no parque\n");
    }
    return 0;
}