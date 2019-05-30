#include "player.h"


extern bool isSuccessful(int num);
extern int rollDie(int chanceBoost);

Player::Player() : Entity(10, "Player", 1){
  fish = 0;
  max_health = 10;
  risk = 0;
  std::cout << "CREATED A PLAYER" << endl;
}
Player::Player(int h,string t,int p) : Entity(10, "Player", 1) {
  fish = 0;
  max_health = h;
  risk = 0;
}

void Player::do_battle() {
  if(isSuccessful(rollDie(4))){
    int newhp = (get_health())-1;
    set_health(newhp);
  }else{
    int newhp = (get_health())+1;
    set_health(newhp);
  }
}

void Player::do_fish() {
  fish++;
}

void Player::get_stats() {
  std::cout << "Fish: " << fish << "\tHealth: " << get_health() << "/" << max_health << std::endl;
}

int Player::get_fish() {
  return fish;
}


Player::~Player() {

}
