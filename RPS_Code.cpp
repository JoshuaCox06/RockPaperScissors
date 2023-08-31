#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
  int playerChoice, computerChoice;

  //Player Chooses Option  
  do {
    cout<< "Choose one of the following choices: 1-Rock   2-Paper   3-Scissors"<<println;
    cin>> playerChoice;

    if(playerChoice < 1 || playerChoice > 3){
      cout<<prinln<<"Choice is invalid. Choose again:";
    }
  } while (playerChoice != 1 || playerChoice != 2 || playerChoice != 3);

  //Computer Chooses Option
  computerChoice = rand() % 3 + 1;

  //Choices are compared and Winner is determined
  if (playerChoice == computerChoice){
    cout<< "Game is a Draw."<<println;
  } else {
    if (playerChoice == 1 && computerChoice == 3 || playerChoice == 2 && computerChoice == 1 || playerChoice == 3 && computerChoice == 2){
      cout<< "Player has beaten the Computer"<<println;
    } else {
      if (playerChoice == 1 && computerChoice == 2 || playerChoice == 2 && computerChoice == 3 || playerChoice == 3 && computerChoice == 1){
        cout<< "The Computer has beaten the Player"<<println;
      }
    }
  }

  return 0;
}
