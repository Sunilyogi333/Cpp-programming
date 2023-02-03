/*WAP to convert distace in miles to the distance in kilometers and meters*/
#include <iostream>
using namespace std;
class Distance
{
    int kilometer, meter;

public:
    Distance() {}
    Distance(double miles)
    {
        double kilo = miles * 1.609344;
        kilometer = int(kilo);
        meter = (kilo - kilometer) * 1000;
    }
    void display()
    {
        cout << "Distance : " << kilometer << " Kilometers and " << meter << " meters" << endl;
    }
};
int main()
{
    Distance D = 5.5;
    cout << "After addition " << endl;
    D.display();
    return 0;
}