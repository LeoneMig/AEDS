#ifndef _H_FUNCS
#define _H_FUNCS

typedef struct player_{

    char name[50];
    char position[50];
    char nature[50];
    char club[50];
    int age;
    struct player_* next;

}player;

void criaBD(player *player_list);

#endif // _H_FUNCS