#include <stdio.h>

int main() {    
    float peso, altura, imc;
    
    printf("Digite seu peso (em kg):");
    scanf("%f", &peso);
    
    printf("Digite sua altura (em cm):");
    scanf("%f", &altura);
    
    altura = altura / 100;                  // Convertendo cm para m
    
    imc = peso / (altura * altura);
    
    if (imc < 18.5) {
        printf("Abaixo do peso: %f", imc);
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal: %f", imc);
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso: %f", imc);
    } else {
        printf("Obesidade: %f", imc);
    } 
    
    return 0;
}