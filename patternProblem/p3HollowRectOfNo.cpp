#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, colomn, row;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row; j++)
        { 
        if (j==1||j==row||i==1||i==row)
        {
            cout << j;
        }
        else
        {
            cout<<" ";
        }
        }
        cout << "\n";
    }
    return 0;
}
