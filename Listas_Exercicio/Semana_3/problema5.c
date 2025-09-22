#include <stdio.h>
#include <math.h>

int main()
{

    float compra, desconto;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    if (compra > 1000)
    {
        desconto = compra * 0.2;
        printf("Desconto de 20 por cento: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", compra - desconto);
    }
    else if (compra <= 1000 && compra > 500)
    {
        desconto = compra * 0.15;
        printf("Desconto de 15 por cento: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", compra - desconto);
    }
    else if (compra <= 500 && compra > 100)
    {
        desconto = compra * 0.1;
        printf("Desconto de 10 por cento: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", compra - desconto);
    }
    else
    {
        printf("Sem desconto (compra menor que R$ 100): R$ %.2f\n", compra);
    }

    return 0;
}