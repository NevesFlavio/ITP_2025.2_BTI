#include <stdio.h>
int main()
{
    float altura, peso, imc;
    
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f", imc);
    
    return 0;
}