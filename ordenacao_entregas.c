#include <stdio.h>

#define QUANTIDADE 10

// Exibe todos os tempos armazenados no array.
void exibirTempos(const float tempos[], int quantidade) {
    int i;

    for (i = 0; i < quantidade; i++) {
        printf("%.2f ", tempos[i]);
    }

    printf("\n");
}

int main(void) {
    float tempos[QUANTIDADE];
    float auxiliar;
    int i, j;

    printf("========================================\n");
    printf(" CLASSIFICADOR DE TEMPOS DE ENTREGA\n");
    printf(" Criterio: ordem crescente\n");
    printf("========================================\n\n");

    // Recebe os tempos de entrega informados pelo usuario.
    for (i = 0; i < QUANTIDADE; i++) {
        printf("Tempo da entrega %d, em minutos: ", i + 1);

        // Aceita somente entradas numericas nao negativas.
        if (scanf("%f", &tempos[i]) != 1 || tempos[i] < 0) {
            printf("Entrada invalida. Informe um numero nao negativo.\n");
            return 1;
        }
    }

    // Exibe o array antes da ordenacao.
    printf("\nTempos antes da ordenacao:\n");
    exibirTempos(tempos, QUANTIDADE);

    // Bubble Sort: percorre o array em varias passagens.
    for (i = 0; i < QUANTIDADE - 1; i++) {

        // Compara elementos adjacentes ainda nao ordenados.
        for (j = 0; j < QUANTIDADE - 1 - i; j++) {

            // Se estiverem na ordem errada, troca os valores.
            if (tempos[j] > tempos[j + 1]) {
                auxiliar = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = auxiliar;
            }
        }
    }

    // Exibe o array depois da ordenacao crescente.
    printf("\nTempos depois da ordenacao:\n");
    exibirTempos(tempos, QUANTIDADE);
    printf("\n");

    // Em ordem crescente, o primeiro e o ultimo
    // elementos contem o menor e o maior tempo.
    printf("Entrega mais rapida: %.2f minutos\n", tempos[0]);
    printf("Entrega mais demorada: %.2f minutos\n",
           tempos[QUANTIDADE - 1]);

    return 0;
}