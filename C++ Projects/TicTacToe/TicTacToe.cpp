#include "TicTacToe.hpp"

int main()
{
    TicTacToe t;
    char key;
    string player1;
    string player2;
    cout << "First player name : ";
    cin >> player1;
    cout << "Second player name : ";
    cin >> player2;

    char opponent[2] = {'o', 'x'};
    char turn[2] = {'x', 'o'};
    int value = 0;
    while (t.fourInCol(opponent[value]) != 1 && t.fourInRow(opponent[value]) != 1 && t.fourInDiag(opponent[value]) != 1)
    {

        t.setGameSpace(turn[value]);
        value += 1;
        value = value % 2;
        t.printSpace();
        if (t.gameSpaceFilled() == 1)
        {
            cout << "Game is End, No one Win" << endl;
            return 0;
        }
    }
    cout << "Game Ends and Winner is $$ " << opponent[value] << " $$ Player";

    cout << endl
         << endl
         << "Press any key then press enter to exit " << endl;
    cin >> key;
    return 0;
}