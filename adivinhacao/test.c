#include <stdio.h>

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
}