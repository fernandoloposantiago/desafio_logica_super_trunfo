#include <stdio.h>

int main() {
    // Número de casas para cada movimento
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i; // Variável de controle para os loops

    // ========================
    // Movimento da TORRE (for)
    // ========================
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n"); // A Torre vai 5 casas para a direita
    }

    // ========================
    // Movimento do BISPO (while)
    // ========================
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n"); // Movimento diagonal: cima + direita
        i++;
    }

    // ========================
    // Movimento da RAINHA (do-while)
    // ========================
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n"); // A Rainha vai 8 casas para a esquerda
        i++;
    } while (i <= movimentoRainha);

    return 0;
}
