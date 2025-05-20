#include <stdio.h>

int main() {
    // ----------------------------
    // Simulação do movimento da Torre (FOR)
    // ----------------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Linha separadora
    printf("----------------------------\n");

    // ----------------------------
    // Simulação do movimento do Bispo (WHILE)
    // ----------------------------
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Linha separadora
    printf("----------------------------\n");

    // ----------------------------
    // Simulação do movimento da Rainha (DO-WHILE)
    // ----------------------------
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
