#include <stdio.h>
#include <math.h>
int main() {
  
    int a, b, c;
    float delta, x1, x2;
    
    printf("Digite os coeficientes a, b e c da equacao ax^2 + bx + c = 0:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    delta = (b * b) - 4 * a * c;

    printf("Delta: %.2f\n", delta);
    
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Uma raiz real: x1 = %.2f\n", x1);
    } else {
        printf("nao possui raizes reais");
    }
    
    return 0;
}   