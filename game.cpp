#include "game.h"
#include "entity.h"
#include "player.h"
#include <chrono>
#include <thread>
#include <stdlib.h>

extern bool isSuccessful(int num);

Game::Game() {

	// Intro
	system("clear");
	printAsSpeech("Welcome to Extreme Fishing Simulator 2019");
	printAsCommand("Please enter your name as a string.");

	// Declaration of person entity
	Player player(10,"Player",1);
	getline(std::cin, playername);
	player.set_name(playername);

	// Running the game
	getInput(0,player);
	system("clear");
	puts("You are dead");
}

// this was gonna type bit by bit if time worked but ceebs
void Game::printAsSpeech(std::string text_input) {
	std::cout << std::endl << "\t";
	std::cout << text_input << std::endl;
}

// For important looking messages
void Game::printAsCommand(std::string text_input) {
	std::cout << "\t>> " + text_input + " <<" << std::endl;
}

void Game::getInput(int type, Player p) {

	Entity *creatures = new Entity[10];

	//Different input menus for types.
	// Type 0 is fishing/default
	// - can fish or pay fish to enter Battle
	// - will show Player stats

	//Type 1 is Battle encounter screen
	// - can use commands to do attacks
	// - can pay fish to forfeit or can win/lose and die/survive

	valid = false;
	exit = false;
	string subheading = "";
	do {
		do {
			if(type == 0) {
				system("clear");
				printAsSpeech("You are on the jetty.\n");
				puts("\n\t\t      \":\"");
				puts("\t\t    ___:____     |\"\\/\"|");
				puts("\t\t  ,'        `.    \\  /");
				puts("\t\t  |  O        \\___/  |");
				puts("\t\t~^~^~^~^~^~^~^~^~^~^~^~^~\n");
				printAsCommand("ENTER = cast your fishing line.");
				printAsCommand("b = Battle a ocean monster ");
				printAsCommand("e = Exit game");
				puts("\n");
				p.get_stats();
				std::cout << subheading << std::endl;
				getline(std::cin, input);

				if(input == "b") {
					valid = true;
					p.do_battle();
					// Check if player is still alive
					if(p.get_health()<=0) {
							valid = true;
							exit = true;
					}
					subheading = "Was hit by "+creatures[(p.get_fish()%9)].get_name();
				} else
				if (input == "e") {
					valid = true;
					exit=true;
				} else
				if (input == "") {
					valid = true;
					if(isSuccessful(1) == true){
						p.do_fish();
						subheading = "Caught a fish";
						if(p.get_health()<=0) {
							valid = true;
							exit = true;
						}
					}else{
						p.do_battle();
						// Check if player is still alive
						if(p.get_health()<=0) {
							valid = true;
							exit = true;
						}
						subheading = "Was hit by "+creatures[(p.get_fish()%9)].get_name();
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