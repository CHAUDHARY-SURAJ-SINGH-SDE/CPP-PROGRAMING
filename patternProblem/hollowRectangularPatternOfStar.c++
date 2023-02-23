/*print the hOLLOW  pattern of star takinG input from the user to print the number of star and line*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, colunm, row;
    cout << "please enter the number of column::";
    cin >> colunm;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= colunm; j++)
        {
            if (i==1||i==row||j==1|j==colunm)
            {
            cout << "*";
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
