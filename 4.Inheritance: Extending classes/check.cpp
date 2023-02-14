#include <iostream>
using namespace std;
class A
{
    int v;

public:
    int p;
};
int main()
{
    A a;
    // cout<<a.v<<endl; unaccessable because it's private date member;
    cout << a.p << endl;
    cout<<"hello world"<<endl;
    return 0;
}