#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[6];
    int x, y, tmp;

    // Gerar n�meros aleat�rios para o vetor
    for (x = 0; x < 6; x++) {
        vetor[x] = rand() % 101; // 0 a 100
    }

    // Implementa��o do Insertion Sort
    for (x = 1; x < 6; x++) { // Come�a a partir do segundo elemento
        y = x;
        while (y > 0 && vetor[y] < vetor[y - 1]) { // Compara o elemento atual com o anterior
            tmp = vetor[y];
            vetor[y] = vetor[y - 1];
            vetor[y - 1] = tmp;
            y = y - 1; // Decrementa y para continuar comparando com os elementos anteriores
        }
    }

    // Imprime o vetor ordenado
    for (x = 0; x < 6; x++) {
        printf("%d ", vetor[x]);
    }

    return 0;
}

