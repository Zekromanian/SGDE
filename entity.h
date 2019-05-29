#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>
using namespace std;

class Entity {
    private:
        bool alive;
        int hp;
        string name;
        int strength;
    public:
        //Constructors
        Entity();
        Entity(int health, string title, int power);
        //Actions
        bool do_attack(int damage, Entity target); // Returns true if attack kills the target
        //Status Methods
        int get_health();
        string get_name();
        int get_strength();
        void get_stats();
        //Set Value Methods
        void set_health(int health);
        void set_name(string title);
        void set_strength(int power);
        //Destructor
        ~Entity();
};

#endif
