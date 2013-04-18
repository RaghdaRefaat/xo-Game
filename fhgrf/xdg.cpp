#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void draw()
{
	system("cls");
	cout << "\n\n\t XO game \n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "_____ _____ _____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;

	cout << "     |     |     " << endl;
	cout << "_____ _____ _____" << endl << endl;
}


int checkwin()
{
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
		return 1;
	else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
		return 1;
	else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
		return 1;
	else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
		return 1;
	else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
		return 1;
	else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
		return 1;
	else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return 1;
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
		return 1;
	else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4'
     && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
		return 0;
	else
		return -1;
}

void NullArray()
{
	board[0][0] = '1';
	board[0][1] = '2';
	board[0][2] = '3';
	board[1][0] = '4';
	board[1][1] = '5';
	board[1][2] = '6';
	board[2][0] = '7';
	board[2][1] = '8';
	board[2][2] = '9';
}


void main()
{
	int player = 1;
	int winner = 0;
	char answer;
	char mark;
	int choice;
	int MenuChoice;
	while (true)
	{
		system("color 20");
		NullArray();
	    cout << "\n\n\t Hello In XO Game \n\n";
	    cout << "The Option Of The Game : \n " <<endl;
	    cout << "  1- one Player" <<endl;
	    cout << "  2- two Players " <<endl;
	    cin >> MenuChoice;
	    switch(MenuChoice)
	    {
	       case 1:
			   do
				{
					draw();
					if(player%2)
						player = 1;
					else 
					    player = 2;
					if(player == 1)
					{
						cout << "Player : Enter A Number " <<endl;
						cin >> choice;
					}
					else 
						choice = rand()%9;
					if(player == 1)
						mark = 'X';
					else 
						mark = 'O';
					if(choice == 1 && board[0][0] == '1')
				       board[0][0] = mark;
			       else if(choice == 2 && board[0][1] == '2')
				       board[0][1] = mark;
			       else if(choice == 3 && board[0][2] == '3')
				       board[0][2] = mark;
			       else if(choice == 4 && board[1][0] == '4')
				       board[1][0] = mark;
			       else if(choice == 5 && board[1][1] == '5')
				       board[1][1] = mark;
			       else if(choice == 6 && board[1][2] == '6')
				       board[1][2] = mark;
			       else if(choice == 7 && board[2][0] == '7')
				       board[2][0] = mark;
			       else if(choice == 8 && board[2][1] == '8')
				       board[2][1] = mark;
			       else if(choice == 9 && board[2][2] == '9')
				       board[2][2] = mark;
			       else
				     {
				       cout << "Invaild Move" <<endl;
				       player --;
				       cin.ignore();
				       cin.get();
				    }
			       winner = checkwin();
			       player ++;
				}while(winner == -1);
			  draw();
		      if(winner == 1)
			     cout << "Player "<< --player<< "Is Winner " <<endl;
		      else 
			     cout << "No One Won" <<endl;
		      cin.get();
			  cout << "Do You Want To Play Again ? " << "(Y/N)"<<endl;
			  cin >> answer;
			  if(answer == 'Y' || answer == 'y')
				  continue;
			  else if(answer == 'N' || answer == 'n')
		          exit(0);
			  break;
	        case 2:
				 do
		        {
			       draw();
			       if (player%2)
				       player = 1;
			       else
				       player = 2;
		           cout << "Player "<<player<<" : Enter A Number " <<endl;
		           cin >> choice;
			       if(player == 1)
				       mark = 'X';
			       else
				       mark = 'O';
			       if(choice == 1 && board[0][0] == '1')
				       board[0][0] = mark;
			       else if(choice == 2 && board[0][1] == '2')
				       board[0][1] = mark;
			       else if(choice == 3 && board[0][2] == '3')
				       board[0][2] = mark;
			       else if(choice == 4 && board[1][0] == '4')
				       board[1][0] = mark;
			       else if(choice == 5 && board[1][1] == '5')
				       board[1][1] = mark;
			       else if(choice == 6 && board[1][2] == '6')
				       board[1][2] = mark;
			       else if(choice == 7 && board[2][0] == '7')
				       board[2][0] = mark;
			       else if(choice == 8 && board[2][1] == '8')
				       board[2][1] = mark;
			       else if(choice == 9 && board[2][2] == '9')
				       board[2][2] = mark;
			       else
				     {
				       cout << "Invaild Move" <<endl;
				       player --;
				       cin.ignore();
				       cin.get();
			         }
			       winner = checkwin();
			       player ++;
		        }while(winner == -1);
		      draw();
		      if(winner == 1)
			     cout << "Player "<< --player<< "Is Winner " <<endl;
		      else 
			     cout << "No One Won" <<endl;
		      cin.get();
			  cout << "Do You Want To Play Again ? " << "(Y/N)"<<endl;
			  cin >> answer;
			  if(answer == 'Y' || answer == 'y')
				  continue;
			  else if(answer == 'N' || answer == 'n')
		          exit(0);
		      break;
	        default :
			  exit(0);
	     }
	 
       }
}




