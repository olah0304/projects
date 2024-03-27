/* Author: Paul McCafferty and John Grieco
* Date: 3/26/2024
* Description: A fun little text-based game.
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

// CLASS/OBJECT DECLARATION
class playerStats{
    public:
        int intellect = 0;
        int strength = 0;
        double health = 100;
        void damageTaken(int hp, int damageTaken){
            hp - damageTaken;
        }
};

class playerInventory{
    public:
        bool gloves;
        int stuffyWeight = 1.25;
        int stuffy = 0;
        double weight;
};

class playerLocation{
    public:
        bool time[2];
        bool location[5];
};

// CLASS DEFINITIONS
playerStats Stats;
playerInventory Inventory;
playerLocation Location;

// FUNCTION PROTOTYPES
string equalsLowerCase(string str);
int attack(double playerStrength);
void startGame();
void room1();
void room2();
void room3();
void room4();
void room5();
void voidRoom();

int main() {
    cout << fixed << setprecision(2);
    Stats.intellect;
    Stats.strength;
    Stats.health;
    Inventory.gloves = false;
    Inventory.stuffy;
    Inventory.stuffyWeight;
    Location.location[0] = true;
    Location.time[0] = true;
    string move;
    cin >> move;
    equalsLowerCase(move);

    if(move == "start")
        startGame();
    else if (Location.location[0])
        room1();
    else if (Location.location[1])
        room2();
    else if (Location.location[2])
        room3();
    else if (Location.location[3])
        room4();
    else if (Location.location[4])
        room5();
    else if (Location.location[5])
        voidRoom();

    return 0;
}

// FUNCTION DEFINITION
// Grabs input then from user then converts all letters within a string to lowercase.
string equalsLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
// Calculates the attack damage the player deals based on strength.
int attack(double playerStrength) {
    double damage = playerStrength * 0.33;
    return ceil(damage);
}

void startGame(){
    cout << "";

    room1();
}

void room1(){
    string move;
    Location.location[0] = true;
    Location.location[1,2,3,4,5] = false;

    cin >> move;
    equalsLowerCase(move);

}

void room2(){
    string move;
    Location.location[1] = true;
    Location.location[0,2,3,4,5] = false;

    cin >> move;
    equalsLowerCase(move);
}

void room3(){
    string move;
    Location.location[2] = true;
    Location.location[0,1,3,4,5] = false;

    cin >> move;
    equalsLowerCase(move);
}

void room4(){
    string move;
    Location.location[3] = true;
    Location.location[0,1,2,4,5] = false;

    cin >> move;
    equalsLowerCase(move);
}

void room5(){
    string move;
    Location.location[4] = true;
    Location.location[0,1,2,3,5] = false;

    cin >> move;
    equalsLowerCase(move);
}

void voidRoom(){
    string move;
    Location.location[5] = true;
    Location.location[0,1,2,3,4] = false;

    cin >> move;
    equalsLowerCase(move);
}