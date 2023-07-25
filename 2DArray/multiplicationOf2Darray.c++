#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int R1,C1;
    cout<<"Enter the size of Array\n";
    cin>>R1>>C1;
    int A[R1][C1];
    cout<<"Enter the element of first Array\n";
    for (int i = 0; i < R1; i++)
    {
        for (int  j = 0; j < C1; j++)
        {
            cin>>A[i][j];
        }
        
    }
    int R2, C2;
    cout << "Enter the size of second Array\n";
    cin >> R2 >> C2;
    int B[R2][C2];
    cout << "Enter the element of second Array\n";
    for (int i = 0; i < R2; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            cin >> B[i][j];
        }
    }
    if (R1!=C2)
    {
        cout<<"Multiplication of these Array is not posible\n";
    }else
    {
        int C[R1][C2];
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                int value = 0;
                for (int k = 0; k < R2; k++)
                {
                    value += A[i][k] * B[k][j];
                }
                C[i][j] = value;
            }
        }
        cout<<"First Array you have entered is\n";
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C1; j++)
            {
                cout << A[i][j];
                cout << " ";
            }
            cout << endl;
        }
        cout << "Second Array you have entered is\n";
        for (int i = 0; i < R2; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                cout << B[i][j];
                cout << " ";
            }
            cout << endl;
        }
        cout<<"Multiplication of these matrics is:\n";
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                cout<<C[i][j];
                cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
