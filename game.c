#include "proto.h"

int game()
{
    int i, j, stratNum = 2, id = 0, numConfronte = 10;
    stratFun *stratFunArray = initStratsFunArray(stratNum);
    Strat **stratArray = malloc(sizeof(Strat *) * stratNum);

    for (i = 0; i < stratNum; i++)
    {
        stratArray[i] = initStrat(&id, stratNum, stratFunArray[i]);
    }

    for (i = 0; i < stratNum; i++)
    {
        for (j = 0; j < stratNum; j++)
        {
            confront(numConfronte, stratArray[i], stratArray[j]);
        }
    }

    
    return 1;
}

stratFun *initStratsFunArray(int stratNum)
{
    stratFun *stratFunArray = malloc(sizeof(stratFun) * stratNum);
    stratFunArray[0] = COOPchoose;
    stratFunArray[1] = BETRchoose;
    return stratFunArray;
}
