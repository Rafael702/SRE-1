#include <stdio.h>

#define NUMERO_LIMITE 100

int main()
{
    int soma = 1;
    int resultadoFinal = 0;
    for (int i = 1; i <= NUMERO_LIMITE; i++)
    {
        int resultado = i + soma;
        printf("%d + %d = %d\n", i, soma, resultado);
        soma++;
        resultadoFinal += resultado;
    }

    printf("O resultado final é: %d\n", resultadoFinal);
}