#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<"This number is factor"<<i<<endl;

    }

    return 0;
}
