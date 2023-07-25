// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     // int i=0;
//     // while (i<9999)
//     // {
//     //     cout<<i<<" ";
//     //     i++;
//     // }
//     int row;
//     cin>>row;
//     for (int  i = 0; i < row; i++)
//     {
//         for (int  j =row; j >i ; j--)
//         {
//             cout<<" ";
//         }
//         for (int  k = 0; k <2*i-1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
    
//     return 0;
// }
#include <iostream>
using namespace std;

void sortArray(int arr[], int size)
{
    int low = 0;         // Index for the 0s
    int high = size - 1; // Index for the 1s
    int current = 0;     // Current index

    while (current <= high)
    {
        if (arr[current] == 0)
        {
            swap(arr[current], arr[low]);
            low++;
            current++;
        }
        else if (arr[current] == 1)
        {
            current++;
        }
        else
        {
            // swap(arr[current], arr[high]);
            high--;
        }
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    sortArray(arr, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}