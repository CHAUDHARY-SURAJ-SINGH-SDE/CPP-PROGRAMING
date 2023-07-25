/*Rotate an vector 90 degree without using any extra space*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotation(vector<vector<int>>&V){
    int n= V.size();
    // transpose the matrix
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < i; j++)
        {
            swap(V[i][j],V[j][i]);
        }
        
    }
    //reverse the transepose matrix
    for (int i = 0; i < n; i++)
    {
        reverse(V[i].begin(),V[i].end());   
    }
    return;
}
int main(int argc, char const *argv[])
{
    int row, coln;
    cout << "Enter the number of row and column of the vector\n";
    cin >> row >> coln;
    vector<vector<int>> vec(row, vector<int>(coln));
    cout << "Enter the element of vector:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coln; j++)
        {
            cin >> vec[i][j];
        }
    }
    cout << "You have enterd\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coln; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"after rotation of 90 the vector is:\n";
    rotation(vec);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coln; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}