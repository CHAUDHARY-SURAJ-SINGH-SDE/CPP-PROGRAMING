/*write a program that take the element of array from user and provide the output as sum of the array*/

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,sum=0;
    cout<<"please enter the size of array:";
    cin>>n;
    int array[n];
    cout<<"please enter "<<n<<" element to  add there sum:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
         sum += array[i];
    }
    cout<<"the sum of elements is: "<<sum;
    
    

    return 0;
}
