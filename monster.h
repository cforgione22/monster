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
    double height;
    bool wings;
    bool pale;
    bool hybernate;
  pubic:
    Monster();
    void setFood(string);
    void setUniqueCharacteristic(string);
    void setSound(string);
    void setHeight(double);
    void setWings(bool);
    void setPale(bool);
    void setHybernate(bool);
    void displayInfo();
};

#endif