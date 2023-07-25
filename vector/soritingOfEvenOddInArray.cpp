#include <iostream>
#include <vector>
using namespace std;
void saperateEvenOdd(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr]%2 !=0 && v[right_ptr]%2 == 0)
        {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr]%2== 0)
        {
            left_ptr++;
        }
        if (v[right_ptr]%2!= 0)
        {
            right_ptr--;
        }
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
    cout << "\nafter sorting of Even and Odd the vector is:\n";
    saperateEvenOdd(myVec);
    for (int ele : myVec)
    {
        cout << ele << " ";
    }
    return 0;
}
