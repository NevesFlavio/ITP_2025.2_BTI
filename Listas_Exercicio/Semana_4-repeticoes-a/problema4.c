#include <stdio.h>
#include <math.h>

int pontosPrincipal(double d)
{                                                               // Função para calcular o número de pontos principais, usando o tipo double para garantir precisão
    if (d <= 1.0)
        return 10;
    else if (d <= 2.0)
        return 6;
    else if (d <= 3.0)
        return 4;
    else
        return 0;
}

int main()
{
    double x, y;
    double ultimoX, ultimoY;
    int total = 0;

    for (int i = 0; i < 10; i++)
    {                              
        printf("Digite as coordenadas do lancamento %d: ", i + 1);                             // Loop para ler as coordenadas dos dez lançamentos
        scanf("%lf %lf", &x, &y);

        double distCentro = sqrt(x * x + y * y);
        int principal = pontosPrincipal(distCentro);
        total += principal;

        if (i > 0)
        {
            double distUltimo = sqrt((x - ultimoX) * (x - ultimoX) + (y - ultimoY) * (y - ultimoY));  // Distância entre o ponto atual e o ponto anterior
            int bonus = pontosPrincipal(distUltimo) / 2;
            total += bonus;
        }

        ultimoX = x;
        ultimoY = y;
    }

    printf("total de pontos: %d\n", total);

    return 0;
}
