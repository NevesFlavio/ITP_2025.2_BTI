#include <stdio.h>

void tratarHora(int hora, int minuto, int tipo){
    if(tipo == 0){
        printf("%02d:%02d\n", hora, minuto);
    } else {
        int h12 = hora % 12;                                            // o resto da divisão por 12 é a hora estilo PM
        if (h12 == 0) h12 = 12;
        printf("%02d:%02d %s\n", h12, minuto, (hora < 12) ? "AM" : "PM");
    }
    
}

int main(){
    int hora, minuto, tipo;

    printf("Digite a hora: ");
    scanf("%d %d %d", &hora, &minuto, &tipo);

    int ronda[4] = {60, 130, 280, 725};
    int total = hora * 60 + minuto;

    tratarHora(hora, minuto, tipo);

    for (int i = 0; i < 4; i++)
    {
       int novo = (total + ronda[i]) % 1440;                            //quantidade de minutos em 24h
       int hh = novo / 60;
       int mm = novo % 60;
       tratarHora(hh, mm, tipo);
    }
    
    return 0;
}