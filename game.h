#ifndef GAME_H
#define GAME_H
#include <string>
#include "player.h"

class Game {
  private:
    std::string input;
    bool exit;  //Exit text input
    bool valid; //Is text input valid
    std::string playername;
  public:
    //Constructor
    Game();
    //Actions
    void printAsSpeech(std::string text_input); // Spits out text in a digestible format.
    void printAsCommand(std::string text_input); //Spits out text as a call to action.
    void getInput(int type, Player p); // Input handler Type 0 - Fish, Type 1 - Encounter
    //Destructor
    ~Game();
};

#endif
