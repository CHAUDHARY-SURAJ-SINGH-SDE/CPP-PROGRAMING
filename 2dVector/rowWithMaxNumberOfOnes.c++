#include<iostream>
#include<vector>
using namespace std;
int maxOnesROw(vector<vector<int>>&V){
    int maxOnes= INT8_MIN;
    int maxOnesRow= -1;    
    int column = V[0].size();
    for (int  i = 0; i < V.size(); i++)
    {
        for (int j = 0; i < column; j++)
        {
            if (V[i][j]==1)
            {
               int  numberOfOnes=column-j;
                if (numberOfOnes>maxOnes)
                {
                    maxOnes=numberOfOnes;
                    maxOnesRow = i;
                }
                break;
                
            }
            
        }
        
    }
    return maxOnesRow;
    
}
int main(int argc, char const *argv[])
{
    int row,coln;
    cout<<"Enter the number of row and column of the vector\n";
    cin>>row>>coln;
    vector<vector<int>>vec(row,vector<int>(coln));
    cout<<"Enter the element of vector:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coln; j++)
        {
            cin>>vec[i][j];
        }
    }
    cout<<"You have enterd\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coln; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    int Row= maxOnesROw(vec);
    cout<<"the row which have maximum number of ones is:: "<<Row<<endl;
    return 0;
}

