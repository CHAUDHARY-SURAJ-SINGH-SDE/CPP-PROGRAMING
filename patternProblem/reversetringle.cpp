#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j >=i;j--)
        {
            cout<<" ";
        }
        for (int k = 1; k<=i; k++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << i;
        }

        cout << "\n";
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }

        cout << "\n";
    }

    return 0;
}
