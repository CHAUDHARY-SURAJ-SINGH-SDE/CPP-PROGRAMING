/*print the square patter  of number takin input from the user to print the number*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, colomn, row;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <=row; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
