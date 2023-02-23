#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = size; j>=i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = size; j >= i; j--)
        {
            cout <<i;
        }
        cout << "\n";
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = size; j >= i; j--)
        {
            cout <<j;
        }
        cout << "\n";
    }

    return 0;
}
