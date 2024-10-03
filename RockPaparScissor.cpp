#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

char getComputerMove(){
  int move;
  // for random number between 0 to 2 
  srand(time(NULL));
  move=rand() % 3;
  if(move==0)
   return 'p';
  else if(move==1)
   return 's';
  else
   return 'r';
}
int getResult(char player,char computer)
{
    if(player==computer)
     return 0;
    else if(player=='s' && computer=='p')
        return 1;
    else if(player=='p' && computer=='s')
       return -1;
    else if(player=='r' && computer=='s')
      return 1;
    else if(player=='s' && computer=='r')
      return -1;
    else if(player=='p' && computer=='r')
      return 1;
    else
      return -1;
}
int main()
{
    char playerChoice;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"                  ROCK,PAPER AND SCISSOR                "<<endl;
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"------------------------Rules---------------------------"<<endl;
    cout<<"Rock vs. Paper -> Paper wins. \nPaper vs. Scissor -> Scissor wins. \nScissor vs. Rock -> Rock wins."<<endl;
    do{
    cout<<"--------Enter 'A' By Player for Exit the Game!!!!!-------------"<<endl;   
    cout<<"\nEnter Player Choice "<<endl;
      while(1){
        cin>>playerChoice;
        if(playerChoice=='p' || playerChoice=='r' || playerChoice=='s')
          break;
        else if(playerChoice=='A')
             break;
        else
         cout<<"Invalid Choice! Please Enter again!!!"<<endl;  
        }
       if(playerChoice=='A')
        break;
      char computerChoice=getComputerMove();
      int result=getResult(playerChoice,computerChoice);

      if(result==0)
       cout<<"\n Draw Game!"<<endl;
      else if(result==1)
       cout<<"\n Congress! Player Won the Game!"<<endl;
      else
       cout<<"\n Congress! Computer Won the Game!"<<endl;
     
      cout<<"\t\t\t Player Move : "<<playerChoice<<endl;
      cout<<"\t\t\t Computer Move : "<<computerChoice<<endl;
    }while(1);
    return 0; 

}