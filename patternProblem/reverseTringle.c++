/*print REVERSE TRIANGLE pattern of star takin input from the user to print the number of star and line*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, n, row;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = row; j>=i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
