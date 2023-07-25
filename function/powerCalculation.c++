#include<iostream>
using namespace std;
int power(int x,int y){
    long long int result = 1;
    if (y==0)
    {
        result= result;
    }
    else if (y>0)
    {
        while (y>0)
        {
            result*=x;
            y--;
        }
    }else
    {
        __throw_runtime_error("Please enter a Valid Power:\n");
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int num;int pow;
    while (true)
    {
        cout << "Enter the number wich you want to calculate:\n";
        cin >> num;
        cout << "enter the power of number which you want to calculate:\n";
        cin >> pow;
        cout << num << " "<< "power " << pow << " is ::" << power(num, pow);
        cout<<endl;
    }
    return 0;
}