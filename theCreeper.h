//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"

#ifndef THECREEPER_H
#define THECREEPER_H

class TheCreeper : public Monster
{
  private:
    string reasonForHumanConsumption;
    
  public:
    TheCreeper();
    void setReasonForHumanConsumption(string);
    void displayInfo();
};

#endif