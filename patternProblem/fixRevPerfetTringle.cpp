#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    for (int i = 0; i <= size; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << " ";
        }
        for (int k=size-i;k>=1;k--)
        {
            cout << " *";
        }

        cout << "\n";
    }
    cout<<"Timer shape of the tringle is:\n";
    for (int i = 0; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = size - i; k >= 1; k--)
        {
            cout << " *";
        }

        cout << "\n";
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }

        cout << "\n";
    }

    return 0;
}