#include <iostream>
#include <vector>
using namespace std;
void mergedVector(vector<int> vec1, int size1, vector<int> vec2, int size2)
{
    vector<int>mergedvector(size1+size2);
    int i = 0, j = 0, k = 0;
    while (i<size1 and j<size2)
    {
        if (vec1[i]<vec2[j])
        {
            mergedvector[k]=vec1[i];
            i++;
            k++;
        }
        else
        {
            mergedvector[k] = vec2[j];
            j++;
            k++;
        }
    }
    while (j<size2)
    {
        mergedvector[k] = vec2[j];
        j++;
        k++;
    }
    while (i < size1)
    {
        mergedvector[k] = vec1[i];
        i++;
        k++;
    }
   for (int ele:mergedvector)
   {
    cout<<ele<<" ";
   }
   
    
}
int main(int argc, char const *argv[])
{
    int size1;
    int size2;
    cout << "Enter the size of vector::\t";
    cin >> size1;
    vector<int> myVec1(size1);
    cout << "Enter the size of vector2::\t";
    cin >> size2;
    vector<int> myVec2(size2);
    cout << "Enter the element of the vector:\n";
    for (int i = 0; i < myVec1.size(); i++)
    {
        cin >> myVec1[i];
    }
    cout << "Enter the element of the vector:\n";
    for (int i = 0; i < myVec2.size(); i++)
    {
        cin >> myVec2[i];
    }
    mergedVector(myVec1,size1,myVec2,size2);
    return 0;
}


