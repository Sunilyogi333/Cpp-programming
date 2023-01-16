
#include<iostream>
using namespace std;
 class Btime;
 class Atime{
    int hr,min;
    public:
    void input(){
        cout<<"Enter the time in hour and minutes"<<endl;
        cin>>hr>>min;
    }
    void display(){
        cout<<"The time is:"<<hr<<" hours "<<min<<" minutes "<<endl;;
    }
    friend Atime add(Atime,Btime);
 };
 class Btime{
     int hr,min;
    public:
    void input(){
        cout<<"Enter the time in hour and minutes"<<endl;
        cin>>hr>>min;
    }
    void display(){
        cout<<"The time is:"<<hr<<" hours "<<min<<" minutes "<<endl;;
    }
    friend Atime add(Atime,Btime);
 };
 Atime add(Atime t1,Btime t2)
 {
 	Atime t3;
    t3.min=t1.min+t2.min;
    t3.hr=t3.min/60;
    t3.min=t3.min%60;
    t3.hr=t3.hr+t1.hr+t2.hr;
   return t3;
 }
 int main(){
    Atime T1,T3;
    Btime T2;
     T1.input();
     T2.input();
     T1.display();
     T2.display();
     T3=add(T1,T2);
     T3.display();
     return 0;
 }