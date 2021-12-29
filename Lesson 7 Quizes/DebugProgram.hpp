/*The header file for main.cpp
**This file has functions called from main.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void getUserInformation(string &userName, string &phoneNumber, string &userAddress);
string getRoomChoice();
int getTaskAssignment();
void printTask(int task);
void getRoomInformation(float &roomWidth, float &roomDepth, float &roomHeight);
void printJobInformation(string userName, string phoneNumber, string userAddress, string remodelRoom, int task);
void printRoomInformation(int task, float roomWidth, float roomDepth, float roomHeight);
float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight);
float calcPaintCost(const float PAINTCOST, float wallSurfaceArea);
float calcWallPaperCost(const float WALLPAPERCOST, float wallSurfaceArea);
void printWallCostComparisons(float paintCost, float wallpaperCost);
float calcFloorArea(float roomWidth, float roomDepth);
float calcCarpetCost(const float CARPETCOST, float floorArea);
float calcTileCost(const float TILECOST, float floorArea);
float calcWoodFloor(const float WOODCOST, float floorArea);
void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost);

void getUserInformation(string &userName, string &phoneNumber, string &userAddress)
{
    cout << "Customer Name: \n";
    getline(cin, userName);

    cout << "Customer Phone Number: \n";
    getline(cin, phoneNumber);

    cout << "Customer Address: \n";
    getline(cin, userAddress);
}

string getRoomChoice()
{ // We don't do anything with this information in the program
    string room;
    cout << "What room are we remodeling?: \n";
    getline(cin, room);
    return room;
}

int getTaskAssignment()
{ // the possible task list
    // enum task {paint, wallpaper, carpet, tile, woodFloor};
    int task;
    cout << "What job needs to be done?\n";
    cout << "0: Wallpaper\n";
    cout << "1: Paint\n";
    cout << "2: Carpet\n";
    cout << "3: Tile\n";
    cout << "4: Wood Floor\n";
    cin >> task;
    return task;
}

void printTask(int task)
{ // depending on which task was selected, print the corresponding string

    switch (task)
    {
    case 0:
        cout << " paint ";
        break;
    case 1:
        cout << " wallpaper ";
        break;
    case 2:
        cout << " carpet ";
        break;
    case 3:
        cout << " tile ";
        break;
    case 4:
        cout << " wood floor ";
        break;
    default:
        cout << " Ivalid task ";
    }
}

void getRoomInformation(int task, float &roomWidth, float &roomDepth, float &roomHeight)
{ // all the tasks require the width and depth.
  // wall treatments require the height also
    cout << "What is the room width? \n";
    cin >> roomWidth;
    cout << "What is the room depth? \n";
    cin >> roomDepth;
    if (task == 0 or task == 1)
    {
        cout << "What is the room height? \n";
        cin >> roomHeight;
    }
}

void printJobInformation(string userName, string phoneNumber, string userAddress, string remodelRoom, int task)
{ // print user information. This is the only place the
  // remodel room string is used
    cout << "\n\nPreparing order for:\n\n"
         << userName << "\n";
    cout << "\t" << phoneNumber << "\n";
    cout << "\t" << userAddress << "\n";
    cout << "\t"
         << "Remodeling the " << remodelRoom << " with";
    printTask(task);
}
void printRoomInformation(float roomWidth, float roomDepth, float roomHeight)
{
    cout << "The room width is : " << roomWidth << endl;
    cout << "The room depth is : " << roomDepth << endl;
    cout << "The room height is : " << roomHeight << endl;
}
float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight)
{                                                // Calculate the wall surface area. Assume the room is rectangluar
                                                 // Assume the two walls opposite each other are the same
    float wallWide = roomWidth * roomHeight * 2; // two walls
    float wallDeep = roomDepth * roomHeight * 2; // two walls
    return wallWide + wallDeep;
}

float calcPaintCost(const float PAINTCOST, float wallSurfaceArea)
{ // cost estimates are simply surface area times material per sq. foot
    return PAINTCOST * wallSurfaceArea;
}

float calcWallPaperCost(const float WALLPAPERCOST, float wallSurfaceArea)
{ // cost estimates are simply surface area times material per sq. foot
    return WALLPAPERCOST * wallSurfaceArea;
}

void printWallCostComparisons(float paintCost, float wallpaperCost)
{ // print the estimates for the wall coverings
    cout << "\nPaint Estimate: " << paintCost << "\n\n ";
    cout
        << "Wallpaper Estimate: " << wallpaperCost << "\n\n";
}

float calcFloorArea(float roomWidth, float roomDepth)
{
    return roomWidth * roomDepth;
}
float calcCarpetCost(const float CARPETCOST, float floorArea)
{ // cost estimates are simply surface area times material per sq. foot
    return CARPETCOST * floorArea;
}
float calcTileCost(const float TILECOST, float floorArea)
{ // cost estimates are simply surface area times material per sq. foot
    return TILECOST * floorArea;
}
float calcWoodFloor(const float WOODCOST, float floorArea)
{ // cost estimates are simply surface area times material per sq. foot
    return WOODCOST * floorArea;
}
void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost)
{ // print the estimates for the floor coverings
    cout << "\n\t\tCarpet Estimate: " << carpetCost;
    cout << "\n\t\tTile Estimate: " << tileCost;
    cout << "\n\t\tWood Estimate: " << woodFloorCost;
}
