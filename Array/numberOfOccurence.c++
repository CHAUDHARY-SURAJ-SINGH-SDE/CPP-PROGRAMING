#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){

     int size, element,count=0;
     cout << "enter the size of array"
          << "\n";
     cin >> size;
     int array[size];
     cout << "enter the element of the array:"
          << "\n";
     for (int i = 0; i < size; i++)
     {
         cin >> array[i];
    }
    cout<<"enter the element to find the occurence";
    cin>>element;
    for (int i =0 ; i < size; i++)
    {
         if (element == array[i])
         {
            count++;
         }
    }
    cout<<"the number of occurence of "<<element<<" is " << count;
    return 0;
}