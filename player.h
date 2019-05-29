#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player : public Entity {
	private:
		int fish;
		int max_health;
		int risk;
	public:
		//Constructors
		Player();
		Player(int h, string name,int power);
		//Actions
		void do_fish();
		void do_battle();
		//Destructor
		~Player();
};

#endif
