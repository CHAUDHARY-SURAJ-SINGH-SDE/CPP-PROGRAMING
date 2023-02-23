/*P Print all values between 1 and 100, except if it’s a multiple of 3*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; i++)
    {
        if (i==55){
            break;
        }
        cout << i << "\t";
    }

    return 0;
}
