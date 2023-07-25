#include<iostream>
using namespace std;
int max(int arr[], int n) ;
int Smax(int arr[], int n) ;
int main(int argc, char const *argv[])
{
    int size;
    cout<<"enter the size of the array: \n";
    cin>>size;
    int array[size];
    cout<<"now enter the element of the array one by one: \n";
    for (int  i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"you have entered: \n";
    for (int  i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"the largest element in the array is: "<<max(array,size)<<endl;
    cout<<"the second largest element in the array is: "<<Smax(array,size)<<endl;

    return 0;
}
int max(int arr[],int n){
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int Smax(int arr[], int n)
{
    int smax = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > smax &&arr[i] != max(arr,n))
        {
            smax = arr[i];
        }
    }
    return smax;
}
