#include <stdio.h>


void inicializarJogo(int lin, int col, char mapa[lin][col]) {
    for (int i = 1; i < lin; i++) {
        for (int j = 1; j < col; j++) {
            mapa[i][j] = '_';  
        }
    }
}

void mostrarJogo(int lin, int col, char mapa[lin][col]) {
    printf("   ");
    for (int j = 1; j < col; j++) {
        printf("%2d ", j);
    }
    printf("\n");

    for (int i = 1; i < lin; i++) {
        printf("%2d  ", i);
        for (int j = 1; j < col; j++) {
            printf("%2c ", mapa[i][j]);
        }
        printf("\n");
    }
}

void colocarBombas(int lin, int col, int bombas[lin][col]) {
    for (int i = 1; i < lin; i++) {
        for (int j = 1; j < col; j++) {
            bombas[i][j] = 0; 
        }
    }
}

int main() {
    int lin, col;
    int opcao;

do
    {
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Basico (9x9)\n");
    printf("2 - Intermediario (16x16)\n");
    printf("3 - Avancado (16x30)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    
        if (opcao == 1) {
        lin = 9;
        col = 9;
    } else if (opcao == 2) {
        lin = 16;
        col = 16;
    } else if (opcao == 3)
    {
        lin = 16;
        col = 30;
    } else {
        printf("Opcao invalida. Escolha novamente:\n");
       
    }
    
    } while (opcao != 1 && opcao != 2 && opcao != 3);
    
    

  
    char mapa[lin][col];
    int bombas[lin][col];

    inicializarJogo(lin, col, mapa);
    colocarBombas(lin, col, bombas);

    mostrarJogo(lin, col, mapa);

    return 0;
}
