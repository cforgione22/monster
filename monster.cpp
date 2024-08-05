//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24
#include "importLibrary.h"
#include "monster.h"


Monster::Monster() {}

Monster::Monster(string n) {
  name = n;
}

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
  heightInFeet = ht;
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

void Monster::setClaws(bool nails)
{
  claws = nails;
}
string Monster::getName()
{
  return name;
}

void Monster::displayInfo()
{
  cout << "                               ᄽ❮ȍ∷ő❯ᄿ    Guess the Monster!    ᄽ❮ȍ∷ő❯ᄿ        \n\n\n\n";
  cout << "Food: " << food << endl;
  cout << "Unique Characteristic: " << uniqueCharacteristic << endl;
  cout << "Sounds: " << sound << endl;
  cout << "Height: " << heightInFeet << " feet" << endl;
  cout << "Wing: " << wings << endl;
  cout << "Pale: " << pale << endl;
  cout << "Hybernate: " << hybernate << endl;
  cout << "Claws: " << claws << endl;
}

