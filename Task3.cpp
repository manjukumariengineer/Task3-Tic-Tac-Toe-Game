          //CODESOFT  INTERSHIP
          //Domain Name - C++ Programming
          //Task - 3 (Tic-Tac-Toe Game)
          //Intern Name - MANJU KUMARI
          //Batch - AUGUST Batch 4

#include<iostream>
using namespace std;
void boa_rd();
void win();
char player1 , player2;
int record =0 ;
int player = 1 , position ;
char board[] = {'0','1','2','3','4','5','6','7','8','9'};

int main()
{    
	int player = 1 , position ;
	cout << "Name of player1: " << endl;
	cin >> player1 ;
	cout << "Name of player2: " << endl;
	cin >> player2 ;
	
	//Creating a 3x3 grid as the game board
	boa_rd();
	while (record == 0)
{
	player = (player % 2 == 0) ? 2 : 1;
		
	//Assigning 'X' to player1 and 'O' to player2
	char symbol = (player == 1) ? 'X' : 'O';
		
	//Entering moves by players
	cout << "Enter number for player \n" << player << endl;
	cin >> position;
		
	if (position<1 || position>9)
{
	cout << "Invalid input" << endl;
}

	 board[position] = symbol;
     boa_rd();
	
	//switching players
	player++;
	
}    
    win();
    if (record == 1){
    cout << "Congratulation! You Win:" << endl;
	}
	else {
	cout << "It's a draw:" <<endl;
	}
}

    //Updating the game board
    void boa_rd()
{   
    cout << "\n";
    cout << "The 3x3 grid is shown below:\n\n";
	cout << "     |     |      \n";
	cout << "   "<<board[1]<<" | "<<board[2]<<"   | "<<board[3]<< endl;
	cout << "_____|_____|______\n";
    cout << "     |     |      \n";
	cout << "   "<<board[4]<<" | "<<board[5]<<"   | "<<board[6]<< endl;
	cout << "_____|_____|______\n";
    cout << "     |     |      \n";
	cout << "   "<<board[7]<<" | "<<board[8]<<"   | "<<board[9]<< endl;
	cout << endl;
}

    void win()
{  
    while (record != 1){
    if ((board[1] == board[2] ) && (board[2] == board[3]) && (board[1] != ' ' ))
    {
    record = 1 ;
    }
    else if ((board[4] == board[5] ) && (board[5] == board[6]) && (board[4] != ' ' ))
    {
    record = 1 ;
    }
    else if ((board[7] == board[8] ) && (board[8] == board[9]) && (board[7] != ' ' ))
    {
	record = 1 ;
    }
    
    else if ((board[1] == board[4]) && (board[4] == board[7]) && ( board[1] != ' '))
    {
    record = 1 ;
	}
	else if ((board[2] == board[5] ) && (board[5] == board[8]) && (board[2] != ' ' ))
    {
	record = 1 ;
    
    }
    else if ((board[3] == board[6] ) && (board[6] == board[9]) && (board[3] != ' ' ))
    {
	record = 1 ;
    
    }
    else if ((board[1] == board[5] ) && (board[5] == board[9]) && (board[1] != ' ' ))
    {
	record = 1 ;
    } 
	else if ((board[3] == board[5] ) && (board[5] == board[7]) && (board[3] != ' '))
    {     
	record = 1;
    }
    
    for (int i=1;i<=9;i++)
    { if (board[i]=='X' || board[i]=='O')
    record = -1;
    cout << "It's a draw!" << endl;
	}
}
}