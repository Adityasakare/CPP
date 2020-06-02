#include<iostream>
using namespace std;
int main()
{
    int Principal_amt,  Time;
    float Rate, Interest;
    cout<<"Enter the Princepal ammount, Rate, Time(year)";
    cin>>Principal_amt>>Rate>>Time;
    Interest = Principal_amt*Rate*Time;
    cout<<"The Interest is $"<<Interest<<" simple interest for "<<Time<<" year";
    return 0;
}
