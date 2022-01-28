#include <bits/stdc++.h>

using namespace std;

class Connect4
{
private:
    int rows = 6;         // define number of rows
    int cols = 6;         // define number of cols
    char gameBoard[6][6]; // define the game board as 2d array of characters

public:
    Connect4();
    void printSpace();
    void setGameSpace(char player);
    int fourInRow(char player);
    int fourInCol(char player);
    int fourInDiag(char player);
    int gameSpaceFilled();
};

// constructor of the class to make all the board empty
Connect4::Connect4()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            gameBoard[i][j] = '-';
        }
    }
    printSpace();
}

// print the current state of the game board
void Connect4::printSpace()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << gameBoard[i][j] << "    ";
        }
        cout << endl;
    }
    cout << "==========================" << endl;
    cout << "1    2    3    4    5    6" << endl
         << endl;
}

// accept a col position, change the board state,
// then print the current state from the printSpace function
void Connect4::setGameSpace(char player)
{
    int colPos;
    cout << "For user (" << player << ") enter your columns position : ";
    cin >> colPos;
    colPos--;

    // loop from bottom-up;
    // to start checking the board availability from bottom first
    for (int i = rows - 1; i >= 0; i--)
    {
        if (gameBoard[i][colPos] == '-')
        {
            gameBoard[i][colPos] = player;
            break;
        }
        else
        {
            cout << "Sorry, This place is taken by your opponent " << endl;
        }
    }
    cout << endl;
    printSpace();
}

int Connect4::fourInCol(char player)
{
    for (int j = 0; j < cols; j++)
    {
        int count = 0;
        for (int i = 0; i < rows; i++)
        {
            if (gameBoard[i][j] == player)
            {
                count++;
                if (count == 4)
                {
                    return 1;
                }
            }
            else
            {
                count = 0;
            }
        }
    }
    return 0;
}

int Connect4::fourInRow(char player)
{
    for (int i = 0; i < rows; i++)
    {
        int count = 0;
        for (int j = 0; j < cols; j++)
        {
            if (gameBoard[i][j] == player)
            {
                count++;
                if (count == 4)
                {
                    return 1;
                }
            }
            else
            {
                count = 0;
            }
        }
    }
    return 0;
}

int Connect4::fourInDiag(char player)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {

        if (gameBoard[i][i] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 1; i++)
    {
        if (gameBoard[i][i + 1] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 2; i++)
    {
        if (gameBoard[i][i + 2] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 1; i++)
    {
        if (gameBoard[i + 1][1] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 2; i++)
    {
        if (gameBoard[i + 2][i] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    // Reverse Diagonals
    count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (gameBoard[i][5 - i] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 1; i++)
    {
        if (gameBoard[i][4 - i] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 2; i++)
    {
        if (gameBoard[i][3 - i] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 1; i++)
    {
        if (gameBoard[4 - i][1] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    count = 0;
    for (int i = 0; i < rows - 2; i++)
    {
        if (gameBoard[3 - i][i] == player)
        {
            count++;
            if (count == 4)
            {
                return 1;
            }
        }
        else
        {
            count = 0;
        }
    }
    return 0;
}

int Connect4::gameSpaceFilled()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (gameBoard[i][j] == '-')
            {
                return 0;
            }
        }
    }
    return 1;
}