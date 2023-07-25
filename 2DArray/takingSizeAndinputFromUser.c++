#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int row,column;
    cout<<"enter the size of row:";
    cin>>row;
    cout << "enter the size of column:";
    cin >> column;
    int array[row][column];
    cout<<"enter the element of the array:";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j< column; j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"you have entered:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
        
    }while (true)
    {
        cout << "Enter which particuler element do you want to access:\n";
        int n, m;
        cin >> n >> m;
        cout << array[n][m]<<endl;
    }
    
    
    return 0;
}
