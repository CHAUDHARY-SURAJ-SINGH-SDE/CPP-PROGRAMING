#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    cout << "\nTRINGLE OF STARS IS:\n";
    for (int i = size; i>=1; i--)
    {
        for (int j = i; j>=1; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\nTRINGLE OF NUMBER IS:\n";

    for (int i=size; i>=1; i--)
    {
        for (int j = i; j>=1; j--)
        {
            cout << j; }
        cout << "\n";
    }
    cout << "\nANOTHER TRINGLE OF NUMBER IS:\n";
    for (int i=size; i>=1; i--)
    {
        for (int j = i; j>=1; j--)
        {
            cout << i;
        }
        cout << "\n";
    }

    cout << "\nANOTHER 2 TRINGLE OF NUMBER IS:\n";
    for (int i = 1; i <=size; i++)
    {
        for (int j = 0; j<=(size-i); j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    cout << "\nANOTHER 3 TRINGLE OF NUMBER IS:\n";
    for (int i = 0; i <= size; i++)
    {
        for (int j = 1; j <= (size - i); j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}
