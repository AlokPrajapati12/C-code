                                             //CASINO GAME
#include<iostream>
#include<ctime>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Casino{
    private:
    int computerGeneratedNumber,defficultyLevel,attempt,MaxAttempt,winnings;  // Declears instance variable
    public:
     Casino(int);  // Define parameterase constructor to inislize defficulty
     void play();// Define a method Play the Game!!!

};
Casino::Casino(int defficultyLevel):defficultyLevel(defficultyLevel){ //Define parameterase constructor to inislize defficulty
        attempt=0;
        winnings=0;
        switch(defficultyLevel){
            case 1:  //Easy
              MaxAttempt = 10;
              computerGeneratedNumber = rand()%10+1; // 1 to 10
              winnings = 20; //$20 for easy 
              break;
            case 2:  //Medium
               MaxAttempt = 6;
               computerGeneratedNumber = rand()%20+1;  // 1 to 20 
               winnings = 40; //$40 for medium
               break;
            case 3:
                MaxAttempt = 3;
                computerGeneratedNumber = rand()%30+1; //1 to 30
                winnings = 60 ; //$60 for Hard
                 break;
            default:
                cout<<"Invalid Defficulty Level!!!!!"<<endl;  
                  exit(0);      
         }
}
void Casino::play(){
        cout<<"Guess the number (between 1 to "<< ((defficultyLevel==1) ? 10: (defficultyLevel==2) ?20:30)<<" )"<<endl;
         while(attempt < MaxAttempt){
            int Guess;
            cout<<"Attempt "<<(attempt+1)<<"/"<<MaxAttempt<<" : ";
            cin>>Guess;
            attempt++;
            if(Guess == computerGeneratedNumber){
                cout<<"Congratulations!! You've to guessed right number ! You Win $"<<winnings<<endl;
                return;
            }else if(Guess>computerGeneratedNumber)
              cout<<"Too high !"<<endl;
            else
              cout<<"Too low !"<<endl; 
         }
         cout<<"Sorry! You've used all your attempts. The number was "<<computerGeneratedNumber<<"."<<endl;
     }
int main(){
   srand(static_cast<unsigned int>(time(0)));
   int defficulty;
    cout<<"==============================================================================="<<endl;
    cout<<"    CCCCC        A        SSSSSSSSS    IIIIIIIIII   NN      N     OOOOOOOOOO        "<<endl;
    cout<<"   CC           A A       SS               II       N N     N     OO      OO        "<<endl;
    cout<<"  CC           A   A      SS               II       N  N    N     OO      OO        "<<endl;
    cout<<"  CC          AAAAAAA     SSSSSSSSS        II       N   N   N     OO      OO        "<<endl;
    cout<<"  CC         A       A           SS        II       N    N  N     OO      OO        "<<endl;
    cout<<"   CC       A         A          SS        II       N     N N     OO      OO        "<<endl;
    cout<<"    CCCCC  A           A  SSSSSSSSS    IIIIIIIIII   N      NN     OOOOOOOOOO        "<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<endl;
    cout << "------------------Welcome to the Casino Number Guessing Game!-----------------------" <<endl;
    cout << "------------Select difficulty level (1 - Easy, 2 - Medium, 3 - Hard):---------------"<<endl;
    cin>>defficulty;
     Casino game(defficulty); // object created of Casino class
     game.play();   // call the mathod to play to game
   return 0;
}
