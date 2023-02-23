#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int myArray[10];
    cout<<"please enter the element for array:\n";
    //using for
    int size = sizeof(myArray)/sizeof(myArray[0]);
    cout<<size<<"\n";
    for (int i = 0; i <size ; i++)
    {
        cin>>myArray[i];
    }
    cout<<"you have entered\n";
    for (int i = 0; i < size; i++)
    {
        cout<< myArray[i]<<"\t";
    }
    
}
