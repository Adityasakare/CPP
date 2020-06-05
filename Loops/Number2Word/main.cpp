#include<iostream>
using namespace std;
int main()
{
    int r,n,m,rev=0,r1;
    cout<<"Enter a Number:";
    cin>>n;
    m=n;

    while(n>0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;


    }
    while(rev>0)
    {


        r1=rev%10;
        rev/=10;




    switch(r1)
    {
        case 1:cout<<"One";
            break;
        case 2:cout<<"Two";
            break;
        case 3:cout<<"Three";
            break;
        case 4:cout<<"Four";
            break;
        case 5:cout<<"Five";
            break;
        case 6:cout<<"Six";
            break;
        case 7:cout<<"Seven";
            break;
        case 8:cout<<"Eight";
            break;
        case 9:cout<<"Nine";
            break;
        default:cout<<"Invalid";
    }

    }

    return 0;
}
