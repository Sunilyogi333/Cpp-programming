/*Program to read the height in feet and inches and convert it to metre
by using user-defined to class type conversion*/
#include<iostream>
using namespace std;
class Convert
{
    double meter;
    public:
    Convert()
    {
        meter=0;
    }
    Convert(double m)
    {
        meter=m;
    }
    void display()
    {
        cout<<"In meter ="<<meter<<endl;
    }
};
class Height
{
    double feet,inch;
    public:
    Height()
    {
        feet=0;
        inch=0;
    }
    Height(double ft,double in)
    {
        feet=ft;
        inch=in;
    }
    void display()
    {
        cout<<"Height is: "<<feet<<"feet"<<inch<<"inch"<<endl;
    }
    operator Convert()
    {
         double c=((inch/12)+feet)/3.28084;
         return Convert(c);
       
    }
};
int main()
{
    Height H(5,7);
    Convert C;
    H.display();
    C=H;
    cout<<"After conversion"<<endl;
    C.display();
    return 0;
}