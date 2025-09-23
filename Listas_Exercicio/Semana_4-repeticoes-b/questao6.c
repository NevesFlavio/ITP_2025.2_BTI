#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Trios pitagoricos com o maior numero menor que 1000:\n\n");

    for (a = 1; a < 1000; a++) {
        for (b = a; b < 1000; b++) {
            c = (int)sqrt((a * a) + (b * b));
            
           
            if (c * c == (a * a) + (b * b) && c < 1000) {
                printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }

    return 0;
}