#include <stdio.h>

int main() {
    int qtde;
    int alturas[30];
    int maior;
    int pos1 = -1, pos2 = -1;

    printf("Quantidade de pontos: ");
    scanf("%d", &qtde);

    printf("Digite as alturas, separadas por um espaco: ");
    scanf("%d", &alturas[0]);
    maior = alturas[0]; // inicializa com o primeiro valor

    // lê o resto das alturas
    for (int i = 1; i < qtde; i++) {
        scanf("%d", &alturas[i]);
        if (alturas[i] > maior) {
            maior = alturas[i];
        }
    }

    // encontra as duas posições do maior valor
    for (int i = 0; i < qtde; i++) {
        if (alturas[i] == maior) {
            if (pos1 == -1)
                pos1 = i;
            else
                pos2 = i;
        }
    }

    int comprimento = pos2 - pos1 - 1;
    if (comprimento < 1) comprimento = 1;

    printf("Comprimento: %d\n", comprimento);

    return 0;
}