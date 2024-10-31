#include <stdio.h>
#include <stdlib.h>

typedef struct no_
{
    int id;
    struct no_ *left;
    struct no_ *right;
} no;

no *insere(no *ptraiz, no *n){
    if(ptraiz == NULL){
        return n;
    }
    if(ptraiz->id > n->id){
        ptraiz->left = insere(ptraiz->left, n);
    }else 
        ptraiz->right = insere(ptraiz->right, n);

    return ptraiz;
}
no *alocarNo(){
    int a;
    no *n = malloc(sizeof(no));
    printf("ID a ser inseiro: ");
    scanf(" %d", &a);
    n->id = a;
    n->left = NULL;
    n->right = NULL;
    return n;
}

no *busca(no *ptraiz, int x){
    if(ptraiz == NULL){
        return NULL;
    }else {
    if(ptraiz->id == x){
        return ptraiz;
    }
    if(ptraiz->id > x){
        return busca(ptraiz->left, x);
    }else 
        return busca(ptraiz->right, x);
    }
}

no *buscaPai(no *ptraiz, no *n)
{
    if (ptraiz == NULL || ptraiz == n)
        return NULL;
    if (ptraiz->left == n || ptraiz->right == n)
        return ptraiz;
    if (n->id < ptraiz->id)
        return buscaPai(ptraiz->left, n);
    else
        return buscaPai(ptraiz->right, n);
}

void desalocarArvore(no *raiz)
{
    if (raiz != NULL)
    {
        if (raiz->left != NULL)
            desalocarArvore(raiz->left);
        if (raiz->right != NULL)
            desalocarArvore(raiz->right);
        free(raiz);
    }
}

void imprimirPreOrdem(no *raiz)
{
    if (raiz != NULL)
    {
        printf("%d => ", raiz->id);
        if (raiz->left != NULL)
            imprimirPreOrdem(raiz->left);
        if (raiz->right != NULL)
            imprimirPreOrdem(raiz->right);
    }
}

void imprimirEmOrdem(no *raiz)
{
    if (raiz != NULL)
    {
        if (raiz->left != NULL)
            imprimirEmOrdem(raiz->left);
        printf("%d => ", raiz->id);
        if (raiz->right != NULL)
            imprimirEmOrdem(raiz->right);
    }
}

void imprimirPosOrdem(no *raiz)
{
    if (raiz != NULL)
    {
        if (raiz->left != NULL)
            imprimirPosOrdem(raiz->left);
        if (raiz->right != NULL)
            imprimirPosOrdem(raiz->right);
        printf("%d => ", raiz->id);
    }
}

no *removeRaiz(no *ptraiz){
    if(ptraiz->left == NULL){
        no *aux = ptraiz->right;
        free(ptraiz);
        return aux;
    }
    if(ptraiz->right == NULL){
        no *aux = ptraiz->left;
        free(ptraiz);
        return aux;
    }
    no *p = ptraiz;
    no *q = ptraiz->left;
    while(q->right != NULL){
        p = q;
        q = q->right;
    }
    if(p != ptraiz){
        p->right = q->left;
        q->left = ptraiz->left;
    }
    q->right = ptraiz->right;
    free(ptraiz);
    return q;
}

no *removeNo(no *ptraiz, int x){
    no *n = busca(ptraiz, x);
    if(n != NULL){
        no *pai = buscaPai(ptraiz, n);
        if(pai != NULL){
            if(pai->right == n){
                pai->right = removeRaiz(n);
            }else{
                pai->left = removeRaiz(n);
            }
        }else{
            ptraiz = removeRaiz(n);
        }
    }
    return ptraiz;
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

int main()
{
    int resposta = 1;
    no *ptraiz = NULL;

    while (resposta)
    {
        ler_menu(&resposta);

        if (resposta == 0)
        {

            desalocarArvore(ptraiz);
        }
        else if (resposta == 1)
        {

            no *novoNo = alocarNo();
            if (busca(ptraiz, novoNo->id) == NULL)
            {
                ptraiz = insere(ptraiz, novoNo);
            }
            else
            {
                printf("\n Ja existe no com esse valor!");
            }
        }
        else if (resposta == 2)
        {

            int x;
            printf("\n Digite o valor que quer remover: ");
            scanf("%d", &x);
            ptraiz = removeNo(ptraiz, x);
        }
        else if (resposta == 3)
        {
            int ordem;
            printf("escolha a maneira de imprimir:\n");
            printf("1 - pre-ordem\n");
            printf("2 - em-ordem\n");
            printf("3 - pos-ordem\n");
            scanf("%d", &ordem);
            printf("-----------------------\n\n");

            printf("Arvore: ");
            switch (ordem)
            {
            case 1:
                imprimirPreOrdem(ptraiz);
                break;
            case 2:
                imprimirEmOrdem(ptraiz);
                break;
            case 3:
                imprimirPosOrdem(ptraiz);
                break;

            default:
                printf("Opção inválida\n");
                break;
            }
        }
        else
        {

            printf("Opção inválida\n");
        }
    }

    return 0;
}