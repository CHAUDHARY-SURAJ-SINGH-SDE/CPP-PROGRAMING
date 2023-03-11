#include <iostream>
using namespace std;
long int fact(int num);
int main(int argc, char const *argv[])
{
    int number;
    cout << "eter the number to find the factorial:";
    cin >> number;
    cout << "factorial is:" << fact(number);
    return 0;
}
long int fact(int num)
{
    long  int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
