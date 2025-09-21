#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, media, mediafinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7)
    {
        printf("Aprovado! Media: %.2f", media);
    }
    else if (media >= 5 && media < 7)
    {
        mediafinal = 10 - media;
        printf("Em Recuperacao! Media: %.2f\n", media);
        printf("Nota necessaria na prova final: %.2f\n", mediafinal);
    }
    else
    {
        printf("Reprovado! Media: %.2f", media);
    }

    return 0;
}