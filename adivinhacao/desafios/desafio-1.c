#include <stdio.h>

int main() {

    printf("Digite um valor para x:\n");
    int x;
    scanf("%d", &x);

    printf("Digite um valor para y:\n");
    int y;
    scanf("%d", &y);

    int resultado = x * y;

    printf("O valor de x é: %d e o valor de y é: %d\n", x, y);
    printf("O resultado da multiplicação de %d x %d é igual a: %d\n", x,y, resultado);
}