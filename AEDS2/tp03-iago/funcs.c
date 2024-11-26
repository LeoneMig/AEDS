#include <stdlib.h>
#include <stdio.h>
#include "funcs.h"

player *insere(player *player_list, player *n)
{
    if (player_list == NULL)
    {
        return n;
    }
    else
    {
        player_list->next = insere(player_list->next, n);
    }
    return player_list;
}

player *alocar(player leitor)
{
    player *n = malloc(sizeof(player));
    n->name = leitor.name;
    n->position = leitor.position;
    n->club = leitor.club;
    n->nature = leitor.nature;
    n->age = leitor.age;
    n->next = NULL;
    return n;
}

void criaBD(player *player_list)
{
    FILE *readFile = fopen("jogadores.csv", "r");
    player leitor;
    player *n = malloc(sizeof(player));

    while (fscanf(readFile, "%c,%c,%c,%c,%d", &leitor.name, &leitor.position, &leitor.nature, &leitor.club, &leitor.age) != EOF)
    {
        player *new_player = alocar(leitor);
        player_list = insere(player_list, new_player);
    }
    fclose(readFile);
}