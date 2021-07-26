#include <iostream>
using namespace std;
 
// L?p co s? th? nh?t
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
 
// L?p co s? th? hai
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
 
// L?p con k? th?a t? 2 l?p cha
class Car : private Vehicle, private FourWheeler
{
};
 
// main function
int main()
{
    Car obj;
    return 0;
}
