#include "proto.h"

void confront(int numConfronte, Strat *strat1, Strat *strat2)
{
    while (numConfronte != 0)
    {
        test(strat1, strat2);
        numConfronte--;
    }
}

void test(Strat *strat1, Strat *strat2)
{
    int cStrat1 = strat1->choose();
    int cStrat2 = strat2->choose();
    if (cStrat1 == 0 && cStrat2 == 0)
    {
        strat1->results[strat2->id] -= 200;
    }
    else if (cStrat1 == 1 && cStrat2 == 1)
    {
        strat1->results[strat2->id] += 300;
    }
    else
    {
        strat1->results[strat2->id] += cStrat1 > cStrat2 ? -400 : 500;
    }
}

Strat *
initStrat(int *currId, int adversory, int (*stratChosen)(void))
{
    int i;
    Strat *strat = malloc(sizeof(Strat));
    strat->id = (*currId)++;
    strat->results = malloc(sizeof(int) * adversory);
    for (i = 0; i < adversory; i++)
        strat->results[i] = 0;
    strat->choose = stratChosen;
    return strat;
}
