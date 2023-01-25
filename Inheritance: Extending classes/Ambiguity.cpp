#include<iostream>
using namespace std;
class A
{
   public:
   void display()
   {
    cout<<"Hi, I am class A and parent class."<<endl;
   }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"Hi, I am class B and child class."<<endl;

    }
};
int main()
{
    B b;
    b.display();
    b.A::display();
    return 0;
}