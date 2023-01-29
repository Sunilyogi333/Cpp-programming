#include<iostream>
using namespace std;
class Program
{
    protected:
    char name[50];
    int age;
    public:
    void get_data()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter age"<<endl;
        cin>>age;
    }
    void display_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Teacher:public Program
{
    char department[50];
    public:
    void get_data()
    {
        cout<<"Enter Department: "<<endl;
        cin>>department;
    }
    void display_data()
    {
        cout<<"Department: "<<department<<endl;
    }
};
class Student:public Program
{
    char faculty[50];
    public:
    void get_data()
    {
        cout<<"Enter the faculty"<<endl;
        cin>>faculty;
    }
    void display_data()
    {
        cout<<"Faculty: "<<faculty<<endl;
    }
};
int main()
{
    Teacher T;
    Student S;
    cout<<"For Teacher"<<endl;
    T.Program::get_data();
    T.get_data();

    cout<<"For Student"<<endl;
    S.Program::get_data();
    S.get_data();

    cout<<"For Teacher"<<endl;
    T.Program::display_data();
    T.display_data();

    cout<<"For Student"<<endl;
    S.Program::display_data();
    S.display_data();
    return 0;
}