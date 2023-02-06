/*WAP to overload binary '+' operator in order to concatinate two strings 
such that S3=S1+S2 is possible.*/
#include<iostream>
#include<string.h>
using namespace std;
class StringAdd
{
    char name[50];
    public:
    StringAdd(){}
    StringAdd(const char *n)
    {
        strcpy(name,n);
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
    }
    StringAdd operator +(StringAdd s1)
    {
        StringAdd temp;
        strcpy(temp.name,name);
        strcat(temp.name,s1.name);
        return temp;
    }
};
int main()
{
    StringAdd S1("Sunil"), S2("Nath"), S3;
    S1.display();
    S2.display();
    S3=S1+S2;
    cout<<"After Concatination "<<endl;
    S3.display();
    return 0;
}