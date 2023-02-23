#include<iostream>
#include<climits>
using namespace std;
int main ()
{
    // if you define the variable  withen the given data type and if the number is
    // grater than the given number it will through overflow error
    // even if a single number is greater
    short short_int= 32767;
    unsigned short ushort_int= 65535;
    int _int = 2147483647;
    uint32_t _uint = 4294967295;
    long int long_int = 2147483647;
    unsigned long int u_long_int = 4294967295;
    long long int long_long_int = 9223372036854775807;
    unsigned long long int u_long_long_int = 18446744073709551615ull;
    cout<<"signed short int can store the maximume number thats it::"<<short_int<<"\n";
    cout<<"unsigned short int can store the maximume number thats it::"<<ushort_int<<"\n";
    cout<<"signed int can store the maximume number thats it::"<<_int<<"\n";
    cout<<"unsigned int can store the maximume number thats it::"<<_uint<<"\n";
    cout<<"long long int can store the maximume number thats it::"<<long_long_int<<"\n";    
    cout<<"unsigned long long int can store the maximume number thats it::"<<u_long_long_int<<"\n";
    return 0;
}
