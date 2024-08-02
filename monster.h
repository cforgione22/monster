//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"

#ifndef MONSTER_H
#define MONSTER_H

class Monster 
{
  private:
    string food;
    string uniqueCharacteristic;
    string sound;
    double heightInFeet;
    string wings;
    string pale;
    string hybernate;
    string claws;
  public:
    Monster();
    void setFood(string);
    void setUniqueCharacteristic(string);
    void setSound(string);
    void setHeight(double);
    void setWings(string);
    void setPale(string);
    void setHybernate(string);
    void setClaws(string);
    void displayInfo();
};

#endif