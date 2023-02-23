/*vector are the data structure that are similar to array but have dynamic in size
that means the size of vector can be increase or decrease according to the requirments*/
#include <iostream>
#include <vector> // the library that must be include to performe some task on vectors
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> myVec; // we can also declare vector with fix size
    // vector <int> myVec(10);
    myVec = { 46,7674,967464,9746549,928,119168080,5284198,457719,577181,28128,92819,4964442,4628,56258,456978,2135,4658 };
    // we can also find the size and capacity of vector
    int size = myVec.size();
    int capacity = myVec.capacity();//capacity vary compiler to compiler or direct preportional to size
    cout<<"the size of vector is: "<<size<<"\n";
    cout<<"the capacity of vector is: "<<capacity;
    return 0;
}
