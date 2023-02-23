#include<iostream>
using namespace std;
bool even(int num);
void separateArray(int arr[], int n) ;
int main(int argc, char const *argv[])
{
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int array[size];
    cout<<"enter the element of the array:";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"you heve entered the array is :\n";
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout << '\n';
    separateArray(array ,size);
return 0;
}
bool even(int num){
    if (num%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}
void separateArray(int arr[],int n){
    int Even[n],odd[n];
    int e=0,o=0;
    for (int i = 0; i < n; i++)
    {
        if (even(arr[i])==true)
        {
            Even[e]=arr[i];
            e++;
        }
        else{
            odd[o]=arr[i];
            o++;
        }
    }
    cout<<"even number in the array are:\n";
    for (int i = 0; i < e; i++)
    {
        cout<<Even[i]<<" ";
    }
    cout<<endl;
    cout << "odd  number in the array are:\n";
    for (int j = 0; j < o; j++)
    {
        cout << odd[j] << " ";
    }
}