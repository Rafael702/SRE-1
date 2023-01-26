#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = 3;
    int b = 2; // cast-up
    double pontos = a / (double)b;
    printf("%f\n", pontos);

    // perca de informacao com cast
    double pi = 3.1415;
    int piConvetido = (int)pi;

    printf("%f %d\n", pi, piConvetido);

    int d = 3;
    int e = -3;

    int f = abs(d * e);

    printf("%d\n", f);

    int segundos = time(0);
    srand(segundos);

    int n1 = rand();
    int n2 = rand();

    printf("Numero randomico: %d e %d\n", n1, n2);
}