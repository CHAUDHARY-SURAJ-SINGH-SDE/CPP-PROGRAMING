/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sallery ,timeOfService,bonous;
    cout<<"please enter your sallery\n";
    cin>>sallery;
    cout << "please enter your time of service\n";
    cin >>timeOfService;
    if (timeOfService>=5)
    {
        bonous= (sallery*10)/100;
        cout<<"your sallery is\n"<<sallery<<"\nyour bonous is\n"<<bonous<<"\nthis month sallary is\n"<<sallery+bonous;
    }
    else
    {
        cout << "your sallery is\n"<< sallery << "\nyour bonous is\n"<<"500\n"<< "\nthis month sallary is\n"<< sallery + bonous;
    }
    return 0;
}
