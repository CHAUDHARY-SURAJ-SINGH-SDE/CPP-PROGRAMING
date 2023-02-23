/*print the square pattern  of number takin input from the user to print the number*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, colomn, row;
    cout << "please enter the number of row's::";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = i; j <=row; j++)
        {
            cout <<j;
        }
        for (int k =1 ; k <= (i-1); k++)
        {
            cout<<k;
        }
        
        cout << "\n";
    }
    return 0;
}
