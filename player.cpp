#include <string>

#include <string>


player::player(){
	PName = "Null";
	Health = 100;
}

player::player(string inputName){
	PName = inputName;
	Health = 100;
}

player::playerHealthCheck(){
	return Health;
}

player::playerHealthMinus(int number){
	Health = Health - number;
}

player::playerHealthAdd(int number){
	Health = Health + number;
}
