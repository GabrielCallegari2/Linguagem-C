#include <stdio.h>

void moverBispo(int casas) {
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < casas; i++) {
        printf("Cima, Direita\n");
    }
}

void moverTorre(int casas) {
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
}

void moverRainha(int casas) {
    printf("\nMovimento da Rainha:\n");
    for (int i = 0; i < casas; i++) {
        printf("Esquerda\n");
    }
}

void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;
    int casasCavalo = 4;

    moverBispo(casasBispo);
    moverTorre(casasTorre);
    moverRainha(casasRainha);
    moverCavalo(casasCavalo);


    return 0;
}
