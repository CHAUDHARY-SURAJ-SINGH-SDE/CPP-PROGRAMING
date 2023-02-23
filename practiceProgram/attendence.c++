/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int numberOfClassesHeld, NumberOfClassesAttended, totalClass, perOfAllow;
    char medicalCause;
    cout << "please enter the number of class a student attend:\n";
    cin >> NumberOfClassesAttended;
    cout << "please enter the number of class a student Held:\n";
    cin >> numberOfClassesHeld;

    totalClass = numberOfClassesHeld + NumberOfClassesAttended;
    perOfAllow = (totalClass * .75);
    if (NumberOfClassesAttended >= perOfAllow)
    {
        cout << "student can sit in exam:\n";
    }
    else
    {
        cout << "please enter Y if you have any medical cause else N:\n";
        cin >> medicalCause;
        switch (medicalCause)
        {
        case 'y':
            cout << "student can sit in exam:\n";
            break;
        case 'n':
            cout << "student can't sit in exam:\n";
            break;
        case 'Y':
            cout << "student can sit in exam:\n";
            break;
        case 'N':
            cout << "student can't sit in exam:\n";
            break;

        default:
            cout << "enter a valid case:\n";
            break;
        }
    }

    return 0;
}
