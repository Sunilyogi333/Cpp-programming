#include<iostream>
using namespace std;
class num
{
    static int count;
    public:
    num(){
        count++;
        cout<<count<<" Object has been created "<<endl;
    }
    ~num(){
        cout<<count<<" Object has been destroyed "<<endl;
        count--;
    }
};
int num::count;
int main(){
    num n1,n2,n3;
    return 0;
}