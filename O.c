#include <stdio.h>

int main() {
    int valor, resultado;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    resultado = valor * 2;

    if (resultado > 30) {
        printf("O resultado da multiplicacao eh: %d\n", resultado);
    }

    return 0;
}
