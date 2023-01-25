#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    int b;
    void input_ab();
    int get_a();
    void show_ab();
};
class B:public A
{
    int c;
    public:
    void multiply();
    void display();
    private:
    void check();
};
void A::input_ab()
{
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a>>b;
}
int A:: get_a()
{
    return a;
}
void A:: show_ab()
{
    cout<<"a="<<a<<" and b="<<b<<endl;
}
void B :: multiply()
{
  c=b*get_a();
}
void B::display()
{
    cout<<"c="<<c<<endl;
    check();
}
void B::check()
{
    cout<<"Hi,you just accessed me because I am inside another member function which is public"<<endl;
}
int main()
{
    B b;
    b.input_ab();
    b.get_a();
    b.show_ab();
    b.multiply();
    b.display();
    return 0;
}