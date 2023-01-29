/*Create a class of student with data members name,roll.no,deparment.
Input the information for a student and display that information.*/
#include<iostream>
using namespace std;
class Student
{
    char name[50];
    int roll;
    char department[50];
    public:
    void inputinfo();
    void displayinfo();
};
void Student::inputinfo()
{
    cout<<"Enter the Name"<<endl;
    cin>>name;
    cout<<"Enter the Roll: "<<endl;
    cin>>roll;
    cout<<"Enter the Deparment"<<endl;
    cin>>department;
}
void Student::displayinfo()
{
    cout<<"Name: "<<name<<endl<<"Roll :"<<roll<<endl<<"Department: "<<department;
}
int main()
{
    Student S;
    S.inputinfo();
    S.displayinfo();
    return 0;
}