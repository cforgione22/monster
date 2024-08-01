//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"

class Monster 
{
  private:
    string food;
    string sex;
    string weakness;
    string defense;
    string uniqueCharacteristic;
    double height;
  pubic:
    Monster();
    void setFood(string);
    void setSex(string);
    void setWeakness(string);
    void setDefense(string);
    void setUniqueCharacteristic(string);
    void setHeight(double);
    void displayInfor();
};


