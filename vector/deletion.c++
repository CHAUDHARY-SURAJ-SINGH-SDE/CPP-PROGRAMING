#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> myVec;
    myVec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << endl;
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout << "\n";
    cout << "deletion from begining\n";                     // deletion from begningof vector
    myVec.erase(myVec.begin());                             // here begin() function return the 0th index of the vector
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout << endl;
    cout << "deletion from last of the vector\n";
    myVec.pop_back();                                      //delete the last element of vector
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout << endl;
    cout << "deletion from second position\n";            // deletion from given positon
    myVec.erase(myVec.begin() + 1);                      // here begin() function return the 0th index of the vector
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
                                                        //clear all the element of the vector
    cout<<endl;
    myVec.clear();
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout<<"all the elements are cleared";
    return 0;
}
