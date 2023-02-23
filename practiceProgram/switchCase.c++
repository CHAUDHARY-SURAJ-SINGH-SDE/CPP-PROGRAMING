#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char op;
    int num1, num2, result;
    cout << "please enter the number\n";
    cin >> num1;
    cout << "please enter the second number\n";
    cin >> num2;
    cout << "what operation you want to perform please enter (+, -, *, /, % ):\n";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    case '%':
        cout << num1 << " % " << num2 << " = " << num1 % num2;
        break;
    default:
        cout << "please enter a valid operator:";
        // operator doesn't match with any case constant (+, -, *, /)
        break;
    }
    return 0;
}
