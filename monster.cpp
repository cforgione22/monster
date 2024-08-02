//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"
#include "monster.h"


Monster::Monster() {}

void Monster::setFood(string fd)
{
  food = fd;
}

void Monster::setUniqueCharacteristic(string uniqueChar)
{
  uniqueCharacteristic = uniqueChar;
}

void Monster::setSound(string noise)
{
  sound = noise;
}

void Monster::setHeight( double ht)
{
  height = ht;
}
void Monster::setWings(bool wing)
{
  wings = wing;
}
    
void Monster::setPale(bool pl)
{
  pale = pl;
}

void Monster::setHybernate(bool hyber)
{
  hybernate = hyber;
}


void Monster::displayInfor()
{
  cout<< "Food: " << food << end;
  cout<< "Unique Characteristic: " << uniqueCharacteristic << end;
  cout<< "Sounds: " << sound << end;
  cout<< "Height: " << height  << end;
  cout<< "Wing: " << wings << end;
  cout<< "Pale: " << pale << end;
  cout << "Hybernate: " << hybernate << endl;
}
