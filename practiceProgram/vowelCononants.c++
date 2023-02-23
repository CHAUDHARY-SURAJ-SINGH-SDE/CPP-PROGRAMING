#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char alpbt;
    cout << "plese enter any alphabate charachtor:\n";
    cin >> alpbt;
    switch (alpbt)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << alpbt << " is vowel:\n";
        break;
    default:
        cout << alpbt << " is consonant:\n";
        break;
    }
    return 0;
}
