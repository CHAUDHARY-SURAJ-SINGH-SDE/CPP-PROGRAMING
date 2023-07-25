#include <iostream>
#include <vector>
using namespace std;
void prefixSum(vector<int> &v)
{
  for (int  i = 1; i < v.size(); i++)
  {
    v[i]= v[i]+v[i-1];
  }
}
int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of vector:\n";
    cin >> size;
    vector<int> myVec(size);
    cout << "Enter the element of vector\n";
    for (int &ele : myVec)
    {
        cin >> ele;
    }
    cout << "you have entered:\n";
    for (int ele : myVec)
    {
        cout << ele << " ";
    }
    cout<<"After getting the prefix sum of element of the vector is:\n";
    prefixSum(myVec);
    for (int ele : myVec)
    {
        cout << ele << " ";
    }
    return 0;
}
