#include "proto.h"

void confront(int numConfronte, Strat *strat1, Strat *strat2);
void test(Strat *strat1, Strat *strat2);
Strat *initStrat(int *currId, int adversory, int (*stratChosen)(void));