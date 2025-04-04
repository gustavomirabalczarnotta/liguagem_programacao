#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <iostream>

// Função para obter o valor em minutos do usuário
int obterMinutos() {
    int minutos;
    std::cout << "Digite o valor em minutos: ";
    std::cin >> minutos;
    return minutos;
}

// Função para calcular os segundos a partir dos minutos
int calcularSegundos(int minutos) {
    return minutos * 60;
}

// Função para exibir o resultado
void exibirResultado(int minutos, int segundos) {
    std::cout << minutos << " minutos equivalem a " << segundos << " segundos." << std::endl;
}

int main() {
    // Obter o valor em minutos
    int minutos = obterMinutos();

    // Calcular os segundos
    int segundos = calcularSegundos(minutos);

    // Exibir o resultado
    exibirResultado(minutos, segundos);

    return 0;
}

    


  
