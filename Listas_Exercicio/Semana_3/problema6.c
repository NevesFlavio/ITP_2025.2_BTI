#include <stdio.h>
int main() {
    
    char febre, dorcabeca, dorcorpo, tosse;
    
    printf("Tem febre? (S/N): ");
    scanf(" %c", &febre);
    
    printf("Tem dor de cabeca? (S/N): ");
    scanf(" %c", &dorcabeca);
    
    printf("Tem dor no corpo? (S/N): ");
    scanf(" %c", &dorcorpo);
    
    printf("Tem tosse? (S/N): ");
    scanf(" %c", &tosse);
    
    if (febre == 'S' && dorcabeca == 'S' && dorcorpo == 'S' && tosse == 'N') {              // Condição para gripe
        printf("Possivel gripe.\n");
    } else if (tosse == 'S' && febre == 'S' && dorcorpo == 'N' && dorcabeca == 'N') {       // Condição para resfriado
        printf("Possivel resfriado.\n");
    } else if (dorcabeca == 'S' && dorcorpo == 'N' && tosse == 'N' && febre == 'N') {       // Condição para enxaqueca
        printf("Possivel enxaqueca.\n");   
    }else if (febre == 'S' && dorcabeca == 'N' && dorcorpo == 'N' && tosse == 'N') {        // Condição para febre
        printf("Consulte um medico.\n");
    }else if (febre == 'N' && dorcabeca == 'N' && dorcorpo == 'N' && tosse == 'N') {        // condição para estar sem sintomas
        printf("Voce parece estar bem.\n");
    }else {                                                                                 // condição para avaliação médica
        printf("Consulte um medico para avaliacao.\n");
    }
    
    return 0;
}   