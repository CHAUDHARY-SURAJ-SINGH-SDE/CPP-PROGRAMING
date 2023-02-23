/*print THE HOLLOW  pattern of star takin input from the user to print the number of star and line*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, row, colomn;
    cout << "please enter the number of stars::";
    cin >> colomn;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j =1; j<=colomn; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
