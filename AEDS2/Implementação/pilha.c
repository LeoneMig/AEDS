#include <stdio.h>
#include <stdlib.h>

typedef struct no_
{
    int chave;
    int valor;
} no;

void imprimePilha(no l[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("\n Chave: %d", l[i].chave);
        printf("\n Valor: %d\n", l[i].valor);
        if (i == n){
            printf("Este é o topo da Pilha!");
        }
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

int inserePilha(no l[], int *n, int m, no x)
{

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

no *removePilha(no l[], int *n, int x, int m)
{
    int indice = -1;
    no *no_retorno = NULL;
    if (*n != -1)
    
    return no_retorno;
}

int main()
{
    int m;
    printf("Digite o tamanho da pilha: ");
    scanf(" %d", &m);
    no pilha[m + 1];
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
            if (inserePilha(pilha, &n, m, x) == 1)
            {
                printf("\n Elemento inserido na posição %d", n);
            }
            else
            {
                if (inserePilha(pilha, &n, m, x) == -1)
                {
                    printf("\n Pilha cheia!");
                }
                else
                {
                    if (inserePilha(pilha, &n, m, x) == 0)
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
            no *temp = removePilha(pilha, &n, x, m);
            if (temp != NULL)
            {
                printf("\n Chave removida: %d", temp->chave);
                printf("\n Valor removido: %d", temp->valor);
                printf("\n Posição na pilha: %d", (n - 1));
            }
            free(temp);
        }
        else if (resposta == 3)
        {
            imprimePilha(pilha, n);
            if (n <= 0)
            {
                printf("\n Pilha vazia");
            }
        }
        else if (resposta == 4)
        {
            int x;
            printf("Digite a chave que quer buscar: ");
            scanf(" %d", &x);
            int temp = busca(pilha, x, m);
            if (temp == -1)
            {
                printf("\n Valor não encontrado!");
            }
            else
            {
                printf("\n Chave encontrada: %d", pilha[temp].chave);
                printf("\n Valor encontrado: %d", pilha[temp].valor);
                printf("\n Posição na pilha: %d", temp);
            }
        }
    }

    return 0;
}