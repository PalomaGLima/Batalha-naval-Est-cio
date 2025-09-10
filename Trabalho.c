#include <stdio.h>

void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void habilidadeCone() {
    int cone[5][5] = {0};
    for (int i = 0; i <= 2; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }
    printf("Habilidade: Cone\n");
    imprimirMatriz(cone);
}

void habilidadeCruz() {
    int cruz[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1;  // Linha do meio
        cruz[i][2] = 1;  // Coluna do meio
    }
    printf("Habilidade: Cruz\n");
    imprimirMatriz(cruz);
}

void habilidadeOctaedro() {
    int octaedro[5][5] = {0};
    int centro = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - centro) + abs(j - centro) <= 1) {
                octaedro[i][j] = 1;
            }
        }
    }
    printf("Habilidade: Octaedro\n");
    imprimirMatriz(octaedro);
}

int main() {
    habilidadeCone();
    habilidadeCruz();
    habilidadeOctaedro();
    return 0;
}
