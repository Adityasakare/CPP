#include<iostream>
using namespace std;
int main()
{
    int r,n,m,sum=0;
    cout<<"Enter a number";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        sum+=r*r*r;

    }
    if(sum==m)
        cout<<"Armstrong Number";
    else
        cout<<"Not Armstrong Number";
    return 0;
}
