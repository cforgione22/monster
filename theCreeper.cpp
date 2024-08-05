//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"
#include "theCreeper.h"


TheCreeper::TheCreeper() : Monster("THE CREEPER") {
}

void TheCreeper::setReasonForHumanConsumption(string humanConsump)
{
  reasonForHumanConsumption = humanConsump;
}

void TheCreeper::displayInfo()
{
  Monster::displayInfo();
  cout << "Reason for Human Consumption: " << reasonForHumanConsumption << endl;
}