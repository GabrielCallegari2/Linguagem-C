#include <stdio.h>

struct CartaCidade {
    char estado[100];
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};

float calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

float calcularPibPerCapita(float pib, unsigned long int populacao) {
    return pib / populacao;
}

float calcularSuperPoder(struct CartaCidade carta) {
    return carta.populacao + carta.area + carta.pib + carta.pibPerCapita + (1.0 / carta.densidadePopulacional) + carta.pontosTuristicos;
}

void compararCartas(struct CartaCidade cartas[], int numCartas) {
    for (int i = 0; i < numCartas; i++) {
        for (int j = i + 1; j < numCartas; j++) {
            printf("\n--- Comparacao entre a Carta %d e Carta %d ---\n", i + 1, j + 1);

            int vitoriaCarta1 = 0;
            int vitoriaCarta2 = 0;

            
            if (cartas[i].populacao > cartas[j].populacao) {
                printf("Populacao: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("Populacao: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

            if (cartas[i].area > cartas[j].area) {
                printf("Area: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("Area: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

            if (cartas[i].pib > cartas[j].pib) {
                printf("PIB: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("PIB: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

            if (cartas[i].pontosTuristicos > cartas[j].pontosTuristicos) {
                printf("Pontos turisticos: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("Pontos turisticos: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

            if (cartas[i].densidadePopulacional < cartas[j].densidadePopulacional) {
                printf("Densidade populacional: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("Densidade populacional: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

            if (cartas[i].pibPerCapita > cartas[j].pibPerCapita) {
                printf("PIB per capita: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("PIB per capita: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

            if (cartas[i].superPoder > cartas[j].superPoder) {
                printf("Super Poder: Carta %d venceu\n", i + 1);
                vitoriaCarta1++;
            } else {
                printf("Super Poder: Carta %d venceu\n", j + 1);
                vitoriaCarta2++;
            }

           
            if (vitoriaCarta1 > vitoriaCarta2) {
                printf("Carta %d venceu a comparacao\n", i + 1);
            } else if (vitoriaCarta2 > vitoriaCarta1) {
                printf("Carta %d venceu a comparacao\n", j + 1);
            } else {
                printf("As cartas %d e %d empataram\n", i + 1, j + 1);
            }
        }
    }
}

int main() {
    int numCartas;

    printf("Quantas cartas voce deseja cadastrar? ");
    scanf("%d", &numCartas);

    struct CartaCidade cartas[numCartas];

    for (int i = 0; i < numCartas; i++) {
        printf("\nDigite os dados da carta %d:\n", i + 1);
        printf("Estado: ");
        scanf("%s", cartas[i].estado);
        printf("Codigo: ");
        scanf("%s", cartas[i].codigo);
        printf("Nome da cidade: ");
        scanf("%s", cartas[i].nomeCidade);
        printf("Populacao: ");
        scanf("%lu", &cartas[i].populacao);
        printf("Area em km: ");
        scanf("%f", &cartas[i].area);
        printf("PIB (em bilhoes de reais): ");
        scanf("%f", &cartas[i].pib);
        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        cartas[i].densidadePopulacional = calcularDensidade(cartas[i].populacao, cartas[i].area);
        cartas[i].pibPerCapita = calcularPibPerCapita(cartas[i].pib, cartas[i].populacao);
        cartas[i].superPoder = calcularSuperPoder(cartas[i]);
    }

    compararCartas(cartas, numCartas);

    return 0;
}
