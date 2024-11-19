#include <stdio.h>

#define TAM 10

void inicializaMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = 0;
        }
    }
}

void exibeMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidadeCone(int matriz[TAM][TAM], int x, int y) {
    
    for (int i = 0; i < TAM; i++) {
        for (int j = y - (i - x); j <= y + (i - x); j++) {
            
            if (j >= 0 && j < TAM ) {
                matriz[i][j] = 1;
            }
        }
    }
}

void habilidadeCruz(int matriz[TAM][TAM], int x, int y) {
    for (int i = 0; i < TAM; i++) {
        matriz[x][i] = 1;
        matriz[i][y] = 1;
    }
}

void habilidadeOctaedro(int matriz[TAM][TAM], int x, int y) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (abs(x - i) + abs(y - j) <= 2) {
                matriz[i][j] = 1;
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializaMatriz(tabuleiro);
    habilidadeCone(tabuleiro, 2, 4); 
    printf("Habilidade: Cone\n");
    exibeMatriz(tabuleiro);

    inicializaMatriz(tabuleiro);
    habilidadeCruz(tabuleiro, 5, 5);
    printf("Habilidade: Cruz\n");
    exibeMatriz(tabuleiro);

    inicializaMatriz(tabuleiro);
    habilidadeOctaedro(tabuleiro, 4, 4);
    printf("Habilidade: Octaedro\n");
    exibeMatriz(tabuleiro);

    return 0;
}
