#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of tringle::";
    cin >> size;
    for (int i = size; i >=1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << i;
        }
        cout << "\n";
    }
    /*ARROW OF NUMBER IS*/
    cout<<"ARROW OG NUMBER IS\n\n";
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << "\n";
        }
        for (int i = size; i >= 1; i--)
        {
            for (int j = i; j >= 1; j--)
            {
                cout << i;
            }
            cout << "\n";
        }

    return 0;
}

