/*print the square pattern of star takin input from the user to print the number of star and line*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, colomn, row;
    cout << "please enter the number of stars::";
    cin >> colomn;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colomn; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
