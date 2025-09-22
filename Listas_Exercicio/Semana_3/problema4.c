#include <stdio.h>

int main() {    

char jogador1, jogador2;

printf("Digite a jogada do jogador 1 (P = Pedra, A = Papel, T = Tesoura): ");
scanf(" %c", &jogador1);

printf("Digite a jogada do jogador 2 (P = Pedra, A = Papel, T = Tesoura): ");
scanf(" %c", &jogador2);

if (jogador1 == jogador2) {                                                                                                                     // tratamento de empate
    printf("Empate!\n");
} else if ((jogador1 == 'P' && jogador2 == 'T') || (jogador1 == 'T' && jogador2 == 'A') || (jogador1 == 'A' && jogador2 == 'P')) {              // as três combinações de vitoria para o jogador 1
    printf("Jogador 1 ganha!\n");
} else {
    printf("Jogador 2 ganha!\n");                                                                                                                // Vitória para o jogador 2 se não for uma das combinações anteriores
}

    return 0;
}