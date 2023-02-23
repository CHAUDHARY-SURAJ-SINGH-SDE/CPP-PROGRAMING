/*array is the liner data structure that is used to store homoginios data in a contigious memory location*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    string colour1 = "Red";
    string colour2 = "Green";
    string colour3 = "Blue";
    string colour4 = "Yellow";
    string colour5 = "Purple";

    cout << colour1 << endl;
    cout << colour2 << endl;
    cout << colour3 << endl;
    cout << colour4 << endl;
    cout << colour5 << endl;
    cout<<"-------------------------------------------------------------------\n";

    string color[] = {"Red","Green","Blue","Yellow","Purple"}; // intialization of array
    // cout<<color[0]<<endl;
    // cout<<color[1]<<endl;
    // cout<<color[2]<<endl;
    // cout<<color[3]<<endl;
    // cout<<color[4]<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << color[i] << endl;
    }

    return 0;
}
