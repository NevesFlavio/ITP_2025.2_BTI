#include <stdio.h>
#include <math.h>   

int main() {
    int numero1, numero2, soma, diferenca, produto, divisao, resto, media_aritmetica;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    diferenca = numero1 - numero2;
    produto = numero1 * numero2;
    divisao = numero1 / numero2;
    resto = numero1 % numero2;
    media_aritmetica = (numero1 + numero2) / 2;

    printf("Soma: %d\n", soma);
    printf("Diferenca: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Divisao: %d\n", divisao);
    printf("Resto: %d\n", resto);
    printf("Media Aritmetica: %d\n", media_aritmetica);

    return 0;
}