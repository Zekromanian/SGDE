#include "entity.h"

Entity::Entity() {
  alive = true;
  hp = 10;
  name = "Angry Ocean Monster";
  strength = 1;
}

Entity::Entity(int health, string title, int power) {
  alive = true;
  hp = health;
  name = title;
  strength = power;
}

bool Entity::do_attack(int damage, Entity target) {
  int dealt_dmg = damage*strength;
  int new_target_hp = (target.get_health()-dealt_dmg);
  if(new_target_hp > 0) {
    target.set_health(new_target_hp);
    std::cout << "Dealt " << dealt_dmg << " damage. " << target.get_name() << " has " << new_target_hp << " HP remaining." << std::endl;
    return false;
  } else {
    target.set_health(0);
    std::cout << "Dealt " << dealt_dmg << " damage. " << target.get_name() << " is dead!" << std::endl;
    return true;
  }
}

int Entity::get_health() {
  return hp;
}

int Entity::get_strength() {
  return strength;
}

string Entity::get_name() {
  return name;
}

void Entity::set_health(int health) {
  hp = health;
}

void Entity::set_name(string title) {
  name = title;
}

void Entity::set_strength(int power) {
  strength = power;
}

Entity::~Entity() {

}
