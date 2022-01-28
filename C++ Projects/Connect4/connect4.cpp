#include "connect4.hpp"

int main()
{
    char player[] = {'#', 'O'};
    char opponent[] = {'O', '#'};
    int turn = 0;

    cout << endl
         << ".............................................. Game Started .............................................." << endl
         << endl
         << endl;
    Connect4 c;
    while (c.fourInCol(opponent[turn % 2]) != 1 && c.fourInRow(opponent[turn % 2]) != 1 && c.fourInDiag(opponent[turn % 2]) != 1)
    {
        c.setGameSpace(player[turn % 2]);
        turn++;

        if (c.gameSpaceFilled() == 1)
        {
            cout << "Game is End, No One Win" << endl;
            return 0;
        }
    }

    cout << "Winner is $$ " << opponent[turn % 2] << " $$ Player" << endl;
    return 0;
}