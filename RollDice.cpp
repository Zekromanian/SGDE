#include <iostream>     /* Input,Output */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int rollDie(int chanceBoost)
{
    //sets random seed so the result changes each time

    int result = rand() % 100 + 1 + chanceBoost;
    if (result > 100)
        result = 100;
    return result;
}

bool isSuccessful(int value)
{
    //sets random seed so the result changes each time

    if (rollDie(value) > 30)
        return true;
    else
        return false;
}