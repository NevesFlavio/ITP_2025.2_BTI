#include <stdio.h>


void inicializarJogo(int lin, int col, char mapa[lin][col]) {               //Função de inicializar o mapa
    for (int i = 1; i < lin; i++) {
        for (int j = 1; j < col; j++) {
            mapa[i][j] = '-';  
        }
    }
}

void mostrarJogo(int lin, int col, char mapa[lin][col]) {                   //Função de mostrar o mapa para o usuário
    printf("    ");
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

void colocarBombas(int lin, int col, int bombas[lin][col]) {                //Função de colocar as bombas - em construção
    for (int i = 1; i < lin; i++) {
        for (int j = 1; j < col; j++) {
            bombas[i][j] = 0; 
        }
    }
}

int main() {
    int lin, col;
    int opcao;

do                                                                          //Estrutura para o menu de dificuldade
    {
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Basico (9x9)\n");
    printf("2 - Intermediario (16x16)\n");
    printf("3 - Avancado (24x24)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    
        if (opcao == 1) {
        lin = 10;
        col = 10;
    } else if (opcao == 2) {
        lin = 17;
        col = 17;
    } else if (opcao == 3)
    {
        lin = 25;
        col = 25;
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
