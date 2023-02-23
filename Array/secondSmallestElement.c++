#include<iostream>
using namespace std;
int secSmallest(int arr[], int size) ;
int main(int argc, char const *argv[])
{
    int size;
    cout<<"please enter the size of array:\n";
    cin>>size;
    int array[size];
    cout<<"enter the element of the array:\n";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"the element you have entered are:\n";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout <<"the second smallest element in the array: "<<secSmallest(array,size);
     return 0;
}
int secSmallest(int arr[],int Size){
    int min = INT8_MAX;
    int Smin = INT8_MAX;
    for (int  i = 0; i < Size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        if (arr[i] < Smin&&arr[i]!=min)
        {
            Smin = arr[i];
        }
    }
    return Smin;
}
