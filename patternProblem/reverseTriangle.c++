#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    for (int i = size; i > 1; i--)
    {
        for (int j =i; j >1; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}