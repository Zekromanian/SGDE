#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <chrono>
#include <thread>

//#include <Windows.h>

int gameArray[5][5];
bool GameRunning = false;


void clearArray(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            gameArray[i][j] = 0;
        }
    }
}
void printArray(){
    std::cout << "-------------------------------" << std::endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j == 4){
                std::cout << " " << gameArray[i][j] << std::endl;
            }else{
                std::cout << " " << gameArray[i][j] << " ";
            }
        }
     }
    std::cout << "-------------------------------" << std::endl;
}

void PlacePlant(){
    int x;
    int y;

    std::cout << "X Position: ";
    std::cin >> x;
    std::cout << "Y Position: ";
    std::cin >> y;

    gameArray[y][x] = 7;

}
void RandomZombieSpawn(){
    int spawn = rand() % 5;

    gameArray[spawn][0] = 5;
}

void game(){
    GameRunning = true;
    clearArray();
    printArray();

    while(GameRunning = true){

        //if(GetKeyState(VK_TAB) & 0x09){
         //   GameRunning = false;
        //}

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        system("clear");
        
        printArray();
    }
    
}