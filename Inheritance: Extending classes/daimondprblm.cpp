#include<iostream>
using namespace std;
class college
{
    protected:
    char name[50],location[50];
    public:
    void inputA()
    {
        cout<<"Enter name & Location of college"<<endl;
        cin>>name>>location;
    }
void displayA()
{
    cout<<"Name ="<<name<<"location ="<<location<<endl;
}
};
class Student:public virtual college
{
    protected:
    char name[50];
    int roll;
    public:
    void inputB()
    {
        cout<<"Enter name & roll of student"<<endl;
        cin>>name>>roll;
    }
    void displayB()
    {
        cout<<"Name ="<<name<<"roll= "<<roll<<endl;
    }
};
class Teacher:public virtual college
{
    protected:
    char name[50];
    int code;
    public:
    void inputC()
    {
        cout<<"Entre name & code of teacher"<<endl;
        cin>>name>>code;
    }
    void displayC()
    {
        cout<<"Name ="<<name<<"code ="<<code<<endl;
    }
};
class Book:public Student,public Teacher
{
    char bookname[50],writername[50];
    int code;
    public:
    void inputD()
    {
        cout<<"Enter name,write & code of book"<<endl;
        cin>>bookname>>writername>>code;
    }
    void displayD()
    {
        cout<<"Bookname ="<<bookname<<"Writername= "<<writername<<"code ="<<endl;
    }
};
int main()
{
    Book B;
    cout<<"For Student"<<endl;
    B.inputB();
    B.displayB();
    cout<<"for College"<<endl;
    B.inputA();
    B.displayA();
    cout<<"For Teacher"<<endl;
    B.inputC();
    B.displayC();
    cout<<"For Book"<<endl;
    B.inputD();
    B.displayD();
    return 0;
}

