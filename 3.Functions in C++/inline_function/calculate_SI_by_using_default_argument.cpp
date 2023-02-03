#include <iostream>
using namespace std;
float interest(float p, float t, float r = 10);
int main()
{
    float SI, p, t;
    cout << "Enter the principal and time" << endl;
    cin >> p >> t;
    SI = interest(p, t);
    cout << "Simple interest is" << SI << endl;
}
float interest(float p, float t, float r)
{
    return (p * t * r) / 1000;
}
