#include <stdio.h>
#include <math.h>


double f(double x, double y) {                              //f(x, y) como no enunciado
    return sin(cos(y) + x) + cos(y + sin(x));
}


int eh_seguro(double x, double y) {                         //Veirifica se a coordenada é segura
    double h = f(x, y);     
    return (h > 0 && h < 2); 
}


int conta_vizinhos(double x, double y) {                    //Conta quantos vizinhos seguros a coordenada tem
    double vizinhos[4][2] = {
        {x + 0.2, y + 0.2},
        {x - 0.2, y - 0.2},
        {x + 0.2, y - 0.2},
        {x - 0.2, y + 0.2}
    };

    int seguros = 0;                                        
    for (int i = 0; i < 4; i++) {
        if (eh_seguro(vizinhos[i][0], vizinhos[i][1])) {
            seguros++;
        }
    }
    return seguros;
}


void classificar(double x, double y) {                         //Classifica a coordenada
    if (!eh_seguro(x, y)) {
        printf("troque de coordenada\n");
        return;
    }

    int seguros = conta_vizinhos(x, y);

    if (seguros <= 1) {
        printf("inseguro\n");
    } else if (seguros <= 3) {
        printf("relativamente seguro\n");
    } else {
        printf("seguro\n");
    }
}

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    classificar(x, y);
    return 0;
}

