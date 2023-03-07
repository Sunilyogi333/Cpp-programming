// Display  program
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display() = 0;
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived class" << endl;
    }
};
int main ()
{
    Base *B;
    B= new Derived();
    B->display();
}