#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<vector<int>> myVec;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp ;
            cin>>temp;
            myVec.push_back(temp);
        }
        
    }
    cout<<"you have entered::\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<myVec[i][j];
        }
        cout<<endl;
    }
    return 0;
}
