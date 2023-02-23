#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout<<"please enter any number: ";
    cin>>number;
    bool flag = true;
    if (number==0||number==1)
    {
        flag=false;
    }
    for (int i = 2; i <number; i++)
    {
        if (number%i==0)
        {
            flag =false;
        }
    }
    if (flag==true){
        cout<<"prime number";
    }
    else{
        cout<<"non prime";
    }
    return 0;
}
