#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // create variables
    int p = 10, q = 15;
    // == operator
    cout << (p == q) << endl; // false
    // != operator
    cout << (p != q) << endl; // true
    // > operator
    cout << (p > q) << endl; // false
    // < operator
    cout << (p < q) << endl; // true
    // >= operator
    cout << (p >= q) << endl; // false
    // <= operator
    cout << (p <= q)<<endl; // true

    return 0;
}
