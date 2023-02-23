#include<iostream>
using namespace std;
bool prime(int n);
void separatePrime(int arr[], int n);
int main(int argc, char const *argv[])
{
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int array[size];
    cout<<"enter the element of array:";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"the array you have entered is:";
    for (int j = 0; j < size; j++)
    {
        cout<<array[j]<<" ";
    }
    cout<<endl;
    separatePrime(array,size);
    return 0;
}
bool prime(int n){
    if (n<=1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
void separatePrime(int arr[], int n){
    int Prime[n], non_prime[n]; 
    int p = 0, np = 0;
    for (int i = 0; i < n; i++)
    {
    if (prime(arr[i])==true)
        {
            Prime[p] = arr[i];
            p++;
        }
        else
        {
            non_prime[np] = arr[i];
            np++;
        }
    }
    cout<< "Prime numbers: ";
    for (int i = 0; i < p; i++)
    {
        cout<< Prime[i] << " ";
    }
    cout<<endl;
    cout << "Non-prime numbers: ";
    for (int i = 0; i < np; i++)
    {
        cout << non_prime[i] << " ";
    }
}
