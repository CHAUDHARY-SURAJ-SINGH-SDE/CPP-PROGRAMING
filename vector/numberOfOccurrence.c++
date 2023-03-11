#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int size, ele, occurence,count =0;
    cout << "enter the size of array" << endl;
    cin >> size;
    vector<int> myVec(size);
    cout << "enter the element of the vector one by one" << endl;
    for (int i = 0; i < myVec.size(); i++)
    {
        cin >> myVec[i];
    }
    cout << "you have entered the array: "<< "\n";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout << endl;
    cout << "enter the element to find the accurence" << endl;
    cin >> ele;
    for (int i = 0; i < myVec.size(); i++)
    {
        if (myVec[i] == ele)
        {
        count++;
        }
    }
    cout << "the number occurence of  " << ele << "  is " << count;
    return 0;
}
