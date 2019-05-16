//Main File for Game
#include <iostream>

int PlayerInt = 0;
extern void game();
extern void printArray();
extern void clearArray();


int main(){
    std::cout << "Cookie Presser" << std::endl;
    std::cout << "Type 1 to play, or 0 to exit" << std::endl;

    std::cin >> PlayerInt;

    if(PlayerInt == 1){
        game();
    }else{
        return 0;
    }
}