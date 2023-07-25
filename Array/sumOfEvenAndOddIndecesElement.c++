#include <iostream>
using namespace std;
int sumOfEvenIndeces(int arr[], int n);
int sumOfOddIndeces(int arr[], int n);
int main(int argc, char const *argv[])
{
    int size;
    cout << "enter the size of array: ";
    cin >> size;
    int array[size];
    cout << "enter the element of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "you have entered " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout<<endl;
    int evenIndexsum =sumOfEvenIndeces(array, size);
    int oddIndexSum = sumOfOddIndeces(array,size);
    cout<<"sum of the elements those are at even indeces is: "<<evenIndexsum<<"\n";
    cout<<"sum of the elements those are at odd indeces is: "<<oddIndexSum;
    return 0;
}
int sumOfEvenIndeces(int arr[],int n){
    int sum= 0;
    for (int  i = 0; i < n; i++)
    {
        if (i%2==0)
        {
         sum+=arr[i];   
        }    
    }
    return sum;    
}
int sumOfOddIndeces(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
         sum += arr[i];
        }
    }
    return sum;
}
