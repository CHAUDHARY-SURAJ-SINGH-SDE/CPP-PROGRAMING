#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        for (int j = (2 * i - 1); j >= 1; j--)
        {
            cout << "*";
        }

        cout << "\n";
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}