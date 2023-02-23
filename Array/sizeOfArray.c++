#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int array[]={5265,546546,56432,3646,64210,64633,96415,64352};
    int size= sizeof(array);
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"size allocated of array in memory "<<sizeof(array)<<"\n";
    cout<<"number of element stored in array "<<length;

    return 0;
}

