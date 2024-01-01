#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <ctime>
using namespace std;


int main() {
  srand(time(NULL)); //to generate random number every single time
  int player = 0;
  int computer =0;

  cout << "Welcome to Rock Paper Scissors!!" << endl;
  cout << "Enter 1 to select Rock" << endl;
  cout << "Enter 2 to select Paper" << endl;
  cout << "Enter 3 to select Scissors" << endl;

  // Taking input from the user
  cin >> player;
  if(player==1){
    cout << "You choose Rock"<<endl;
  }
  else if(player==2){
    cout << "You choose Paper"<<endl;
  }
  else{
    cout << "You choose Scissors"<<endl;
  }

  // Generating random number by the computer
  computer = rand()%3+1;
  if(computer==1){
    cout << "Computer choose Rock"<<endl;
  }
  else if(computer==2){
    cout << "Computer choose Paper"<<endl;
  }
  else{
    cout << "Computer choose Scissors"<<endl;
  }

  // For tie
  if(computer==player){
    cout << "It's a tie!" <<endl;
  }

  // Player choose rock
  else if(player==1){
    if(computer==2){
      cout << "Computer Won!" <<endl;
    }
    if(computer==3){
      cout << "You Won!" <<endl;
    }
  }

  // Player choose paper
  else if(player==2){
    if(computer==1){
      cout << "You Won!" <<endl;
    }
    if(computer==3){
      cout << "Computer Won!" <<endl;
    }
  }

  // Player choose scissor
  else if(player==3){
    if(computer==1){
      cout << "Computer Won!" <<endl;
    }
    if(computer==2){
      cout << "You Won!" <<endl;
    }
  }
  
  return 0;
}