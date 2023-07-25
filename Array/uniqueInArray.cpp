#include<iostream>
using namespace std;
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
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; i < size; j++)
        {
            if (array[i]==array[j])
            {
            array[i]=array[j]=-1;
            }  
        }
    }
    cout << "the unique element in the array is:"
         << "\n";
    for (int  i = 0; i < size; i++)
    {
        if (array[i]>=0)
        {
            cout<<array[i]<<" ";
        }
        
    }
    return 0;
    
}
