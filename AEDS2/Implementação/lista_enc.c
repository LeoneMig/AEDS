#include <stdio.h>
#include <stdlib.h>

typedef struct no_
{
    int chave;
    struct no_ *prox;
} no;

void busca(int x, no **ant, no **pont, no *ptLista)
{
    *ant = ptLista;
    *pont = NULL;
    no *ptr = ptLista->prox;

    while (ptr != NULL)
    {
        if (ptr->chave < x)
        {
            *ant = ptr;
            ptr = ptr->prox;
        }
        else
        {
            if (ptr->chave == x)
            {
                *pont = ptr;
            }
            ptr = NULL;
        }
    }
}

int insere(no *no_insere, no *ptLista)
{
    no *ant;
    no *pont;
    busca(no_insere->chave, &ant, &pont, ptLista);
    if (pont == NULL)
    {
        no_insere->prox = ant->prox;
        ant->prox = no_insere;
        return 0;
    }
    else
    {
        return -1;
    }
}

no *remove(int x, no *ptLista)
{
    no *ant;
    no *pont;
    busca(x, &ant, &pont, ptLista);
    if (pont != NULL)
    {
        ant->prox = pont->prox;
        return pont;
    }
    else
    {
        return NULL;
    }
}

void ler_menu(int *resposta)
{
    printf("\n-----------------------\n");
    printf("Escolha uma das opcoes:\n");
    printf("0 - sair\n");
    printf("1 - inserir\n");
    printf("2 - remover\n");
    printf("3 - imprimir\n");
    printf("4 - buscar\n");
    printf("Escolha: ");
    scanf(" %d", resposta);
    printf("-----------------------\n\n");
}

int main()
{
    no *ptLista;
    ptLista = malloc(sizeof(no));
    int resposta = 1;

    while (resposta)
    {
        ler_menu(&resposta);

        if (resposta == 1)
        {
            // insere
        }
        else if (resposta == 2)
        {
            // remove
        }
        else if (resposta == 3)
        {
            // imprime
        }
        else if (resposta == 4)
        {
            // busca
        }

        return 0;
    }
}
