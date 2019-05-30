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
		void get_stats();
		void do_fish();
		void do_battle();
		int get_fish();
		int get_max_health();
		int get_risk();
		//Destructor
		~Player();
};

#endif
