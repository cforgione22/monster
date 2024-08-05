//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24

#include "importLibrary.h"
#include "monster.cpp"
#include "monster.h"
#include "frankenstein.cpp"
#include "frankenstein.h"
#include "werewolf.cpp"
#include "werewolf.h"
#include "vampire.cpp"
#include "vampire.h"
#include "theCreeper.cpp"
#include "theCreeper.h"

void instructions();


Frankenstein createFrankenstein();
Werewolf createWerewolf();
Vampire createVampire();
TheCreeper createTheCreeper();
void guessMonster(string);

int main()
{  

  instructions();

  //random numbers used as index
  srand((unsigned)time(0)); 
  int i = (rand()%4)+0; //math operation

  //class vector 
  vector<Monster> monsters;
  monsters.push_back(createFrankenstein());
  monsters.push_back(createWerewolf());
  monsters.push_back(createVampire());
  monsters.push_back(createTheCreeper());

  //picking random monster info
  monsters[i].displayInfo();
  guessMonster(monsters[i].getName());

  
  return 0;
}

void instructions()
{
  cout << "                            ᄽ❮ȍ∷ő❯ᄿ  Welcome to Guess The Monster Game!   ᄽ❮ȍ∷ő❯ᄿ\n\n\n";
  cout << "\nFor this game you will be guessing which monster is given to you by reading the hints.";
  cout << "\n.....For some of the answers 1's = yes and 0's = no.";
  cout << "\n\nMONSTERS:";
  cout << "\n\n1. Frankenstein";
  cout << "\n2. Werewolf"; 
  cout << "\n3. The Creeper";
  cout << "\n4. Vampire\n\n";
  cout << "\nINSTRUCTIONS: \n\n1. You will be given hints to guess a monster.";
  cout << "\n2. Type in the name of the monster to make guesses based on the hints.";

  cout << "\n\n\n ᄽ❮ȍ∷ő❯ᄿ  Press enter to begin!";
  cin.get();
  system("clear"); 
}

Frankenstein createFrankenstein()
{
  string monster = " ";
  Frankenstein frankenstein;
  
  string fd = "Berries and Nuts";
  string uniqueChar = "has human emotions";
  string noise = "growls";
  double ht = 8;
  bool wing = false;
  bool pl = true;
  bool hyber = false;
  bool nails = true;

  frankenstein.setFood(fd); 
  frankenstein.setUniqueCharacteristic(uniqueChar);
  frankenstein.setSound(noise);
  frankenstein.setHeight(ht);
  frankenstein.setWings(wing);   
  frankenstein.setPale(pl);
  frankenstein.setHybernate(hyber);
  frankenstein.setClaws(nails);
  
  return frankenstein;
}

Werewolf createWerewolf()
{
  Werewolf werewolf;

  string fd = "animals or people";
  string uniqueChar = "speed, strength and can tranform into a human";
  string noise = "howl";
  double ht = 8;
  bool wing = false;
  bool pl = false;
  bool hyber = false;
  bool nails = true;
  werewolf.setFood(fd);
  werewolf.setUniqueCharacteristic(uniqueChar);
  werewolf.setSound(noise);
  werewolf.setHeight(ht);
  werewolf.setWings(wing);   
  werewolf.setPale(pl);
  werewolf.setHybernate(hyber);
  werewolf.setClaws(nails);

  return werewolf; 
}

Vampire createVampire()
{
  Vampire vampire;
  
  string fd = "drink blood";
  string uniqueChar = "speed, strength and can tranform into a bat";
  string noise = "guttural sounds";
  double ht = 9.6;
  bool wing = true;
  bool pl = true;
  bool hyber = false;
  bool nails = false;
  vampire.setFood(fd);
  vampire.setUniqueCharacteristic(uniqueChar);
  vampire.setSound(noise);
  vampire.setHeight(ht);
  vampire.setWings(wing);   
  vampire.setPale(pl);
  vampire.setHybernate(hyber);
  vampire.setClaws(nails);
 
  return vampire;
}

TheCreeper createTheCreeper()
{
  TheCreeper thecreeper;

  string fd = "humans";
  string uniqueChar = "speed, strength";
  string noise = "whistle";
  double ht = 6.8;
  bool wing = true;
  bool pl = false;
  bool hyber = true;
  bool nails = true;
  string humanConsump = "replaces organs that are rotting away on the creature's body.";
  thecreeper.setFood(fd);
  thecreeper.setUniqueCharacteristic(uniqueChar);
  thecreeper.setSound(noise);
  thecreeper.setHeight(ht);
  thecreeper.setWings(wing);   
  thecreeper.setPale(pl);
  thecreeper.setHybernate(hyber);
  thecreeper.setClaws(nails);
  thecreeper.setReasonForHumanConsumption(humanConsump);
  
  return thecreeper;
}

void guessMonster(string name) 
{

  bool correct = false;
  string upperMonster = " ";
  
  cout << "\nTake a guess!";
  cout << "\n\nMonster: ";
  while (!correct) {
    cin >> upperMonster;

    transform(upperMonster.begin(), upperMonster.end(), upperMonster.begin(), ::toupper);
    if (upperMonster == name) {
      correct = true;
    }
    else {
      cout << "\nwrong..Try again.";
       cout << "\n\nMonster: ";
    }
  }

  cout << "\ncorrect!";
}

