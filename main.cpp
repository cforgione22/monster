//Crystal Forgione
//FINAL
//24.SU.CIS.1202.201
//08-04-24

#include "importLibrary.h"

void instructions();

int main()
{
  
instructions();
  
  return 0;
}

void instructions()
{
  cout << "                            ᄽ❮ȍ∷ő❯ᄿ   Welcome to Guess The Monster Game!   ᄽ❮ȍ∷ő❯ᄿ\n\n\n\n";
  cout << "\nFor this game you will be guessing which monster is given to you by reading the hints.";
  cout << "\n\nMONSTERS:";
  cout << "\n\n1. Frankenstein";
  cout << "\n2. Werewolf"; 
  cout << "\n3. The Creeper";
  cout << "\n4. Vampire\n\n";
  cout << "\nINSTRUCTIONS: \n\n1. You will be given hints to guess a monster. \n2. After every hint you will be given the opportunity to guess the monster or you can hit enter to get another hint.\n3. If you guess incorrectly you can continue with more hints and guess again.\n4. If you don't get the monster correct after the last hint, you will be told the correct monster.\n";

  cout << "\n\n\n ᄽ❮ȍ∷ő❯ᄿ  Press enter to begin!";
  cin.get();
  system("clear"); 
}

