#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};  
    int centro = 2; 

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= centro - i && j <= centro + i && i <= centro)
                cone[i][j] = 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == centro || j == centro)
                cruz[i][j] = 1;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i <= centro) {
                if (j >= centro - i && j <= centro + i)
                    octaedro[i][j] = 1;
            } else {
                if (j >= i - centro && j <= (4 - (i - centro)))
                    octaedro[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (cone[i][j] == 1)
                tabuleiro[i][j] = 3;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (cruz[i][j] == 1)
                tabuleiro[i][j + 5] = 2;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (octaedro[i][j] == 1)
                tabuleiro[i + 5][j + 2] = 1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
