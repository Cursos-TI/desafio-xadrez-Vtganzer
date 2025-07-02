#include <stdio.h>

// ---------- Funções Recursivas ----------

// TORRE: Move 5 casas para a Direita (Recursiva)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// RAINHA: Move 8 casas para a Esquerda (Recursiva)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// BISPO: Move 5 casas para Cima Direita (Recursiva + Loops Aninhados)
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) return;

    // Loop vertical (externo)
    for (int v = 0; v < 1; v++) {
        // Loop horizontal (interno)
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

// ---------- Cavalo com Loops Complexos ----------

// CAVALO: 2 casas para cima e 1 para a direita (em L)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentosFeitos = 0;

    // Loop externo simula movimento vertical
    for (int i = 0; i < 2; i++) {
        if (i == 1) {
            // Se for o último movimento vertical, pula se condição especial
            continue;
        }
        printf("Cima\n");
        movimentosFeitos++;
    }

    // Loop interno simula movimento horizontal com condição complexa
    for (int j = 0; j < 2; j++) {
        if (j == 0) {
            printf("Cima\n");  // Segunda casa para cima
            movimentosFeitos++;
            continue;
        }

        if (movimentosFeitos >= 2) {
            printf("Direita\n");  // Uma casa para direita
            break;
        }
    }
}

int main() {
    // -------- TORRE --------
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // -------- BISPO --------
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    // -------- RAINHA --------
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // -------- CAVALO --------
    moverCavalo();

    return 0;
}