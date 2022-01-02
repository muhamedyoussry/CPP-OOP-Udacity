#include <iostream>

using namespace std;

class Flower
{
private:
    string bloomtime;

public:
    Flower();
    void setBloomTime(string bloomIn);
    string getBloomTime();
};

Flower::Flower()
{
    bloomtime = "NA";
}
void Flower::setBloomTime(string bloomIn)
{
    bloomtime = bloomIn;
}
string Flower::getBloomTime()
{
    return bloomtime;
}

class Rose : public Flower // Rose has public access for all Flower members
{
private:
    string fragrance;

public:
    Rose();
    void setFragrance(string fragIn);
    string getFragrance();
};

Rose::Rose()
{
    fragrance = "NA";
}
void Rose::setFragrance(string fragIn)
{
    fragrance = fragIn;
}

string Rose::getFragrance()
{
    return fragrance;
}