#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

void main()
{
    int linha_e, coluna_e, linha_s, coluna_s, escolha;

    printf("Escolha qual labirinto deseja resolver: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        char labirinto1[10][10];
        char lab1[15] = "labirinto1.txt";
        completa_lab(labirinto1, lab1);
        identifica(&linha_e, &coluna_e, &linha_s, &coluna_s, labirinto1);
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("%c  ", labirinto1[i][j]);
            }
            printf("\n");
        }
        printf("\nPosição de E: [%d][%d]\n", linha_e, coluna_e);
        printf("Posição de S: [%d][%d]\n", linha_s, coluna_s);
        break;
    case 2:
        char labirinto2[10][10];
        char lab2[15] = "labirinto2.txt";
        completa_lab(labirinto2, lab2);
        identifica(&linha_e, &coluna_e, &linha_s, &coluna_s, labirinto2);
        break;
    case 3:
        char labirinto3[10][10];
        char lab3[15] = "labirinto3.txt";
        completa_lab(labirinto3, lab3);
        identifica(&linha_e, &coluna_e, &linha_s, &coluna_s, labirinto3);
        break;
    case 4:
        char labirinto4[10][10];
        char lab4[15] = "labirinto4.txt";
        completa_lab(labirinto4, lab4);
        identifica(&linha_e, &coluna_e, &linha_s, &coluna_s, labirinto4);
        break;
    case 5:
        char labirinto5[10][10];
        char lab5[15] = "labirinto5.txt";
        completa_lab(labirinto5, lab5);
        identifica(&linha_e, &coluna_e, &linha_s, &coluna_s, labirinto5);
        break;
    case 0:
        break;
    }
}