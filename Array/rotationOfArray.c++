#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    k = k % n;
    int ansArray[n];
    int j =0;
for (int i = n-k; i <n; i++)
{
    ansArray[j]=arr[i];
    j++;
}
for (int i = 0; i <= n-k; i++)
{
    ansArray[j] = arr[i];
    j++;
}
for (int  i = 0; i <n; i++)
{
    cout<<ansArray[i]<<" ";
}
}
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of array:\n";
    cin >> size;
    int array[size];
    cout << "enter the element of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "the element you have entered are:\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "please enter the number of rotation:\n";
    int rotation=0;
    cin>>rotation;
    cout << "the array after rotation: ";
    rotateArray(array,size,rotation);
    return 0;
}
