// Take values of length and breadth of a rectangle from user and check if it is square or not .
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length,breadth;
    cout << "please enter the length:\n";
    cin>>length;
    cout << "please enter the breadth:\n";
    cin>>breadth;
    if (length==breadth)
    {
        cout<<"it is a square:";
    }
    else
    {
        cout<<"it is a ractangular:";
    }
    return 0;
}
