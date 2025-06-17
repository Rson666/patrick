#include <stdio.h>

float calcularMedia(float notas[], int quantidade) {
    float soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

float encontrarMaior(float notas[], int quantidade) {
    float maior = notas[0];
    for (int i = 1; i < quantidade; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    } 
    return maior;
}

int main() {
    float notas[10];
    int quantidade;

    printf("Quantas notas deseja inserir (Valor inteiro entre 1 e 10)? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0 || quantidade > 10) {
        printf("Quantidade inválida de notas. Por favor, insira um valor entre 1 e 10.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = calcularMedia(notas, quantidade);

    float maiorNota = encontrarMaior(notas, quantidade);

    printf("\n--- Resultados ---\n");
    printf("Média das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiorNota);

    return 0;
}
