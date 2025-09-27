#include <stdio.h>

#define LIN 9                                           // Define o número de linhas e colunas como "iniciante"                         
#define COL 9


void inicializarJogo(char mapa[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            mapa[i][j] = '_';  
        }
    }
}


void mostrarJogo(char mapa[LIN][COL]) {
    printf("   ");
    for (int j = 0; j < COL; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < LIN; i++) {
        printf("%d  ", i);
        for (int j = 0; j < COL; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
}


void colocarBombas(int bombas[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            bombas[i][j] = 0; 
        }
    }
}

int main() {
    char mapa[LIN][COL];
    int bombas[LIN][COL];

    inicializarJogo(mapa);
    colocarBombas(bombas);

    mostrarJogo(mapa);

    return 0;
}
