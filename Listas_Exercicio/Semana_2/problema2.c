#include <stdio.h>

int main() {

    float celsius, fahrenheit, kelvin;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * (9/5)) + 32;
    kelvin = celsius + 273.15;
    
    printf("A temperatura em Fahrenheit e: %.1f", fahrenheit);
    printf("\nA temperatura em Kelvin e: %.1f", kelvin);
    
    return 0;

}
