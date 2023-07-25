/* 2d vector is the nested vector it is the vector of vector */
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int row,column;
    cout<<"Enter the size of main vector\n";
    cin>>row;
    cout << "Enter the size of nested vector\n";
    cin>>column;
    vector<vector<int>>myVec(row,vector<int>(column));
    /*
    we can also use resize() function
    vector<vector<int>>myVec;
    myVec.resize(row,vector<int>(column))
    */
    cout<<"Enter the element of the vector\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >>myVec [i][j];
        }
    }
    cout<<"you have entered\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<myVec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
