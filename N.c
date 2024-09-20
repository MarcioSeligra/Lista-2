#include <stdio.h>

int main() {
    int A, B, C, soma;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    soma = A + B + C;

    if (soma >= 100) {
        printf("A soma eh: %d\n", soma);
    }

    return 0;
}
