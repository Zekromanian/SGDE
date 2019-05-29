#include "game.h"
#include "entity.h"
#include "player.h"
#include <chrono>
#include <thread>
#include <stdlib.h>

extern bool isSuccessful(int num);


Game::Game() {

	// Intro
	system("cls");
	printAsSpeech("Welcome to Extreme Fishing Simulator 2019");
	printAsCommand("Please enter your name as a string.");

	// Declaration of person entity
	Player player(10,"Player",1);
	getline(std::cin, playername);
	player.set_name(playername);
	printAsSpeech(player.get_name());
	getInput(0,player);
	//couldn't figure out how to do this with pointers
}

// this was gonna type bit by bit if time worked but ceebs
void Game::printAsSpeech(std::string text_input) {
	std::cout << std::endl << "\t";
	//std::this_thread::sleep_for(std::chrono::milliseconds(300));
	//std::cout << ".";
	//std::this_thread::sleep_for(std::chrono::milliseconds(300));
	//std::cout << ".";
	//std::this_thread::sleep_for(std::chrono::milliseconds(300));
	//std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << text_input << std::endl;
}

// For important looking messages
void Game::printAsCommand(std::string text_input) {
	std::cout << "\t>> " + text_input + " <<" << std::endl;
}

void Game::getInput(int type, Player p) {

	//Different input menus for types.
	// Type 0 is fishing/default
	// - can fish or pay fish to enter Battle
	// - will show Player stats

	//Type 1 is Battle encounter screen
	// - can use commands to do attacks
	// - can pay fish to forfeit or can win/lose and die/survive

	valid = false;
	exit = false;
	const char* subheading = "";
	do {
		do {

			// Code to do if input type is 0 (fishing)
			if(type == 0) {
				system("cls");
				printAsSpeech("You are on the jetty.\n");
				puts("\n\t\t      \":\"");
				puts("\t\t    ___:____     |\"\\/\"|");
				puts("\t\t  ,'        `.    \\  /");
				puts("\t\t  |  O        \\___/  |");
				puts("\t\t~^~^~^~^~^~^~^~^~^~^~^~^~\n");
				printAsCommand("ENTER = cast your fishing line.");
				printAsCommand("b = Battle a ocean monster ");
				printAsCommand("e = Exit game");
				puts(subheading);
				getline(std::cin, input);

				if(input == "s") {
					valid = true;
					subheading = "Your stats are good.";
					// Get player stats
				} else
				if (input == "e") {
					valid = true;
					exit=true;
				} else
				if (input == "") {
					valid = true;
					if(isSuccessful(rand()) == true){
						p.do_fish();
					}else{
						p.do_battle();
					}


				} else
				{
					valid = false;
					subheading = "Invalid input.";
				}
			}
		} while (!valid);
	} while (!exit);
}

Game::~Game() {

}
