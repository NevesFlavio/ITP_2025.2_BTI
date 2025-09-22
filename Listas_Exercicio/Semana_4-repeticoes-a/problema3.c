#include <stdio.h>
#include <stdlib.h>                             // para usar a função módulo (abs(x))
#include <math.h>

int somaDivisores(int n) {                      // Função para calcular a soma dos divisores
    int soma = 1; 
    int raiz = sqrt(n);                         

    for (int i = 2; i <= raiz; i++) {
        if (n % i == 0) {
            soma += i;
            if (i != n / i) {
                soma += n / i;
            }
        }
    }

    return soma;
}

int main() {
    int A, B;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &A, &B);

    int somaA = somaDivisores(A);
    int somaB = somaDivisores(B);

    if (abs(somaA - B) <= 2 && abs(somaB - A) <= 2) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
