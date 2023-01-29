#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a();
    void display_ab();
};
class B:protected A
{
    int c;
    public:
    void multiply();
    void display();
};
void A::get_ab()
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}
int A::get_a()
{
  return a;
}
void A:: display_ab()
{
    cout<<"a= "<<a<<"b= "<<b<<endl;
}
void B::multiply()
{
    get_ab();
    display_ab();
    c=b*get_a();
}
void B::display()
{
    cout<<"c= "<<c<<endl;
}
int main()
{
    B b;
    b.multiply();
    b.display();
    return 0;
}