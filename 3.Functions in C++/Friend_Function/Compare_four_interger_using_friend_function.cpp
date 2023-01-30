/*WAP to compare four integers number using friend function.
(You can have three class and each class can have only one integer number.)*/
#include<iostream>
using namespace std;
class B;
class C;
class A
{
    int a;
    public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    void display()
    {
        cout<<"a= "<<a<<endl;
    }
    friend void compare(A, B, C);
};
class B
{
    int b;
    public:
    void input()
    {
        cout<<"Enter the value of a"<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<"b= "<<b<<endl;
    }
    friend void compare(A, B, C);
};
class C
{
    int c;
    public:
    void input()
    {
        cout<<"Enter the value of c"<<endl;
        cin>>c;
    }
    void display()
    {
        cout<<"c= "<<c<<endl;
    }
    friend void compare(A, B, C);
};
void compare(A x, B y, C z)
{
    int d;
    cout<<"Enter the value of d"<<endl;
    cin>>d;
    if((x.a>y.b)&&(x.a>z.c)&&(x.a>d))
    {
        cout<<"The greatest number is: "<<x.a<<endl;
    }
    else if((y.b>z.c)&&(y.b>d))
    {
        cout<<"The greatest number is: "<<y.b<<endl;
    }
    else if(z.c>d)
    {
        cout<<"The greatest number is: "<<z.c<<endl;
    }
    else
    {
        cout<<"The greatest number is: "<<d<<endl;
    }
}
int main()
{
    A X;
    B Y;
    C Z;
    X.input();
    Y.input();
    Z.input();
    X.display();
    Y.display();
    Z.display();
    compare(X,Y,Z);
    return 0;
}