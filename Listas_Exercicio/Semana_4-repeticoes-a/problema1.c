#include <stdio.h>

int main()
{
    float comprimento, largura, bolso;
    int dobras;

    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do bolso: ");
    scanf("%f", &bolso);

    while (comprimento > bolso && largura > bolso)
    {                                                               // Enquanto o comprimento e a largura forem maiores que o bolso
        if (comprimento >= largura)
        {                                                           // Se o comprimento for maior ou igual a largura
            comprimento = comprimento / 2;
        }
        else
        {
            largura = largura / 2;
        }

        dobras++;
    }

    printf("Dobras: %d", dobras);

    return 0;
}