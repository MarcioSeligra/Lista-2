#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (!(valor > 3)) {
        printf("O valor eh: %d\n", valor);
    }

    return 0;
}
