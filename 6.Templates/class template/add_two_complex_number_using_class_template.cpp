/*WAP to add two complex number by using class template.*/
#include <iostream>
using namespace std;
template <class T>
class Complex
{
    T real, img;

public:
    Complex() {}
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << "The complex number is: " << real << " + i" << img << endl;
    }
    Complex addcomplex(Complex C1,Complex C2)
    {
      Complex C;
      C.real=C1.real+C2.real;
      C.img=C1.img+C2.img;
      return C;
    }
};
int main()
{
    Complex<int>C1(2,3),C2(4,5),C3;
    C1.display();
    C2.display();
    C3=C1.addcomplex(C1,C2);
    cout<<"After addition: "<<endl;
    C3.display();
    return 0;
}