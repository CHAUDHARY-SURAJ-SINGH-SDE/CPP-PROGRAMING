/*Print the first k multiples of a number n*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=0, n;
    cout << "enter the number which you want to find the multiple\t";
    cin >> n;
    while (i<=100)
    {
        if (i % n == 0)
        {
            cout << i << "\t";
        }
        i++;
    }
    return 0;
}
