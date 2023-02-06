#include<iostream>
//#include<cstring> or
#include<string.h>
using namespace std;
class Bank
{
    char name[100];
    int ac_num;
    int bal;
public:
Bank()
{
    strcpy(name,"");
    ac_num=0;
    bal=0;
}
Bank(const char *n,int a,int b)
{
    strcpy(name,n);
    ac_num=a;
    bal=b;
}
void display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Account number:"<<ac_num<<endl;
    cout<<"Balance:"<<bal<<endl;
}
void deposit_withdraw()
{
    int deposit,withdraw;
    char choice;
    cout<<"Do you want to deposit or withdraw?"<<endl;
    cout<<"Enter d for deposit and w for withdraw"<<endl;
    cin>>choice;
 if (choice=='d')
 {
     cout<<"Enter the amount to be deposited"<<endl;
     cin>>deposit;
     bal=bal+deposit;
 }
 else if (choice=='w')
 {
     cout<<"Enter the amount to be withdrawn"<<endl;
     cin>>withdraw;
     bal=bal-withdraw;
 }
 else
 {
     cout<<"Invalid choice"<<endl;
 }
}
};
int main()
{
    Bank B1("Sunil",112233,100000);
    B1.display();
    B1.deposit_withdraw();
    B1.display();
    return 0;
}

