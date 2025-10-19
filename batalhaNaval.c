#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    int linha1 = 2;
    int coluna1 = 4;

    int linha2 = 5;
    int coluna2 = 7;

    for (int j = 0; j < 3; j++){
        tabuleiro[linha1][coluna1 + j] = navio1[j];
    }

    for (int i = 0; i < 3; i++){
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}