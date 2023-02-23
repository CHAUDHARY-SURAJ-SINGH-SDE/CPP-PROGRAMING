// Take two int values from user and print greatest among them.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "please enter any number:\n";
    cin >> num1;
    cout << "please enter second number:\n";
    cin >> num2;
    if (num1 > num2)
    {
        cout << num1 << " is grater then " << num2;
    }
    else
    {
        cout << num2 << " is grater then " << num1;
    }
    return 0;
}
