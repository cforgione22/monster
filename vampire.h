//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"

#ifndef VAMPIRE_H
#define VAMPIRE_H

class Vampire : public Monster
{
  private:
    string pale;
    double windSpan;
  public:
    Vampire();
    void setPale(string);
    void setWingSpan(double)
};

#endif