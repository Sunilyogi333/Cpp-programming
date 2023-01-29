#include<iostream>
#include<string.h>
using namespace std;
class String
{
	  char a[50];
    public:
    void input(){
        cout<<"Enter string"<<endl;
        cin>>a;
    }
    void display(){
    	   cout<<"String="<<a<<endl;
	}
  friend void operator ==(String,String); 
};
void operator ==(String s1,String s2)
{
        int a=strcmp(s1.a,s2.a);
        if(a==0)
        cout<<"Strings are equal"<<endl;
    else
     cout<<"Strings are not equal"<<endl;   
    }
int main()
{
   String s1,s2;
   s1.input();
   s2.input();
   s1.display();
   s2.display();
   cout<<"After Operation"<<endl;
    s1==s2;
    return 0 ;
}
