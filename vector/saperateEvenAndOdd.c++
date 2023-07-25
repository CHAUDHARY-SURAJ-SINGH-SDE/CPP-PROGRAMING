#include<iostream>
#include<vector>
using namespace std;
void sortByparity(vector<int> &v) ;
int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of the Array/Vector: \n";
    cin >> size;
    vector<int> myVec(size);
    cout << "Enter the element of the Array/Vector\n";
    for (int i = 0; i < myVec.size(); i++)
    {
        cin >> myVec[i];
    }
    cout << "you have entered the Array//Vector:\n";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout<<myVec[i]<<" ";
    }
    cout << endl;
    cout << "sorted Array/Vector is: \n";
    sortByparity(myVec);
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    return 0;
}
void sortByparity(vector<int> &v){
    int leftPtr = 0;
    int rightPtr = v.size()-1;
    while (leftPtr<rightPtr)
    {
        if(v[leftPtr]%2!=0 && v[rightPtr]%2==0){
            swap(v[leftPtr],v[rightPtr]);
            leftPtr++;
            rightPtr--;
        }
        if (v[leftPtr]%2==0)
        {
            leftPtr++;
        }
        if (v[rightPtr] % 2 != 0)
        {
            rightPtr--;
        }
    }
    
}