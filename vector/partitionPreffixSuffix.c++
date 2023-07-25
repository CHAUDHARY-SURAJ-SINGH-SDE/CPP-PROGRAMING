/*check can we partition a array into two equal sum 
check if prefix sum of the array is equal to the suffix sum of the array*/
#include<iostream>
#include<vector>
using namespace std;
bool Partition(vector<int> &v){
    int totalSum= 0;
    int preffixSum = 0;
    int SuffixSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        totalSum +=v[i];
    }
    for (int  i = 0; i < v.size(); i++)
    {
        preffixSum = preffixSum+v[i];
        SuffixSum = totalSum - preffixSum;
        if (preffixSum==SuffixSum)
        {
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int size;
    cout<<"enter the size of the array:\n";
    cin>>size;
    vector<int> myVec(size);
    cout<<"Enter the element of the array:\n";
    for(int &ele:myVec){
        cin>>ele;
    }
    cout<<"you have entered the aray is:\n";
    for (int ele: myVec)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    if (Partition(myVec))
    {
        cout<<"Yes Such Partition is available:";
    }
    return 0;
}

