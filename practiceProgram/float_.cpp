#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float f= 123.456f;
    double d= 123456789.101213;
    long double ld = 123456789.1011121314l;
    cout<<setprecision(18);
    cout<<f<<endl;
    cout<<d<<endl;
    cout<<ld<<endl;
    return 0;
}
