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

    for (int i = 1; i <= 3; i++)
    {
        printf("Tentativa %d de 3\n", i);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        int acertou = (chute == numeroSecreto);

        if (acertou)
        {
            printf("Parabéns! Você Acertou!!!\n");
            printf("Jogue de novo, você é um bom jogador\n");

            break;
        }
        else
        {
            int chuteMaiorQueNumeroSecreto = (chute > numeroSecreto);
            if (chuteMaiorQueNumeroSecreto)
            {
                printf("Seu chute foi maior que o número secreto\n");
            }
            else
            {
                printf("Seu chute foi menor que o número secreto\n");
            }
        }
    }
    printf("Fim de Jogo!\n");
}