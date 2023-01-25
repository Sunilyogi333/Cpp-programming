
#include <iostream>
using namespace std;
class Weight
{
    int kg, gm;

public:
    Weight()
    {
        kg = 0;
        gm = 0;
    }
    Weight(int k, int g)
    {
        kg = k;
        gm = g;
    }
    void display()
    {
        cout << kg << "kg and " << gm << "gram" << endl;
    }
    void add(Weight W1, Weight W2)
    {
        gm = W1.gm + W2.gm;
        int kgs = gm / 1000;
        gm = gm % 1000;
        kg = kgs + W1.kg + W2.kg;
    }
};
int main()
{
    Weight W1(5,750), W2(3, 450);
    W1.display();
    W2.display();
    cout<<"After addition"<<endl;
    W2.add(W1, W2);
    W2.display();
    return 0;
}
