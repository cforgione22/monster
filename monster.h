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
    string name;
    string food;
    string uniqueCharacteristic;
    string sound;
    double heightInFeet;
    bool wings;
    bool pale;
    bool hybernate;
    bool claws;
  public:
    Monster();
    Monster(string);
    void setFood(string);
    void setUniqueCharacteristic(string);
    void setSound(string);
    void setName(string);
    void setHeight(double);
    void setWings(bool);
    void setPale(bool);
    void setHybernate(bool);
    void setClaws(bool);
    string getName();
    void displayInfo();
};

#endif