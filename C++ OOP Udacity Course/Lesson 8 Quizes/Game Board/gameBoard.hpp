#include <iostream>

using namespace std;

class GameBoard
{
    char gameSpace[4][4];

public:
    GameBoard();
    void setGameSpace(int row, int col, char value);
    char getGameSpace(int row, int col);
    void printInfo();
    int fourInRow();
};

GameBoard::GameBoard()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gameSpace[i][j] = '-';
        }
    }
}
void GameBoard::setGameSpace(int row, int col, char value)
{
    if (value == '-' || value == 'x' || value == 'y')
    {
        gameSpace[row][col] = value;
    }
    else
    {
        cout << "Please enter single character from x, y, or '-'" << endl;
    }
}

char GameBoard::getGameSpace(int row, int col)
{
    return gameSpace[row][col];
}
void GameBoard::printInfo()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << gameSpace[i][j] << " ";
        }
        cout << endl;
    }
}

int GameBoard::fourInRow()
{
    for (int i = 0; i < 4; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == 'x')
            {
                count++;
            }
        }
        if (count == 4)
            return 1;
    }
    return 0;
}