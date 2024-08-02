//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"

TheCreeper::TheCreeper(){}

void TheCreeper::setReasonForHumanConsumption(string humanConsump)
{
  ReasonForHumanConsumption = humanConsump;
}

void TheCreeper::displayInfo()
{
  cout << "Reason for Human Consumption: " << reasonForHumanConsumption << endl;
}