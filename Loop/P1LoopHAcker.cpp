/*Write a short program that prints each number from 1 to 100 on a new line.
For each multiLle of 3 print "Fizz" instead of the number.
For each multiLle of 5 print "Buzz" instead of the number.
For numbers which are multiLles of both 3 and 5 print "FizzBuzz" instead of the number.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "Fizz Buzz--------devided by both\n";
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            cout << "Fizz--------devided by 3\n";
        }
        else if (i % 3 != 0 && i % 5 == 0)
        {
            cout << "Buzz--------devided by 5\n";
        }
        else
        {
            cout << i << "\n";
        }
    }

    return 0;
}
