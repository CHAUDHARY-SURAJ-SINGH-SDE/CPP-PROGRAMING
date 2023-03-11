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
    cout<<"insertion at begining\n";//insertion at begningof vector
    myVec.insert(myVec.begin(), 25);//here begin() function return the 0th index of the vector
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout<<endl;
    cout<<"insertion at last of the vector\n";
    myVec.push_back(50);
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    cout<<endl;
    cout << "insertion at specific position\n"; // insertion at given positon
    myVec.insert(myVec.begin()+2, 100);   // here begin() function return the 0th index of the vector 
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
    return 0;
}
