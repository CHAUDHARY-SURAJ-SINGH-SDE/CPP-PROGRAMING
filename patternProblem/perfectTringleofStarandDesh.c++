/*print PERFECT TRIANGLE pattern of star takin input from the user to print the number of star and line*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, colomn, row;
    cout << "please enter the number of row's::";
    cin >> row;
    cout << "please enter the number of colomn's::";
    cin >> colomn;
    for (i = 1; i <= colomn; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if ((i + j) % 2 == 1)
            {
                cout << ".";
            }
            else
            {
                cout << "*";
            }
        }
        cout<<endl;
    }
    return 0;
}
