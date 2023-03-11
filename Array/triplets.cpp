/*Problem 1 find the triplets number of pair whose sum is equal to the target value
 */
#include <iostream>
using namespace std;
int target(int arr[], int n, int v);
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of array:";
    cin >> size;
    int array[size];
    cout << "please enter the element of array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "the array you have entered is:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "enter the target value: \n";
    int tV;
    cin >> tV;
    cout << "the number of triplets pair that make make the target value " << tV << " is: " << target(array, size, tV);
    return 0;
}
int target(int arr[], int n, int v)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (arr[i] + arr[j]+arr[k] == v)
                {
                    count++;
                }
            }
            

        }
    }
    return count;
}