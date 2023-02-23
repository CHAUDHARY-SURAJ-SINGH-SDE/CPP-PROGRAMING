/*print PERFECT  REVERCE TRIANGLE pattern of star takin input from the user to print the number of star and line*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, k, row;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = row; i >=1; i--)
    {
        for (j = (row - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (k= (2 * i - 1); k>=1;k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}