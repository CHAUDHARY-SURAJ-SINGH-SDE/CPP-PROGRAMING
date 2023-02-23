#include <iostream>
using namespace std;
bool prime(int n) ;
int main(int argc, char const *argv[])
{
    int number;
    cout << "please enter any range to check prime: ";
    cin >> number;
    for (int i = 0; i <= number; i++)
    {
        if (prime(i)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
bool prime (int n){
    if (n==0||n==1)
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
