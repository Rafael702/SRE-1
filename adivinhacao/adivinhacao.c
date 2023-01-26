#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("+********************************************************************+\n");
    printf("+  _______                                                           +\n");
    printf("+ |.-----.|                                                          +\n");
    printf("+ ||     ||                +*****************************************+\n");
    printf("+ ||_____/|                +                                         +\n");
    printf("+ | .     |                +Bem vindo ao nosso jogo de adivinhação!😄+\n");
    printf("+ |-|-  oo|                +                                         +\n");
    printf("+ |  _ _  |                +*****************************************+\n");
    printf("+ |       /                                                          + \n");
    printf("+ TTTTTTTT                                                           +\n\n");
    printf("+********************************************************************+\n");

    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;

    //%d -> espera um int
    // printf("O número %d é secreto. Não conta pra ninguém\n", numeroSecreto);

    int chute;
    int numeroDeTentativas = 5;
    int tentativas = 1;
    double pontos = 1000;
    double pontosPerdidos;
    int acertou;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("[1] - Fácil \n[2] - Médio \n[3] - Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    //    if (nivel == 1)
    //    {
    //        numeroDeTentativas = 20;
    //    }
    //    else if (nivel == 2)
    //   {
    //        numeroDeTentativas = 15;
    //   }
    //    else
    //    {
    //        numeroDeTentativas = 6;
    //    }

    switch (nivel)
    {
    case 1:
        numeroDeTentativas = 20;
        break;
    case 2:
        numeroDeTentativas = 15;
        break;
    default:
        numeroDeTentativas = 6;
        break;
    }

    for (int i = 1; i <= numeroDeTentativas; i++)
    {

        printf("Tentativa %d de %d\n", tentativas, numeroDeTentativas);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if (chute < 0)
        {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int chuteMaiorQueNumeroSecreto = (chute > numeroSecreto);

        acertou = (chute == numeroSecreto);
        if (acertou)
        {
            break;
        }
        else if (chuteMaiorQueNumeroSecreto)
        {
            printf("\nSeu chute foi maior que o número secreto\n");
        }
        else
        {
            printf("\nSeu chute foi menor que o número secreto\n");
        }
        tentativas++;

        pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
        pontos -= pontosPerdidos;
    }

    printf("Fim de Jogo!\n");
    if (acertou)
    {
        printf("Parabéns! Você Acertou!!!\n");
        printf(" ----------------------------------------\n");
        printf("     ___________                         \n");
        printf("    '._==_==_=_.'                        \n");
        printf("    .-\\:      /-.                       \n");
        printf("   | (|:.     |) |                       \n");
        printf("    '-|:.     |-'                        \n");
        printf("      \\::.    /                         \n");
        printf("       '::. .'                           \n");
        printf("         ) (                             \n");
        printf("       _.' '._                           \n");
        printf("      `""""""`                           \n");
        printf("---------------------------------------- \n");
        printf("Jogue de novo, você é um bom jogador\n");
        printf("Você venceu na %d° tentativa!!!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("Você perdeu! O número era: %d. Tente de novo!!!\n", numeroSecreto);
    }
}