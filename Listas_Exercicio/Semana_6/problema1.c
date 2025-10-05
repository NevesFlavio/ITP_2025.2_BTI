#include <stdio.h>

int main()
{
    int qtde = 0;
    int gabarito[20];
    int resposta[20];
    int acertos = 0;

    do
    {

        printf("Quantidade de questoes (entre 1 e 20): ");

        scanf("%d", &qtde);

    } while (qtde < 1 || qtde > 20);

    for (int i = 0; i < qtde; i++)
    {
        printf("Gabarito da questao %d: ", i + 1);
        scanf("%d", &gabarito[i]);
    }

    for (int i = 0; i < qtde; i++)
    {
        printf("Resposta da questao %d: ", i + 1);
        scanf("%d", &resposta[i]);
    }

    for (int i = 0; i < qtde; i++)
    {
        if (gabarito[i] == resposta[i])
        {
            acertos++;
        }
    }
    
    if (acertos == 1)
    {
       printf("Acerto: %d\n", acertos);
    } else
    {
        printf("Acertos: %d\n", acertos);
    }

    return 0;
}