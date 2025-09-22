#include <stdio.h>
#include <math.h>  

int main() {

float x, y, teia, distancia, cx, cy;
int alvos;

printf("digite a coordenada inicial do Homem Aranha!\n");
scanf("%f %f", &x, &y);

printf("digite o comprimento maximo da teia!\n");
scanf("%f", &teia);

printf("digite a quantidade de alvos!\n");
scanf("%d", &alvos);

for (int i = 0; i < alvos; i++) {
    printf("digite a coordenada do %d alvo!\n", i + 1);
    scanf("%f %f", &cx, &cy);

    distancia = sqrt((cx - x) * (cx - x) + (cy - y) * (cy - y));

    if (distancia > teia) {
        printf("N\n");
        return 0;

    } 

    x = 2 * cx - x;
}

printf("S\n");

    return 0;
}