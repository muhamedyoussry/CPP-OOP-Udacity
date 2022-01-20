
/*Goal: create a generic class.
**Create a class called Multiplier.
**It multiplies two numbers - integers
**or floats. */

#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
private:
    T num1;
    T num2;
    T product;

public:
    void setM1(T x);
    void setM2(T y);
    void setProduct();
    void printEquation();
};

int main()
{
    Multiplier<int> multi1;
    Multiplier<float> multi3;

    int input1, input2;
    cin >> input1;
    cin >> input2;

    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();

    cout << "\n";
    float input3, input4;
    cin >> input3;
    cin >> input4;
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}

template <class T>
void Multiplier<T>::setM1(T x)
{
    num1 = x;
}

template <class T>
void Multiplier<T>::setM2(T y)
{
    num2 = y;
}

template <class T>
void Multiplier<T>::setProduct()
{
    product = num1 * num2;
}

template <class T>
void Multiplier<T>::printEquation()
{
    cout << num1 << " * " << num2 << " = " << product << endl;
}