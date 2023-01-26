#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("**************************************\n");

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;

    //%d -> espera um int
    // printf("O número %d é secreto. Não conta pra ninguém\n", numeroSecreto);

    int chute;
    int ganhou = 0;
    int tentativas = 1;
    double pontos = 1000;
    double pontosPerdidos;

    while (ganhou == 0)
    {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int chuteMaiorQueNumeroSecreto = (chute > numeroSecreto);

        if (acertou)
        {
            printf("Parabéns! Você Acertou!!!\n");
            printf("Jogue de novo, você é um bom jogador\n");

            break;
        }
        else if (chuteMaiorQueNumeroSecreto)
        {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else
        {
            printf("Seu chute foi menor que o número secreto\n");
        }
        tentativas++;

        pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos -= pontosPerdidos;
    }
    printf("Fim de Jogo!\n");
    printf("Você venceu na %d° tentativa!!!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);
}