#include <stdio.h>
#include <math.h>
int main()
{

    int lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%d", &lado2);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%d", &lado3);

if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {               //Condição para formar um triangulo
    
    if (lado1 == lado2 && lado2 == lado3)                                                   //Condição para formar um triangulo equilatero
    {
        printf("Triangulo equilatero\n");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)                             //Condição para formar um triangulo isosceles
    {
        printf("Triangulo isosceles\n");
    }
    else
    {
        printf("Triangulo escaleno\n");                                                         //Condição para formar um triangulo escaleno
    }

    if (lado1 * lado1 == lado2 * lado2 + lado3 * lado3)                                             //Condição para formar um triangulo retangulo
    {
        printf("Triangulo retangulo\n");
    }
    else if ((lado1 * lado1) < (lado2 * lado2) + (lado3 * lado3))                                   //Condição para formar um triangulo acutangulo
    {
        printf("Triangulo acutangulo\n");
    }
    else
    {
        printf("Triangulo obtusangulo\n");                                                          //Condição para formar um triangulo obtusangulo
    }
} else  {

    printf("Os valores nao formam um triangulo\n");                                                             
}
    return 0;
}