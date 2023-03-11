#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int size,ele,occurence;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    vector <int> myVec (size);
    cout<<"enter the element of the vector one by one"<<endl;
    for (int i = 0; i <myVec.size() ; i++)
    {
        cin>>myVec[i];
    }
    cout<<"you have entered the array: "<<"\n";
    for (int  i = 0; i < myVec.size(); i++) {
        cout<<myVec[i]<<" ";
    }
    cout<<endl;
    cout << "enter the element to find the last accurence" << endl;
    cin>>ele;
    for (int i = 0; i < myVec.size(); i++)
    {
        if (myVec[i] == ele)
        {
            occurence = i;
        }
    }
    cout<<"the last occurence of "<<ele<<" is "<<occurence<<"\n";
    //decreasse the time complexity of the last occurence
    for (int  i = myVec.size(); i >0; i--)
    {
        if (myVec[i] == ele)
        {
            occurence = i;
        }
       break;
    }
    cout << "the last occurence of  " << ele << " with efficient time is " << occurence;

    return 0;
}

