#include<iostream>
#include<climits>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"limit of integer data type is:"<<INT64_MAX<<endl;
    cout<<"limit of unsigned integer data type is:"<<UINT_FAST64_MAX<<endl;
    cout<<"limit of integer data type is:"<<UINT16_MAX;
    cout<<"limit of integer data type is:"<<UINT32_MAX;
    cout<<"limit of integer data type is:"<<UINT16_MAX;
    cout<<"limit of integer data type is:"<<INT64_MAX;
        cout << "Range of types int and unsigned int"
             << endl
             << endl;
        cout << "Type Minimum Maximum"
             << endl
             << "--------------------------------------------"
             << endl;
        cout << "int " << INT_MIN << " "
             << INT_MAX << endl;
        cout << "unsigned int "
             << " 0 "
             << UINT_MAX << endl;
        return 0;
}
