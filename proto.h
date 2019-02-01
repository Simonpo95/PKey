#ifndef PROTO
#define PROTO

#include <stdlib.h>
#include <stdio.h>

typedef struct Strat
{
    int id;
    int *results;
    int (*choose)(void);
} Strat;
typedef int (*stratFun)(void);

#include "strats/cooperative.h"
#include "strats/betrayer.h"
#include "functions.h"
#include "game.h"

#endif
