#include <iostream>
#include <vector>
using namespace std;
void sortedSquares(vector<int> &v)
{

    int left_ptr = 0;
    int right_ptr = v.size()-1;
    // vector<int> ans;

    while (left_ptr <= right_ptr)
    {

        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {

            v.push_back( v[right_ptr]* v[right_ptr]);
            right_ptr--;
        }
        else
        {

            v.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(v.begin(),v.end());
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
            // cout << "\nafter sorting of Even and Odd the vector is:\n";
            cout << endl;
            sortedSquares(myVec);
            // for (int ele : myVec)
            // {
            //     cout << ele << " ";
            // }
            return 0;
        }
