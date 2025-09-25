#include <stdio.h>
#include <math.h>


int verificaPrimo(int n) {
    if (n < 2) return 0;                                //condicao de ser 1 = nao primo
    if (n == 2 || n == 3) return 1;                     //se for 2 ou 3, retorna 1 = primo
    if (n % 2 == 0) return 0;                           //se for par, nao é primo
    int limite = (int) sqrt(n);                         //limite para o for
    for (int i = 3; i <= limite; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    for (int x = 2; x <= 50000; x++) {
        if (verificaPrimo(x) && verificaPrimo(x+2) && verificaPrimo(x+6)) {         //só imprime se todos forem primos triplos
            printf("(%d, %d, %d)\n", x, x+2, x+6);
        }
    }
    return 0;
}
