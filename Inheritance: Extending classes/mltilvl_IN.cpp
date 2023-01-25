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
        cout<<"Enter the name of student"<<endl;
        cin>>name;
        cout<<"Enter roll number"<<endl;
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
    float sub1;
    float sub2;
    public:
    void get_marks()
    {
        cout<<"Enter the marks of sub1 and sub 2"<<endl;
        cin>>sub1>>sub2;
    }
    void display_marks()
    {
        cout<<"Sub 1 marks= "<<sub1<<endl<<"Sub2 marks= "<<sub2<<endl;
    }
};
class Result:public Test
{
    float total;
    public:
    void display()
    {
        total=sub1+sub2;
        cout<<"Total  marks= "<<total<<endl;
    }
};
int main()
{
    Result R;
    R.get_data();
    R.get_marks();
    R.display_data();
    R.display_marks();
    R.display();
    return 0;
}
