#include<iostream>
using namespace std;
int unqueElement(int arr[], int n) ;
int main(int argc, char const *argv[])
{
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int array[size];
    cout<<"enter the element of the array";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    } 
    cout<<"you have entered "<<endl;
    for (int  i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int unique = unqueElement(array,size);
    cout<<"the unique element in the array is: "<<unique;
    return 0;
}
int unqueElement(int arr[],int n){
    int unique=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            if (arr[i]!=arr[j])
            {
            continue;
            }
            else
            {
                return arr[i];
            }
               
        }
    }  
}
