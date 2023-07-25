#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cout << "Enter the size of Array\n";
    cin >> n >> m;
    int Array[n][m];
    cout << "Enter the element of first Array\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Array[i][j];
        }
    }
    int Transepose[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Transepose[i][j]=Array[j][i];
        }
        
    }
    cout<<"the original array is\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<Array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << "the Transepose of the original  array is\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Transepose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}