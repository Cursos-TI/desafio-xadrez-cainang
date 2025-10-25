#include <stdio.h>

// Nível Mestre: Funções Recursivas e Loops Avançados

// Função recursiva para a movimentação do Bispo
void mover_bispo_recursivo(int casas) {
    if (casas > 0) {
        // Loop aninhado para cumprir o requisito
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");
            printf("Direita\n");
        }
        mover_bispo_recursivo(casas - 1);
    }
}

// Função recursiva para a movimentação da Torre
void mover_torre_recursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        mover_torre_recursivo(casas - 1);
    }
}

// Função recursiva para a movimentação da Rainha
void mover_rainha_recursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mover_rainha_recursivo(casas - 1);
    }
}

int main() {
    // Constantes para o número de casas
    const int casas_bispo = 5;
    const int casas_torre = 5;
    const int casas_rainha = 8;

    // Movimentação do Bispo com função recursiva
    printf("Movimentacao do Bispo (Recursivo):\n");
    mover_bispo_recursivo(casas_bispo);
    printf("\n");

    // Movimentação da Torre com função recursiva
    printf("Movimentacao da Torre (Recursivo):\n");
    mover_torre_recursivo(casas_torre);
    printf("\n");

    // Movimentação da Rainha com função recursiva
    printf("Movimentacao da Rainha (Recursivo):\n");
    mover_rainha_recursivo(casas_rainha);
    printf("\n");

    // Movimentação do Cavalo com loop de múltiplas variáveis
    printf("Movimentacao do Cavalo (L para cima a direita):\n");
    // Movimento em L: 2 casas para cima, 1 para a direita
    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
        } else {
            if (j < 1) {
                printf("Direita\n");
                j++;
            }
        }
    }
    printf("\n");

    return 0;
}
