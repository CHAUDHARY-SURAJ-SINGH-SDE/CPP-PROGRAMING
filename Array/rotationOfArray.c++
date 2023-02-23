#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    k = k % n;
    for (int i = 0; i < k / 2; i++)
    {
        swap(arr[i], arr[k - i - 1]);
    }

    // Reverse the remaining elements
    for (int i = k; i < (n + k) / 2; i++)
    {
        swap(arr[i], arr[n + k - i - 1]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}
int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    rotateArray(arr, n, k);
    cout << "The rotated array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}