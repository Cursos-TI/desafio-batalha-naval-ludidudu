#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    int linha1 = 2;
    int coluna1 = 4;

    int linha2 = 5;
    int coluna2 = 7;

    int linha3 = 0;
    int coluna3 = 0;

    int linha4 = 0;
    int coluna4 = 9;

    for (int j = 0; j < 3; j++){
        tabuleiro[linha1][coluna1 + j] = navio1[j];
    }

    for (int i = 0; i < 3; i++){
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    for (int k = 0; k < 3; k++){
        tabuleiro[linha3 + k][coluna3 + k] = navio3[k];
    }

    for ( int l = 0; l < 3; l++){
        tabuleiro[linha4 + l][coluna4 - l] = navio4[l];
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