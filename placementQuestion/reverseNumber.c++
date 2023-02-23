#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int number;
    cout<<"enter any number to reverse\n";
    cin>>number;
    int reverse= 0;
    int lastdigit=0;
    while (number!=0)
    {
        lastdigit=number%10;
        reverse = reverse*10+lastdigit;
        number = number/10;
    }
    cout<<reverse;

    return 0;
}
