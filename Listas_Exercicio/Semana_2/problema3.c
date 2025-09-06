#include <stdio.h>
#include <math.h>

int main() {

    float capital_inicial, taxa_juros, tempo, montante;
    
    printf("Digite o capital inicial (em reais):");
    scanf("%f", &capital_inicial);
    
    printf("Digite a taxa de juros (em porcentagem):");
    scanf("%f", &taxa_juros);
    
    printf("Digite o tempo (em anos):");
    scanf("%f", &tempo);
    
    montante = capital_inicial * pow(1 + (taxa_juros/100), tempo);
    
    printf("O montante e: %.2f reais", montante);
    
    return 0;


}