#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int size, element, occurence=0;
    cout << "enter the size of array"
         << "\n";
    cin >> size;
    int array[size];
    cout << "enter the element of the array:"<< "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout<<"you have entered "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    cout << "enter the element to find the occurence"<<endl;
    cin >> element;
    for (int i = 0; i<size; i++)
    {
        if (element == array[i])
        {
            occurence = i;
        }
    }
    cout << "the last occurence of " << element << " is " << occurence;
    return 0;
}