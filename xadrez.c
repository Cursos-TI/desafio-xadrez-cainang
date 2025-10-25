#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato: Movimentação das peças utilizando estruturas de repetição.

int main() {
    // Constantes para o número de casas
    const int casas_bispo = 5;
    const int casas_torre = 5;
    const int casas_rainha = 8;

    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentacao do Bispo:\n");
    for (int i = 0; i < casas_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimentacao da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("Movimentacao da Rainha:\n");
    for (int i = 0; i < casas_rainha; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    return 0;
}