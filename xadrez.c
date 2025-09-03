#include <stdio.h>

void movimentoTorre()
{
    int i;
    printf("movimento da torre \n");
    for (i = 1; i <= 5; i++)
    {
        printf("direita\n");
    }
    printf("\n");
}

void movimentoBispo()
{
    printf("movimento do bispo \n");
    for (int bispo = 1; bispo <= 8; bispo++)
    {
        printf("acima direita\n");
    }

    printf("\n");
}

void movimentoRainha()
{
    printf("movimento da rainha\n");

    for (int rainha = 0; rainha < 6; rainha++)
    {
        printf("esquerda\n");
    }
    printf("\n");
}

void movimentoCavalo()
{
    printf("Movimento do cavalo\n");

    for (int movimentacaoVertical = 1; movimentacaoVertical <= 2; movimentacaoVertical++)
    {
        printf("Cima\n");
        for (int movimentacaoLateral = 1; movimentacaoLateral <= 1; movimentacaoLateral++)
        {
            if (movimentacaoVertical == 2)
            {
                printf("Direita\n");
                break;
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    movimentoTorre();
    movimentoBispo();
    movimentoRainha();
    movimentoCavalo();
    return 0;
}