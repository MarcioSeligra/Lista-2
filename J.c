#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor %d eh par.\n", valor);
    } else {
        printf("O valor %d eh impar.\n", valor);
    }

    return 0;
}
