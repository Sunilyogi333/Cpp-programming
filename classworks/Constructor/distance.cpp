#include <iostream>
using namespace std;
class Distance
{
    int km, m;

 public:
    Distance()
    {
        km = 0;
        m = 0;
    }
    Distance(int k, int mr)
    {
        km = k;
        m = mr;
    }
    Distance(Distance &D1,int mr)
    {
        km=D1.km;
        m=mr;
    }
    void display()
    {
        cout<<"The distance is :"<< km<<"km "<<"and "<<m<<"meters"<<endl;
    }
    void add(Distance D1, Distance D2)
    {
        m = D1.m + D2.m;
        int kms = m / 1000;
        m = m % 1000;
        km = kms + D1.km +D2.km;

    }
};
int main()
{
    Distance D1(3,750), D2(D1, 500);
    D1.display();
    D2.display();
    D2.add(D1, D2);
    cout<<"After addition"<<endl;
    D2.display();
    return 0;
}
