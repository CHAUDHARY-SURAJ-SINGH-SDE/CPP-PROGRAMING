// Arithmatic operator are use to perform arithmatic operation of the operands;
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 25,b=5,result;
//Additon + operation/operator (add right operand to left operand)
    result = (a+b);
    cout<<result<<" addition\n";
//Subtration '-' subtract right side operand from left side operand
result = a-b;
cout<<result<<" subtraction\n";
//multiplication '*' multiply either operands
result = a*b;
cout<<result<<" multiplication\n";
//division '/' divide left side operand by right side operand and return quatant
result = a/b;
cout<<result<<" division\n";    
//modulo '%' devide left side operand by right side operand and return reminder
result = a%b;
cout<<result<<" modulas\n";
    return 0;
}
