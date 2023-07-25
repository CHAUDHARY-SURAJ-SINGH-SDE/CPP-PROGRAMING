#include<iostream>
using namespace std;
void swapValue(int x, int y) ;
void swapReference(int &x, int &y);
int main(int argc, char const *argv[])
{
    int a,b;
    cout<<"enter the value of call a and b:: \n";
    cin>>a;
    cin>>b;
    cout<<"********** CALL BY VALUE **********"<<endl;
    cout<<"before swaping the value of a is:: "<<a<<endl;
    cout<<"before swaping the value of b is:: "<<b<<endl;
    swapValue(a,b);//call by value
    cout<<endl;
    cout<< "after swaping tha actual value of a is::  " << a <<endl;
    cout<< "after swaping tha actual value of b is:: " << b << endl
    << "that is called call by value in which function work with value but not affect the actual value"<<endl;
    cout << "********** CALL BY REFERENCE **********" << endl;
    cout << "before swaping the value of a is:: " << a << endl;
    cout << "before swaping the value of b is:: " << b << endl;
    swapReference(a, b);//call by reference
    cout << endl;
    cout << "after swaping tha actual value of a is:: " << a << endl;
    cout << "after swaping tha actual value of b is:: " << b << endl;
    cout << "\nthat is  called call by reference that work with value and affect the actual value";
    return 0;
}
void swapValue(int x,int y){
    x+=y;
    y = x-y;
    x= x-y;
    cout << "after swaping value of a is:: " << x << endl;
    cout << "after swaping value of b is:: " << y << endl;
}
void swapReference(int &x, int &y)
{
    x += y;
    y = x - y;
    x = x - y;
    cout << "after swaping value of a is:: " << x<<endl;
    cout << "after swaping value of b is:: " << y<<endl;
}
