#include<iostream>
using namespace std;
class Student
{
    protected:
    char name[50];
    int roll;
    public:
    void get_data()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter roll"<<endl;
        cin>>roll;
    }
    void display_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
class Test:public Student
{
    protected:
    int sub1,sub2;
    public:
    void get_data()
    {
        cout<<"Enter the marks of sub1 and sub2"<<endl;
        cin>>sub1>>sub2;
    }
    void display_data()
    {
        cout<<"Sub1= "<<sub1<<endl<<"Sub2= "<<sub2<<endl;
    }
};
class Sports
{
    protected:
    int score;
    public:
    void get_data()
    {
        cout<<"Enter Score"<<endl;
        cin>>score;
    }
    void display_data()
    {
        cout<<"Score= "<<score<<endl;
    }
};
class Result:public Test, public Sports
{
    int total;
    public:
    void display_data()
    {
        total=sub1+sub2+score;
        cout<<"Total= "<<total<<endl;
    }
};
int main()
{
    Result R;
    R.Student::get_data();
    R.Test::get_data();
    R.Sports::get_data();
    R.Student::display_data();
    R.Test::display_data();
    R.Sports::display_data();
    R.display_data();
    return 0;
}
