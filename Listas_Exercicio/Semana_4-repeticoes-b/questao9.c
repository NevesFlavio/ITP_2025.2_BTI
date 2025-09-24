#include <stdio.h>

int main() {
    int preco1, preco2, qtd;  

    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%d", &preco1);

    printf("Digite o preco do segundo fornecedor: ");
    scanf("%d", &preco2);

    printf("Digite a quantia disponivel: ");
    scanf("%d", &qtd);

    int minresto = qtd + 1;
    int max_i = -1, max_j = -1;

    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            int custo = i * preco1 + j * preco2;
            if (custo<= qtd) {
                int resto = qtd - custo;
                if (resto < minresto) {
                    minresto = resto;
                    max_i = i;
                    max_j = j;
                }
            }
        }
    }

    if (max_i != -1) {
        printf("\nResta menos comprando %d do primeiro e %d do segundo\n", max_i, max_j);
    } else {
        printf("Não é possivel comprar com o valor disponivel");
    }

    return 0;
}