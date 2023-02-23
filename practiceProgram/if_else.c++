// Write a program to print the value of input if it is divisible by 3 or 5.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"please enter any number:";
    cin>>num;
    if (num%3==0||num%5==0)
    {cout<<"yes "<<num<<" is devide by 3 or 5";}
    else{cout <<"no "<<num<< "is not devisivale by 3 or 5";}
    return 0;
}
