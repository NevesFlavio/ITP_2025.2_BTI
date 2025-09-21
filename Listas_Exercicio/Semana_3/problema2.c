#include <stdio.h>  

int main () {
    
    float consumo, valor; 
    
    printf("Digite o consumo (em kWh): "); 
    scanf("%f", &consumo);
    
printf("Informe o tipo do consumidor (R = Residencial, C = Comercial, I = Industrial): ");
    char tipo;
    scanf(" %c", &tipo);

    if (tipo == 'R') {
        valor = (consumo * 0.6) + 15;
        printf("Valor a ser pago: R$ %.2f", valor);
    } else if (tipo == 'C') {
       valor = (consumo * 0.48) + 15;
        printf("Valor a ser pago: R$ %.2f", valor);
    } else if (tipo == 'I') {
        valor = (consumo * 1.29) + 15;
        printf("Valor a ser pago: R$ %.2f", valor);
    } else {
        printf("Tipo de consumidor inválido! Digite R, C ou I.");          //tratamento de erro na escolha do tipo de consumidor
    }

return 0;

}