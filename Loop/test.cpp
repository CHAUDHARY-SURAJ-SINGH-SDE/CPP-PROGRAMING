#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // int ch = 'A';
    // cout<<"A = "<<ch<<"\n";
    int noOfCharactor;
    cout<<"enter the no of alphabate::";
    cin>>noOfCharactor;
    for (int i = 0; i <=noOfCharactor; i++)
    {
        cout<<char('a'+i)<<" ";
    }
    
    return 0;
}
