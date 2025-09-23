#include <stdio.h>

int eh_primo(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;

    do
    {
        printf("Digite um numero inteiro para a: ");
        scanf("%d", &a);
        printf("Digite um numero inteiro para b: ");
        scanf("%d", &b);

        if (a <= b)
        {
            printf("\nERRO: 'a' deve ser maior que 'b'. Tente novamente.\n\n");
        }
    } while (a <= b);

    printf("\nNumeros primos entre %d e %d sao:\n", b, a);
    for (int i = b; i <= a; i++)
    {
        if (eh_primo(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}