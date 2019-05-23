#ifndef GAME_H
#define GAME_H
#include <string>

class Game {
  private:
    std::string input;
    bool exit;  //Exit text input
    bool valid; //Is text input valid
    std::string playername;
  public:
    Game(); // Create new game instance.
    void printAsSpeech(std::string text_input); // Spits out text in a digestible format.
    void printAsCommand(std::string text_input); //Spits out text as a call to action.
    void getInput(); // Input handler
    ~Game();
};

#endif
