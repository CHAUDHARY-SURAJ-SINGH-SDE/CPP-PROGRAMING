#include<iostream>
using namespace std;
void reverse(string &str) ;
int main(int argc, char const *argv[])
{
    string myStr;
    cout<<"enter any string\n";
    cin>>myStr;
    cout<<"you have entered :\n";
    cout<<myStr<<endl;
    cout<<"the reverse string is\n";
    reverse(myStr);
     return 0;
}
void reverse(string &str){
    int length = str.length()-1;
    int initial=0;
    char temp;
    while (length>0)
    {
        temp = str[initial];
        str[initial] = str[length];
        str[length]= temp;
        length--;
        initial++;
    }
    cout<<str;
    
}
