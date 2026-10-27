#include <stdio.h>

#define QUANTIDADE 10

int main(void) {
    float tempos[QUANTIDADE];
    int i;

    printf("CLASSIFICADOR DE TEMPOS DE ENTREGA\n");
    printf("Informe os tempos em minutos.\n\n");

    // Recebe os dez tempos informados pelo usuario.
    for (i = 0; i < QUANTIDADE; i++) {
        printf("Tempo da entrega %d: ", i + 1);

        // Verifica se a entrada e numerica e nao negativa.
        if (scanf("%f", &tempos[i]) != 1 || tempos[i] < 0) {
            printf("Entrada invalida. Informe um numero nao negativo.\n");
            return 1;
        }
    }

    // Mostra os dados antes da ordenacao.
    printf("\nTempos antes da ordenacao:\n");

    for (i = 0; i < QUANTIDADE; i++) {
        printf("%.2f ", tempos[i]);
    }

    printf("\n");

    return 0;
}