#include "game.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>

Game::Game() {
	system("cls");
	printAsSpeech("Welcome to EXTREME Fishing Simulator 2019! 8-)");
	printAsCommand("Please enter your name as a string.");
	std::cin >> playername;
	printAsSpeech("Hello there, " + playername + "!");
	getInput();
}

void Game::printAsSpeech(std::string text_input) {
	std::cout << std::endl << ".";
	//std::this_thread::sleep_for(std::chrono::milliseconds(300));
	std::cout << ".";
	//std::this_thread::sleep_for(std::chrono::milliseconds(300));
	std::cout << ".";
	//std::this_thread::sleep_for(std::chrono::milliseconds(300));
	//std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << text_input << std::endl;
}

void Game::printAsCommand(std::string text_input) {
	std::cout << "!! " + text_input + " !!" << std::endl;
}

void Game::getInput() {

	valid = false;
	exit = false;
	const char* subheading = "";
	do {
		do {
			system("cls");
			puts("\n\n\t\t      \":\"");
			puts("\t\t    ___:____     |\"\\/\"|");
			puts("\t\t  ,'        `.    \\  /");
			puts("\t\t  |  O        \\___/  |");
			puts("\t\t~^~^~^~^~^~^~^~^~^~^~^~^~\n\a");
			puts("\t You are on the EXTREME jetty!");
			puts("Hit ENTER to farm. Enter s to see stats or enter e to exit.");
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
				subheading = "1 wood farmed!";
			} else
			{
				valid = false;
				subheading = "Invalid input.";
			}

		} while (!valid);
	} while (!exit);
}

Game::~Game() {

}
