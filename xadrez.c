#include <stdio.h>

// ----------------------------
// Função recursiva para a Torre (direita)
// ----------------------------
void movimentoTorreRecursivo(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    movimentoTorreRecursivo(casas - 1);
}

// ----------------------------
// Função recursiva para a Rainha (esquerda)
// ----------------------------
void movimentoRainhaRecursivo(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    movimentoRainhaRecursivo(casas - 1);
}

// ----------------------------
// Função recursiva com loop aninhado para o Bispo (diagonal cima-direita)
// ----------------------------
void movimentoBispoRecursivo(int casas, int passo) {
    if (passo > casas) return;

    // Loop externo: vertical (linha)
    for (int linha = passo; linha <= passo; linha++) {
        // Loop interno: horizontal (coluna)
        for (int coluna = passo; coluna <= passo; coluna++) {
            printf("Cima Direita\n");
        }
    }

    movimentoBispoRecursivo(casas, passo + 1);
}

// ----------------------------
// Função com loops complexos para o Cavalo (2 cima, 1 direita)
// ----------------------------
void movimentoCavaloComplexo(int movimentos) {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    for (int m = 1; m <= movimentos; m++) {
        for (int i = 1; i <= 2; i++) {
            if (i == 2 && m % 2 == 0) continue; // exemplo de controle condicional
            printf("Cima\n");
        }

        for (int j = 1; j <= 1; j++) {
            if (j == 1) {
                printf("Direita\n");
                break; // fim do movimento em L
            }
        }
    }
}

int main() {
    // ----------------------------
    // Torre (recursiva)
    // ----------------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    movimentoTorreRecursivo(casasTorre);

    printf("----------------------------\n");

    // ----------------------------
    // Bispo (recursiva + loops aninhados)
    // ----------------------------
    int casasBispo = 5;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    movimentoBispoRecursivo(casasBispo, 1);

    printf("----------------------------\n");

    // ----------------------------
    // Rainha (recursiva)
    // ----------------------------
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    movimentoRainhaRecursivo(casasRainha);

    printf("\n");

    // ----------------------------
    // Cavalo (loops aninhados e controle complexo)
    // ----------------------------
    int movimentosCavalo = 3; // número de movimentos completos em "L"
    movimentoCavaloComplexo(movimentosCavalo);

    return 0;
}
