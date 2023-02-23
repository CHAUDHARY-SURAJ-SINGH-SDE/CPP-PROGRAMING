// write a program to calculate the sum of digits of a 3 digit number
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int temp,sum=0,num;
    cout<<"please enter any number:\n";
    cin>>num;
    while (num>0)
    {
        temp= num%10;
        sum= sum+temp;
        num= num/10;
    }
    cout<<"sum of digit "<<"is ::"<<sum;
    return 0;
}


    
