#include <stdio.h>
void main()
{
    float n1, n2, n3, n4, md;

    printf("Insira sua primeira mencao: ");
    scanf("%f", &n1);

    printf("Insira sua segunda mencao: ");
    scanf("%f", &n2);

    printf("Insira sua terceira mencao: ");
    scanf("%f", &n3);

    printf("Insira sua quarta mencao: ");
    scanf("%f", &n4);

    md = (n1+n2+n3+n4)/4;

    if(md>5)
    {
        printf("Aprovado(a)");
    }

    else
    {
        printf("Reprovado(a)");
    }
}
