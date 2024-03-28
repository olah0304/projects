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
    // Intellect determines crit ratio.
    double intellect = 0;
    // Strength determines player damage.
    double strength = 0;
    // Vigor determines damage taken after blocking.
    double vigor = 0;
    // Dexterity determines how fast the player attacks.
    double dexterity = 0;
    // Agility determines the players chance to dodge.
    double agility = 0;
    // Determination determines if the player gets a second chance.
    double determination = 0;
    // Player health. This can increase based on vigor stat.
    double health = 100;

    // FUNCTION for damage taken by enemy.
    int damageTaken(int hp, int damageTaken){
       return hp - damageTaken;
    }
};

class playerInventory{
public:
    bool gloves;
    double stuffyWeight = 1.25;
    int stuffy = 0;
    double weight;
};

class playerLocation{
public:
    char time;
    int location;
};

// CLASS DEFINITIONS
playerStats Stats;
playerInventory Inventory;
playerLocation Location;

// FUNCTION PROTOTYPES
string equalsLowerCase(string str);
int attack(double playerStrength);
int enemyDamageDealt(double enemyStr, char enemySize);
int enemyHealthPool(double enemyVig, double enemyHP, char enemySize);
bool enemyDodgeChance(double enemyAgl, char enemySize);
bool enemyBlockChance(double enemyVig, char enemySize);
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
    Location.location;
    Location.time;
    string move;

    startGame();

    switch(Location.location){
        case 1:
            room1();
        case 2:
            room2();
        case 3:
            room3();
        case 4:
            room4();
        case 5:
            room5();
        case 6:
            voidRoom();
        default:
            cerr << "There has been an error calling the room functions" << endl;
    }

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
    double playerDmg = playerStrength * 0.33;
    return ceil(playerDmg);
}

// This function calculates how much damage the enemy will deal based on strength and size.
int enemyDamageDealt(double enemyStr, char enemySize){
    double enemyDmg;
    switch(enemySize){
        // Small enemy.
        case 's':
            enemyDmg = enemyStr * 0.21;
            return ceil(enemyDmg);
        // Medium enemy.
        case 'm':
            enemyDmg = enemyStr * 0.255;
            return ceil(enemyDmg);
        // Large enemy.
        case 'l':
            enemyDmg = enemyStr * 0.3;
            return ceil(enemyDmg);
        default:
            cerr << "Function 'enemyDamageDealt' is not functioning properly." << endl;
            return 1;
    }
}

// This function calculates how much Health the enemy has based on size.
int enemyHealthPool(double enemyVig, double enemyHP, char enemySize){
    double enemyHealthResult;
    switch(enemySize){
        // Small enemy.
        case 's':
            enemyHealthResult = enemyVig + 35.0/enemyHP;
            return ceil(enemyHealthResult);
        // Medium enemy.
        case 'm':
            enemyHealthResult = enemyVig + 65.0/enemyHP;
            return ceil(enemyHealthResult);
        // Large enemy.
        case 'l':
            enemyHealthResult = enemyVig + 95.0/enemyHP;
            return ceil(enemyHealthResult);
        default:
            cerr << "Function enemyHealthPool has malfunctioned." << endl;
            return 1;
    }
}

// Determines the dodge chance of an enemy.
bool enemyDodgeChance(double enemyAgl, char enemySize){
    bool dodged;
    int oddsOfDodge;
    switch(enemySize){
        // Small enemy.
        case 's':
            /*oddsOfDodge = rand() % 100 + enemyAgl;
            if (oddsOfDodge >= enemyAgl)
                return dodged = true;
            else
                return dodged = false;*/

        // Medium enemy.
        case 'm':

        // Large enemy.
        case 'l':

        default:
            cerr << "Function enemyDodgeChance has malfunctioned." << endl;
            return 1;
    }
}

// Starts the game.
void startGame(){
    cout << "";

    room1();
}

void room1(){
    string move;
    Location.location = 1;

    cin >> move;
    equalsLowerCase(move);

}

void room2(){
    string move;
    Location.location = 2;

    cin >> move;
    equalsLowerCase(move);
}

void room3(){
    string move;
    Location.location = 3;

    cin >> move;
    equalsLowerCase(move);
}

void room4(){
    string move;
    Location.location = 4;

    cin >> move;
    equalsLowerCase(move);
}

void room5(){
    string move;
    Location.location = 5;

    cin >> move;
    equalsLowerCase(move);
}

void voidRoom(){
    string move;
    Location.location = 6;

    cin >> move;
    equalsLowerCase(move);
}