#include <bits/stdc++.h>
#include <limits>
#include<iostream>
using namespace std;

// Driver Code
int main()
{
	cout<<"the max limit for a floating point number is :"<<numeric_limits<float>::digits10<<endl;
	cout<<"the max limit for a floating point number is :"<<numeric_limits<double>::digits10<<endl;
	cout<<"the max limit for a floating point number is :"<<numeric_limits<long double>::digits10<<endl;

	return 0;
}