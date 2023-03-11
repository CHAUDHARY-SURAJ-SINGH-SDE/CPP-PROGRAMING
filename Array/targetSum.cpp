/*Problem 1 find the number of pair whose sum is equal to the target value
 */
#include <iostream>
using namespace std;
int target(int arr[], int n, int v) ;
int main(int argc, char const *argv[])
{
    int size;
    cout << "please enter the size of array:";
    cin >> size;
    int array[size];
    cout << "please enter the element of array: \n";
    for (int i = 0; i < size;i++)
    {
        cin >> array[i];
    }
    cout<<"the array you have entered is:";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the target value: \n";
    int tV;cin>>tV;
    cout<<"the number of pair that make make the target value "<<tV<< " is: "<<target(array,size,tV);
    return 0;
}
int target(int arr[],int n,int v){
    int count=0;
    for(int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==v)
            {
                count++;
            }
        }
    }
    return count;
}