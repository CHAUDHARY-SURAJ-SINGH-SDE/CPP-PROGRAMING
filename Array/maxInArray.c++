/*write a programe that find the maximume number in the array and take the input from the user*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int max=0;
    cout<< "enter the size of array\n";
    cin>>n;
    int array[n];
    cout<<"please enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    max  = array[0];
    for (int i = 1; i <= n; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    cout<<"the maximum element in the array is : "<<max;
    return 0;
}
