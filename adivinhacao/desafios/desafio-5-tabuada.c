#include <stdio.h>

int main()
{
    printf("Informe um número:\n");
    int numero;
    scanf("%d", &numero);

    for (int valorMultiplicador = 1; valorMultiplicador <= 10; valorMultiplicador++) {
        int result = numero * valorMultiplicador;
        printf("%d x %d = %d\n", numero, valorMultiplicador, result);
    }
}