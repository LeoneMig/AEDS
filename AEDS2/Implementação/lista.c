#include <stdio.h>
#include <stdlib.h>

typedef struct no_
{
    int chave;
    int valor;
} no;

void imprimeLista(no l[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("\n Chave: %d", l[i].chave);
        printf("\n Valor: %d\n", l[i].valor);
        printf("===============================");
    }
}

int busca(no l[], int x, int m)
{
    l[m].chave = x;
    int i = 0;
    while (l[i].chave != x)
    {
        i++;
    }
    if (i == m)
    {
        return -1;
    }
    return i;
}

int insereLista(no l[], int *n, int m, no x)
{
    if (*n < (m - 1))
    {
        if (busca(l, x.chave, m) == -1)
        {
            (*n)++;
            l[*n] = x;
            return 1;
        }
        else
            return 0;
    }
    return -1;
}

int buscaBin(no l[], int x, int m)
{
    int inf = 0, sup = (m - 1), meio = (sup / 2);
    while (inf <= sup)
    {
        meio = (inf + sup) / 2;
        if (l[meio].chave == x)
        {
            return meio;
            inf = sup + 1;
        }
        else
        {
            if (l[meio].chave < x)
            {
                inf = meio + 1;
            }
            else
            {
                sup = meio + 1;
            }
        }
    }
    return -1;
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

no *removeLista(no l[], int *n, int x, int m)
{
    int indice = -1;
    no *no_retorno = NULL;
    if (*n != -1)
    {
        indice = busca(l, x, m);
        if (indice != -1)
        {
            no_retorno = malloc(sizeof(no));
            (*no_retorno).chave = l[indice].chave;
            (*no_retorno).valor = l[indice].valor;
        }
        for (int i = indice; i < (*n); i++)
        {
            l[i].chave = l[i + 1].chave;
            l[i].valor = l[i + 1].valor;
        }
        (*n)--;
    }
    return no_retorno;
}

void main()
{
    int m;
    printf("Digite o tamanho da lista: ");
    scanf(" %d", &m);
    no lista[m + 1];
    // n é o indice do ultimo elemento
    int n = -1;
    int resposta = 1;

    while (resposta)
    {
        ler_menu(&resposta);

        if (resposta == 1)
        {
            no x;

            printf("\n Digite a chave que quer inserir: ");
            scanf(" %d", &x.chave);
            printf("\n Digite o valor que quer inserir: ");
            scanf(" %d", &x.valor);
            if (insereLista(lista, &n, m, x) == 1)
            {
                printf("\n Elemento inserido na posição %d", n);
            }
            else
            {
                if (insereLista(lista, &n, m, x) == -1)
                {
                    printf("\n Lista cheia!");
                }
                else
                {
                    if (insereLista(lista, &n, m, x) == 0)
                    {
                        printf("\n Item ja existente!");
                    }
                }
            }
        }
        else if (resposta == 2)
        {
            int x;
            printf("Digite a chave que quer remover: ");
            scanf(" %d", &x);
            no *temp = removeLista(lista, &n, x, m);
            if (temp != NULL)
            {
                printf("\n Chave removida: %d", temp->chave);
                printf("\n Valor removido: %d", temp->valor);
                printf("\n Posição na lista: %d", (n - 1));
            }
            free(temp);
        }
        else if (resposta == 3)
        {
            imprimeLista(lista, n);
            if (n <= 0)
            {
                printf("\n Lista vazia");
            }
        }
        else if (resposta == 4)
        {
            int x;
            printf("Digite a chave que quer buscar: ");
            scanf(" %d", &x);
            int temp = busca(lista, x, m);
            if (temp == -1)
            {
                printf("\n Valor não encontrado!");
            }
            else
            {
                printf("\n Chave encontrada: %d", lista[temp].chave);
                printf("\n Valor encontrado: %d", lista[temp].valor);
                printf("\n Posição na lista: %d", temp);
            }
        }
    }
}
