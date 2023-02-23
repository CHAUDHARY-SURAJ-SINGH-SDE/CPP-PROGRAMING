/*print the SQUARE pattern taking size from the user*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cout<<"please enter the size of the squre::";
    cin>>size;
    for (int  i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
    
    return 0;
}
