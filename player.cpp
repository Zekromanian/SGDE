#include "player.h"
#include "RollDice.cpp"

Player::Player(){
  int fish = 0;
  int max_health = 10;
  int risk = 0;
}
Player::Player(int h,string t,int p){
  int fish = 0;
  int max_health = h;
  int risk = 0;
}

void Player::do_battle() {
  if(isSuccessful(1)){
    max_health++;
  }else{
    max_health--;
  }
}

void Player::do_fish() {
  fish++;
}

Player::~Player() {

}
