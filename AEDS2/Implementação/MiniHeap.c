#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 20

int pai(int i){
    return (i-1) / 2;
}

int filhoEsquerda(int i){
    return (2*i) + 1;
}

int filhoDireita(int i){
    return (2*i) + 2;
}

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

void inserir(int chave, int *heapSize, int arvore[]){

    if (CAPACITY == *heapSize)
    {
        printf("\n Sua árvore está cheia");
        return;
    }
    
    int i = (*heapSize);
    (*heapSize)++;
    
    arvore[i] = chave;

    while (i != 0 && arvore[pai(i)] > arvore[i])
    {
        swap(&arvore[i], &arvore[pai(i)]);
        i = pai(i);
    }
    
    return;
}

void ler_menu(int *resposta)
{
    printf("\n-----------------------\n");
    printf("escolha uma das opcoes:\n");
    printf("0 - sair\n");
    printf("1 - inserir\n");
    printf("2 - remover\n");
    printf("3 - imprimir\n");
    scanf("%d", resposta);
    printf("-----------------------\n\n");
}

void trocaRemove(int *heapsize, int arvore[], int i) {
    int l = filhoEsquerda(i);
    int r = filhoDireita(i);
    int small = i;

    if ((l < *heapsize) && (arvore[l] < arvore[i])) {
        small = l;
    }
    if ((r < *heapsize) && (arvore[r] < arvore[small])) {
        small = r;
    }
    if (small != i) {
        swap(&arvore[i], &arvore[small]);
        trocaRemove(heapsize, arvore, small);
    }
}

int remover(int *heapsize, int arvore[]) {
    if (*heapsize == 0) {
        printf("Arvore vazia!\n");
        return -1;
    }

    int removed = arvore[0];
    int x = (*heapsize) - 1;

    if (*heapsize > 1) {
        arvore[0] = arvore[x];
    }
    (*heapsize)--;

    trocaRemove(heapsize, arvore, 0);
    return removed;
}


int main()
{
    int resposta = 1;
    int arvore[CAPACITY];
    int heapSize = 0;

    while (resposta)
    {
        ler_menu(&resposta);

        if (resposta == 0)
        {}
        else if (resposta == 1)
        {
            int valor;
            printf("\n Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            inserir(valor, &heapSize, arvore);
        }
        else if (resposta == 2)
        {
            int aux = remover(&heapSize, arvore);
            if(aux != -1)
                printf("\nRaiz '%d' removida!\n", aux);
            
        }
        else if (resposta == 3)
        {
            printf("\n Árvore : ");
            for (int i = 0; i < heapSize; i++)
            {
                printf("%d => ", arvore[i]);
            }
                printf(" NULL ");
        }
        else
        {

            printf("Opção inválida\n");
        }
    }

    return 0;
}