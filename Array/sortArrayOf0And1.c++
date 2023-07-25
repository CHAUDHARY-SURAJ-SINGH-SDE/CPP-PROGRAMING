/*WRITE THE PROGRAM TO SORT THE ARRAY THAT CONSISTING ONLY 0 AND 1*/
#include<iostream>
using namespace std;
void sort(int arr[], int n) ;
int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;
    int array[size];
    cout<<"Enter the element of the array (only 0 and 1)\n";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"you have entered the array:\n";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array is: \n";
    sort(array,size);
    return 0;
}
void sort(int arr[],int n){
    int zeroCount= 0;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==0){
            zeroCount++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i<zeroCount)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
    
}
