#include <iostream>     /* Input,Output */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;


int rollDie(int chanceBoost)
{
    //sets random seed so the result changes each time
    srand (time(NULL));

    int result = rand() % 100 + 1 + chanceBoost;
    if (result > 100)
        result = 100;
    return result;
}

/*int main()
{
    int chanceBoost = 100;
    for (int i = 0; i < 50; i++)
    {
        cout << rollDie(chanceBoost) << endl;
    }
}
*/

bool isSuccessful(int value)
{
    //sets random seed so the result changes each time
    srand (time(NULL));

    if (rollDie(value) > 60)
        return true;
    else
        return false;
}