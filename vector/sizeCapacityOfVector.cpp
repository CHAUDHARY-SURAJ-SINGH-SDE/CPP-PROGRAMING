#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> myVec;// declaration of vector with variable size;
    myVec.resize(10);
    cout<<myVec.size()<<endl;
    cout<<myVec.capacity()<<endl;
    cout<<"------------------------------------------------------------------";
    cout<<endl;
    vector <int>  myVec1 ={1,2,3,4,5,6,7,8,9};//vector with element
    cout<<myVec1.size()<<"\n";
    cout<<myVec1.capacity();
return 0;
}
