/*Print the sum of the first ‘n’ natural numbers using a while loop where n is the input.A*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,n,sum=0;
    cout<<"please enter the nuber for sum\t";
    cin>>n;
    for (i = 0; i <=n; i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}
