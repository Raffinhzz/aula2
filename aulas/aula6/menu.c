#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;
    float saldo = 0.0f;
    float recarga = 0.0f;
    

    do
    {
        system("clear");
        printf("Menu principal\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Recarregar\n");
        printf("3 - Ver recados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao =>");
        scanf("%i", &opcao);
        while (getchar() != '\n')
            ;

        switch (opcao)
        {
        case 1:
        {

            system("clear");
            printf("Consulta saldo\n");
            printf("Seu saldo eh R$ %.2f \n", saldo);
            break;
        }
        case 2:
        {

            system("Clear");
            printf("Escolha um valor valor para recarga: \n");
            scanf("%f", &recarga);
            getchar();
            printf("Voce recarregou %.2f dinheros! \n", recarga);
            saldo = saldo + recarga;
            printf("Agora seu saldo eh %.2f \n", saldo + recarga);
            break;
        }
        case 3:
            printf("Voce naum tem recados\n");
            break;
        case 0:
            printf("Ate logo\n");
            break;
        default:
            printf("Opcao invalida.Tente novamente\n");
        }
        if (opcao != 0)
        {
            printf("Aperte enter para continuar..");
            getchar();
        }

    } while (opcao != 0);

    return 0;
}