#include <iostream>
using namespace std;
int secLargest(int arr[], int size);
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
    cout << "the second largest element in the array: " << secLargest(array, size);
    return 0;
}
int secLargest(int arr[], int Size)
{
    int max = INT8_MIN;
    int Smax = INT8_MIN;
    for (int i = 0; i < Size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] > Smax && arr[i] != max)
        {
            Smax = arr[i];
        }
    }
    return Smax;
}
