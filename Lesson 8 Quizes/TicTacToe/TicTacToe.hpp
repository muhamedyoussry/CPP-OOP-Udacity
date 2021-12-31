#include <bits/stdc++.h>

using namespace std;

class TicTacToe
{
    char gameSpace[4][4];

public:
    TicTacToe();
    void printSpace();
    int fourInRow(char value);
    int fourInCol(char value);
    int fourInDiag(char value);
    void setGameSpace(char value);
    int gameSpaceFilled();
};

TicTacToe::TicTacToe()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gameSpace[i][j] = '-';
        }
    }
}

void TicTacToe::printSpace()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << gameSpace[i][j] << "  ";
        }
        cout << endl;
    }
}

int TicTacToe::fourInRow(char value)
{
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == value)
            {
                count++;
            }
        }
        if (count == 4)
        {
            return 1;
        }
    }
    return 0;
}

int TicTacToe::fourInCol(char value)
{
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[j][i] == value)
            {
                count++;
            }
        }
        if (count == 4)
        {
            return 1;
        }
    }
    return 0;
}

// Diagnolas are :
// 00 11 22 33
// 03 12 21 30
int TicTacToe::fourInDiag(char value)
{
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        if (gameSpace[i][i] == value)
        {
            count++;
        }
        if (count == 4)
        {
            return 1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        if (gameSpace[i][3 - i] == value)
        {
            count++;
        }
        if (count == 4)
        {
            return 1;
        }
    }
    return 0;
}

void TicTacToe::setGameSpace(char turn)
{
    int row;
    int col;
    cout << "For user " << turn << "  enter row position : ";
    cin >> row;
    cout << "For user " << turn << "  enter column position : ";
    cin >> col;

    if (gameSpace[row][col] == '-')
    {
        gameSpace[row][col] = turn;
    }
    else
    {
        cout << "This position is taken by your opponent" << endl;
    }
}

// return 1 mean that the game space filled
int TicTacToe::gameSpaceFilled()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == '-')
            {
                return 0;
            }
        }
    }
    return 1;
}