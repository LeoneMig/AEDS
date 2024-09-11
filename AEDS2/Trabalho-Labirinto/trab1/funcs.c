#include <stdio.h>
#include <stdlib.h>

void completa_lab(char lab[10][10], const char *labirinto)
{
    FILE *arq = fopen(labirinto, "rt");
    if (arq == NULL)
    {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    char c;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            c = fgetc(arq);
            lab[i][j] = c;
        }
        fgetc(arq);
    }

    fclose(arq);
}

void identifica(int *linha_e, int *coluna_e, int *linha_s, int *coluna_s, char lab[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (lab[i][j] == 'E')
            {
                *linha_e = i;
                *coluna_e = j;
            }
            if (lab[i][j] == 'S')
            {
                *linha_s = i;
                *coluna_s = j;
            }
        }
    }
}