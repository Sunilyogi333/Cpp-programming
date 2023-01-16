#include<iostream>
using namespace std;
class Alpha
{
    protected:
    int a;
    public:
    void inputA()
    {
        cout<<"Enter a ="<<endl;
        cin>>a;

    }
};
class Beta
{
    protected:
    int b;
    public:
    void inputB()
    {
        cout<<"Enter b= "<<endl;
        cin>>b;
    }
};
class Gamma:public Alpha,public Beta
{
    int c;
    public:
    void inputC()
    {
        cout<<"Enter C= "<<endl;
        cin>>c;
    }
    void display()
    {
        cout<<"A= "<<a<<"B= "<<b<<"C= "<<c<<endl;
    }
};
int main()
{
    Gamma G;
    G.inputA();
    G.inputB();
    G.inputC();
    G.display();
}