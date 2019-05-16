#ifndef ENTITY_H
#define ENTITY_H

#include <string>
using namespace std;

class entity {
    private:
        bool alive;
        int hp;
        string name;
        int strength;
    public:
        entity();
        entity(int health, string title, int power);
        void attack(int damage);
        void takeDamage(int damage);
        int getHealth();
        string getName();
        int getStrength();
        void setHealth(int health);
        void setName(string title);
        ~entity();
};

#endif