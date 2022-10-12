#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int balance;  

void Intro()
{
	cout<<"\n\n **WELCOME TO ROYAL CASINO** \n\n";
	cout<<"\n The rules of the game are simple!\n";
	cout<<"\n -> Bet a number from 1 to 10";
	cout<<"\n -> Winner gets amount of the bet";
	cout<<"\n -> Wrong bet! You loose amount of the bet";
	cout<<"\n\n Good Luck!";
}

void Game()
{
	int bet,luckynum;
	luckynum=rand()%10+1;
	do
	{
	    cout<<"\n Enter your bet:"; //Getting player's bet 
	    cin>>bet;
	 
	    if(bet>10||bet<1)
	    {
	 	    cout<<"\n The bet must be a number from 1 to 10, please enter again!";
	    }
	 
	}while(bet>10||bet<1);
	
	if (bet==luckynum)
	{
		cout<<"\n\n Congratulations you win yayyy!!\n\n";  //Comparing player's bet with the randomly automated number
		balance=balance+bet;
	} 
	
	else if(bet!=luckynum)
	{
		cout<<"\n\n You loose! Better luck net time :( \n\n";
		balance=balance-bet;
	}
	
}

int GameMenu()
{
	
	cout<<"\n\n ***GAME MENU*** \n\n";
	cout<<"1) Play Again \n";
	cout<<"\n2) Check Balance\n";
	cout<<"\n3) Exit\n ";
	
}


int main()
{
	srand(time(0));
	int option, val=0;
	char name[100];
	
	Intro();
	
	cout<<"\n\nPlayer Name:";  //Getting player's name
	cin>>name;
	
	cout<<"\n\nHi "<<name<<", enter the amount of money that you want to start with: $"; //Getting player's initial balance
	cin>>balance;
	
	Game();
	
	do
	{
		
	  GameMenu();
	
	  cout<<"\n\n Enter the option:";
	  cin>>option;
	
	  switch(option)
	  {
		  case 1:
		     if(balance<=0)
		       cout<<"\n\nInsufficient balance to play the game!\n";
		     else
		       Game();
		     break;
		
		case 2:
			cout<<"\n\nYour Balance is: $"<<balance;
			break;
		
		case 3:
			val=1;
		    break;
	  }  
   }while(val==0); // do while loop to continue the game till exited 
	return 0;
}
