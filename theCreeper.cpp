//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"
#include "theCreeper.h"


TheCreeper::TheCreeper() {}

void TheCreeper::setReasonForHumanConsumption(string humanConsump)
{
  reasonForHumanConsumption = humanConsump;
}

void TheCreeper::displayInfo()
{
  cout << "Reason for Human Consumption: " << reasonForHumanConsumption << endl;
}