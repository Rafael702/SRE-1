#include <stdio.h>

int main()
{

    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("**************************************\n");

    int numeroSecreto = 42;

    //%d -> espera um int
    // printf("O número %d é secreto. Não conta pra ninguém\n", numeroSecreto);

    int chute;
    int ganhou = 0;
    int tentativas = 1;
    int pontos = 1000;
    int pontosPerdidos;

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
            pontosPerdidos = (chute - numeroSecreto) / 2;
            printf("Seu chute foi maior que o número secreto\n");
        }
        else
        {
            pontosPerdidos = (numeroSecreto - chute) / 2;
            printf("Seu chute foi menor que o número secreto\n");
        }
        tentativas++;

        
        pontos -= pontosPerdidos;
    }
    printf("Fim de Jogo!\n");
    printf("Você venceu na %d° tentativa!!!\n", tentativas);
    printf("Total de pontos: %d\n", pontos);
}