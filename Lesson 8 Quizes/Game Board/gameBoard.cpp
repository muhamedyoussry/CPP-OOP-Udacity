#include "gameBoard.hpp"

int main()
{
    GameBoard g;
    g.setGameSpace(0,0,'x');
    g.setGameSpace(0,1,'x');
    g.setGameSpace(0,2,'x');
    g.setGameSpace(0,3,'y');
    g.setGameSpace(1,0,'x');
    g.setGameSpace(2,0,'x');
    g.setGameSpace(3,0,'x');
    g.setGameSpace(3,1,'x');
    g.setGameSpace(3,2,'x');
    g.setGameSpace(3,3,'x');
    
    if(g.fourInRow() == 1)
    {
        cout<<"X got four in a row! \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    g.printInfo();
    return 0;
}