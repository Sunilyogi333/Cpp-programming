#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
    char name[50];
    int roll;
    public:
    Student(char *n, int r)
    {
        strcpy(name,n);
        roll=r;
    }
    void display(){
        cout<<"Student name: "<<name<<endl<<"Roll: "<<roll<<endl;

    }
};
class Test:public virtual Student
{
    protected:
    float sub1,sub2;
    public:
    Test(char *n, int r, float s1, float s2):Student(n, r)
    {
        sub1=s1;
        sub2=s2;
    }
    void display(){
        cout<<"Sub1="<<sub1<<endl<<"Sub2="<<sub2<<endl;
    }
};
class Sports:public virtual Student
{
    protected:
    int score;
    public:
    Sports(char *n, int r, int s):Student(n,r)
    {
        score=s;
    }
    void display()
    {
        cout<<"Score="<<score<<endl;
    }
};
class Result:public Test, public Sports{
    float total;
    public:
    Result(char *n, int r, float s1, float s2, int s):Student(n,r),Test(n,r,s1,s2),Sports(n,r,s)
    {
        total=s1+s2+s;
    }
    void display(){
        cout<<"Total = "<<total<<endl;
    }
};
int main(){
    Result R("Sunil",112233,98.5,99.5,90);
    R.Student::display();
    R.Test::display();
    R.Sports::display();
    R.display();

    return 0;
}