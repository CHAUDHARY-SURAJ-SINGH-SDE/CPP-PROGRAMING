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
    myVec.insert(myVec.begin()+2, 25);//insert the element at 2 index (3 in understanding)
    cout<<"element after insertion\n";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }

    return 0;
}
