/*WRITE THE PROGRAM TO SORT THE ARRAY THAT CONSISTING ONLY 0 AND 1*/
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &vec);
int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;
    vector <int> myVec(size);
    cout<<"Enter the element of the array (only 0 and 1)\n";
    for (int i = 0; i < myVec.size(); i++)
    {
        cin>>myVec[i];
    }
    cout<<"you have entered the array:\n";
    for (int i = 0; i < size; i++)
    {
        cout<<myVec[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array is: \n";
    sort(myVec);
    return 0;
}
void sort(vector<int>  & vec){
    int zeroCount= 0;
    for (int ele: vec)
    {
        if(ele==0){
            zeroCount++;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (i<zeroCount)
        {
            vec[i]=0;
        }
        else
        {
            vec[i]=1;
        }
    }
    for (int el: vec)
    {
        cout<<el<<" ";
    }  
    
}
