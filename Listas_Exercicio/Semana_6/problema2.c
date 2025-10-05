#include   <stdio.h>

int main() {

    int qtd_colecao;
    int qtd_possui;
    int colecao[1000] = {0};

    printf("Tamanho da colecao completa: ");
    scanf("%d", &qtd_colecao);
    printf("Quantidade de figurinhas que voce possui: ");
    scanf("%d", &qtd_possui);

    printf("digite as figurinhas que voce possui, separadas por um espaco: ");

    for (int i = 0; i < qtd_possui; i++) {
      
        int num;
        scanf("%d", &num);
        if (num >= 1 && num <= qtd_colecao) {
            colecao[num - 1] = 1;
        }
    }

    for (int i = 0; i < qtd_colecao; i++) {
        if (colecao[i] == 0) {
            printf("%d ", i + 1);
        }
    }

    printf("\n");
    return 0;   
}