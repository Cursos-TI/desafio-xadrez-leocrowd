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

    // Linha em branco antes do Cavalo
    printf("\n");

    // ----------------------------
    // Simulação do movimento do Cavalo (FOR + WHILE)
    // ----------------------------
    int movimentosCavalo = 1; // Quantas vezes o cavalo fará o movimento completo em "L"
    printf("Movimento do Cavalo (2 casas para Baixo, 1 para Esquerda):\n");

    for (int m = 1; m <= movimentosCavalo; m++) {
        // Loop interno para 2 casas para baixo (WHILE)
        int passo = 1;
        while (passo <= 2) {
            printf("Baixo\n");
            passo++;
        }

        // Após 2 passos para baixo, move 1 para esquerda
        printf("Esquerda\n");
    }

    return 0;
}
